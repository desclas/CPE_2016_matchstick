/*
** fichier5.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 14:57:15 2017 Mathias
** Last update Thu Feb 23 14:57:30 2017 Mathias
*/

#include "match.h"

void ai_sub(char *map)
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
  while (map[i - 1] != ' ' && map[i - 1] != '*')
    {
      match += 1;
      map[i] = ' ';
      i -= 1;
    }
  disp2(line, match);
}

void ai_lose(char *map)
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
  map[i] = ' ';
  disp2(line, 1);
}

void ai_cas1(char *map)
{
  int i;
  int line;

  line = 0;
  i = 0;
  while (map[i] != '|')
    {
      if (map[i] == '\n')
	line += 1;
      i += 1;
    }
  i += 1;
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

void ai_cas2(char *map)
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
  map[i] = ' ';
  disp2(line, 1);
}

void ai_cas3(char *map)
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
  map[i] = ' ';
  disp2(line , 1);
}
