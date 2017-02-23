/*
** fichier6.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 14:58:31 2017 Mathias
** Last update Thu Feb 23 14:58:42 2017 Mathias
*/

#include "match.h"

void ai_cas4(char *map)
{
  int i;
  int line;

  i = 0;
  line = 0;
  while (map[i] != '|')
    {
      if (map[i] == '\n')
	line += 1;
      i += 1;
    }
  i += 1;
  map[i] = ' ';
  disp2(line, 1);
}

void ai_inf_case_less_2(char *map, int match1, int match2)
{
  if (match1 == 1 && match2 == 2)
    ai_cas1(map);
  else if (match1 == 2 && match2 == 1)
    ai_cas2(map);
  else if (match1 == 1 && match2 == 1)
    ai_cas3(map);
  else if (match1 == 2 && match2 == 2)
    ai_cas4(map);
}

void until_pipe(char *map, int *line, int *i)
{
  while (map[*i] != '|')
    {
      if (map[*i] == '\n')
	*line += 1;
      *i += 1;
    }
}

void ai_cas5(char *map)
{
  int i;
  int line;
  int match;

  i = 0;
  line = 0;
  match = 0;
  until_pipe(map, &line, &i);
  i += 1;
  until_pipe(map, &line, &i);
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

void ai_cas6(char *map)
{
  int i;
  int line;
  int match;

  i = 0;
  line = 0;
  match = 0;
  until_pipe(map, &line, &i);
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
