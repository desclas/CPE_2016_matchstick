/*
** fichier3.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 14:54:02 2017 Mathias
** Last update Thu Feb 23 14:54:21 2017 Mathias
*/

#include "match.h"

int check_match(char *map, int i, int count)
{
  while (count != 0)
    {
      if (map[i] != '|')
	return (disp_error(5, 0));
      i -= 1;
      count -= 1;
    }
  return (0);
}

void sub(char *map, int i, int count)
{
  while (count != 0)
    {
      map[i] = ' ';
      count -= 1;
      i -= 1;
    }
}

void disp2(int line, int match)
{
  write(1, "AI removed ", 11);
  write(1, (nbr_to_string(match)), 10);
  write(1, " math(es) from line ", 20);
  write(1, (nbr_to_string(line)), 10);
  write(1, "\n", 1);
}

void disp(int line, int match)
{
  write(1, "Player removed ", 15);
  write(1, (nbr_to_string(match)), 10);
  write(1, " math(es) from line ", 20);
  write(1, (nbr_to_string(line)), 10);
  write(1, "\n", 1);
}

int check_win(char *map, int player)
{
  int i;

  i = 0;
  while (map[i] != '\0')
    {
      if (map[i] == '|')
	return (0);
      i += 1;
    }
  return (player);
}
