/*
** fichier4.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 14:55:30 2017 Mathias
** Last update Thu Feb 23 14:56:03 2017 Mathias
*/

#include "match.h"

int the_play(char *map, int line, int match)
{
  int i;
  int count;

  count = line + 1;
  i = 0;
  while (count != 0)
    {
      i += 1;
      while (map[i] != '\n')
	i += 1;
      count -= 1;
    }
  i -= 1;
  while (map[i] != '\n' && map[i] != '|')
    i -= 1;
  if (map[i] == '\n')
    return (disp_error(5, 0));
  if (check_match(map, i, match) != 0)
    return (-1);
  sub(map, i, match);
  disp(line, match);
  return (check_win(map, 1));
}

int player(char *map, int line, int max)
{
  int linep;
  int match;
  char nbr[7];

  inistr(nbr, 7);
  write(1, "Line: ", 6);
  read(0, nbr, 5);
  if (check_player(nbr) != 0)
    return (-1);
  linep = getdigit(nbr);
  if (linep < 1 || linep > line)
    return (disp_error(3, 0));
  inistr(nbr, 5);
  write(1, "Matches: ", 9);
  read(1, nbr, 7);
  if (check_player(nbr) != 0)
    return (-1);
  match = getdigit(nbr);
  if (match == 0)
    return (disp_error(2, 0));
  if (max != 0 && match > max)
    return (disp_error(4, max));
  return (the_play(map, linep, match));
}

void disp_map(char *map)
{
  int i;

  i = 0;
  while (map[i] != '\0')
    {
      write(1, &map[i], 1);
      i += 1;
    }
}

void ai_inf_rand(char *map)
{
  int i;
  int line;
  int match;

  i = 0;
  line = 0;
  match = 0;
  while (map[i] != '|')
    {
      if (map[i] == '\n')
	line += 1;
      i += 1;
    }
  while (map[i] != '\n')
    i += 1;
  while (map[i] != '|')
    i -= 1;
  while (map[i] == '|')
    {
      map[i] = ' ';
      match += 1;
      i -= 1;
    }
  disp2(line, match);
}

int how_match(char *map)
{
  int i;
  int match;

  i = 0;
  match = 0;
  while (map[i] != '|')
    i += 1;
  while (map[i] == '|')
    {
      match += 1;
      i += 1;
    }
  return (match);
}
