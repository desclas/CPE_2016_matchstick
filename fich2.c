/*
** fich2.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 15:01:28 2017 Mathias
** Last update Thu Feb 23 15:02:01 2017 Mathias
*/

#include "match.h"

void ai_inf_case_more_2(char *map, int match1, int match2)
{
  if (match1 == 1 && match2 > 1)
    ai_cas5(map);
  else if (match1 > 1 && match2 == 1)
    ai_cas6(map);
  else if (match1 == 2 && match2 > 2)
    ai_cas7(map);
  else if (match1 > 2 && match2 == 2)
    ai_cas8(map);
  else if (match1 == 3 && match2 > 3)
    ai_cas9(map);
  else if (match1 > 3 && match2 == 3)
    ai_cas10(map);
  else if (match1 == 3 && match2 == 3)
    ai_cas11(map);
}

void ai_choice_inf(char *map)
{
  int i;
  int match1;
  int match2;

  i = 0;
  match1 = 0;
  match2 = 0;
  while (map[i] != '|')
    i += 1;
  while (map[i] == '|')
    {
      match1 += 1;
      i += 1;
    }
  while (map[i] != '|')
    i += 1;
  while (map[i] == '|')
    {
      match2 += 1;
      i += 1;
    }
  if (match1 <= 2 && match2 <= 2)
    ai_inf_case_less_2(map, match1, match2);
  else
    ai_inf_case_more_2(map, match1, match2);
}

void ai_inf_think(char *map, int line)
{
  int match;
  
  if (line == 1)
    {
      match = how_match(map);
      if (match != 1)
	ai_sub(map);
      else
	ai_lose(map);
    }
  else
    ai_choice_inf(map);
}

void ai_inf_choice(char *map)
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
    ai_inf_rand(map);
  else
    ai_inf_think(map, line);
}

void ini_tabs(int *ta, int *tb, int ia, int ib)
{
  int count;

  count = 0;
  while (count != ia)
    {
      ta[count] = 0;
      count += 1;
    }
  count = 0;
  while (count != ib)
    {
      tb[count] = 0;
      count += 1;
    }
}
