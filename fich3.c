/*
** fich3.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 15:03:09 2017 Mathias
** Last update Thu Feb 23 15:04:13 2017 Mathias
*/

#include "match.h"

void ai_num_rand2(int *higher, int *chang)
{
  if (higher[0] < chang[0])
    {
      higher[0] = chang[0];
      higher[1] = chang[1];
    }
  chang[1] += 1;
  chang[0] = 0;
}

void ai_num_rand3(char *map, int *high)
{
  int i;
  int count;

  i = 0;
  count = 0;
  while (count != high[1])
    {
      if (map[i] == '\n')
	  count += 1;
      i += 1;
    }
  while (map[i] != '|')
    i += 1;
  while (map[i] == '|')
    {
      map[i] = ' ';
      i += 1;
    }
  disp2(count, high[0]);
}

void ai_num_rand4(char *map, int line, int max)
{
  int i;
  int count;

  i = 0;
  count = 0;
  while (count != line)
    {
      if (map[i] == '\n')
	count += 1;
      i += 1;
    }
  i += 1;
  while (map[i] != '\n')
    i += 1;
  while (map[i] != '|')
    i -= 1;
  count = 0;
  while (count != max)
    {
      map[i] = ' ';
      count += 1;
      i -= 1;
    }
  disp2(line, max);
}

void ai_num_rand(char *map, int max)
{
  int i;
  int higher[2];
  int chang[2];

  ini_tabs(higher, chang, 2, 2);
  i = 0;
  while (map[i] != '\0')
    {
      if (map[i] == '\n')
	ai_num_rand2(higher, chang);
      if (map[i] == '|')
	{
	  while (map[i] == '|')
	    {
	      chang[0] += 1;
	      i += 1;
	    }
	}
      i += 1;
    }
  if (higher[0] <= max)
    ai_num_rand3(map, higher);
  else
    ai_num_rand4(map, higher[1], max);
}

int get_the_line(char *map)
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
  return (line);
}
