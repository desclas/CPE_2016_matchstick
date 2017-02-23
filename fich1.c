/*
** fich1.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 15:00:17 2017 Mathias
** Last update Thu Feb 23 15:00:31 2017 Mathias
*/

#include "match.h"

void ai_cas7(char *map)
{
  int i;
  int line;
  int match;

  i = 0;
  line = 0;
  match = 0;
  until_pipe(map, &line, &i);
  i += 2;
  until_pipe(map, &line, &i);
  i += 2;
  while (map[i] == '|')
    {
      match += 1;
      map[i] = ' ';
      i += 1;
    }
  disp2(line, match);
}

void ai_cas8(char *map)
{
  int i;
  int line;
  int match;

  i = 0;
  line = 0;
  match = 0;
  until_pipe(map, &line, &i);
  i += 2;
  while (map[i] == '|')
    {
      match += 1;
      map[i] = ' ';
      i += 1;
    }
  disp2(line, match);
}

void ai_cas9(char *map)
{
  int i;
  int line;
  int match;

  i = 0;
  line = 0;
  match = 0;
  until_pipe(map, &line, &i);
  i += 3;
  until_pipe(map, &line, &i);
  i += 3;
  while (map[i] == '|')
    {
      match += 1;
      map[i] = ' ';
      i += 1;
    }
  disp2(line, match);
}

void ai_cas10(char *map)
{
  int i;
  int line;
  int match;

  i = 0;
  line = 0;
  match = 0;
  until_pipe(map, &line, &i);
  i += 3;
  while (map[i] == '|')
    {
      match += 1;
      map[i] = ' ';
      i += 1;
    }
  disp2(line, match);
}

void ai_cas11(char *map)
{
  int i;
  int line;

  i = 0;
  line = 0;
  until_pipe(map, &line, &i);
  i += 3;
  map[i] = ' ';
  disp2(line, 1);
}
