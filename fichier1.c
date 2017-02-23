/*
** fichier1.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 14:43:28 2017 Mathias
** Last update Thu Feb 23 15:12:08 2017 Mathias
*/

#include "match.h"

void inistr(char *str, int max)
{
  int i;

  i = 0;
  while (i != max)
    {
      str[i] = '\0';
      i += 1;
    }
}

int getdigit(char *str)
{
  int res;
  int i;

  i = 0;
  res = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 48 || str[i] > 57)
	return (-1);
      i += 1;
    }
  i = 0;
  while (str[i] != '\0')
    {
      res = (res * 10) + (str[i] - 48);
      i += 1;
    }
  return (res);
}

void first_end(char *map, int *i, int line)
{
  int space;
  
  space = line * 2 + 1;
  while (space != 0)
    {
      map[*i] = '*';
      *i += 1;
      space -= 1;
    }
  map[*i] = '\n';
  *i += 1;
}

void the_space(char *map, int *i, int line, int count)
{
  int space;
  
  space = line - count - 1;
  while (space != 0)
    {
      map[*i] = ' ';
      *i += 1;
      space -= 1;
    }
}

void pipes(char * map, int *i, int count)
{
  int space;
  
  space = count * 2 + 1;
  while (space != 0)
    {
      map[*i] = '|';
      *i += 1;
      space -= 1;
    }
}
