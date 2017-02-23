/*
** fich5.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 15:07:15 2017 Mathias
** Last update Thu Feb 23 15:15:38 2017 Mathias
*/

#include "match.h"

void ai_num_think(char *map, int line, int max)
{
  int match;
  
  if (line == 1)
    {
      match = how_match(map);
      if (match - 1 <= max)
	ai_sub(map);
      else if (match == 1)
	ai_lose(map);
      else
	ai_num_cas1(map, max, match);
    }
  else
    ai_choice_num(map, max);
}

void ai_num_choice(char *map, int max)
{
  int i;
  int line;
  
  i = 0;
  line = 0;
  while (map[i] != '\0' && line <= 2)
    {
      if (map[i] == '|')
	{
	  line += 1;
	  while (map[i] != '\n')
	    i += 1;
	}
      i += 1;
    }
  if (line > 2)
    ai_num_rand(map, max);
  else
    ai_num_think(map, line, max);
}

void ai_play(char *map, int max, int line)
{
  if (max >= line * 2 - 1)
    ai_inf_choice(map);
  else
    ai_num_choice(map, max);
}

int who_win(int check)
{
  if (check == 2)
    write(1, "I lost...  snif...  but I'll get you next time!!\n", 49);
  else if (check == 1)
    write(1, "You lose, too bad...\n", 21);
  return (check);
}

int game(char *map, int line, int max)
{
  int check;
  int count;

  check = 0;
  count = 1;
  while (check <= 0)
    {
      if (count == 1)
	{
	  disp_map(map);
	  write(1, "\nYour turn:\n", 12);
	}
      check = player(map, line, max);
      if (check == 0)
	{
	  disp_map(map);
	  count = 0;
	  write(1, "\nAI's turn...\n", 14);
	  ai_play(map, max, line);
	  check = check_win(map, 2);
	}
      count += 1;
    }
  return (who_win(check));
}
