/*
** fichier2.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 14:45:29 2017 Mathias
** Last update Thu Feb 23 14:46:14 2017 Mathias
*/

#include "match.h"

void fill_map(char *map, int line)
{
  int i;
  int count;

  count = 0;
  i = 0;
  first_end(map, &i, line);
  while (count != line)
    {
      map[i] = '*';
      i += 1;
      the_space(map, &i, line, count);
      pipes(map, &i, count);
      the_space(map, &i, line, count);
      map[i] = '*';
      i += 1;
      map[i] = '\n';
      i += 1;
      count += 1;
    }
  first_end(map, &i, line);
}

char *my_revstr(char *str)
{
  char *rev;
  int i;
  int count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    i += 1;
  rev = malloc(sizeof(char) * i);
  inistr(rev, i);
  i -= 1;
  while (i != -1)
    {
      rev[count] = str[i];
      i -= 1;
      count += 1;
    }
  free(str);
  return (rev);
}

char *nbr_to_string(int match)
{
  char *nb;
  int i;

  i = 0;
  nb = malloc(sizeof(char) * 7);
  inistr(nb, 7);
  while (match != 0)
    {
      if (match > 9)
	{
	  nb[i] = (match % 10) + 48;
	  match -= (match % 10);
	  match /= 10;
	}
      else
	{
	  nb[i] = (match % 10) + 48;
	  match -= (match % 10);
	}
      i += 1;
    }
  return (my_revstr(nb));
}

int disp_error(int error, int match)
{
  char *c;
  
  if (error == 1)
    write(1, "Error: invalid input (positive number expected)\n", 48);
  else if (error == 2)
    write(1, "Error: you have to remove at least one match\n", 45);
  else if (error == 3)
    write(1, "Error: this line is out of range\n", 33);
  else if (error == 4)
    {
      write(1, "Error: you cannot remove more than ", 35);
      c = nbr_to_string(match);
      write(1, c, 7);
      free(c);
      write(1, " matches per turn\n", 18);
    }
  else if (error == 5)
    write(1, "Error: not enough matches on this line\n", 39);
  return (-1);
}

int check_player(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	str[i] = '\0';
      else if (str[i] < 48 || str[i] > 57)
	return (disp_error(1, 0));
      i += 1;
    }
  return (0);
}
