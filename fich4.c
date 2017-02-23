/*
** fich4.c for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 15:05:12 2017 Mathias
** Last update Thu Feb 23 15:05:36 2017 Mathias
*/

#include "match.h"

void ai_num_cas1(char *map, int max, int match)
{
  int i;
  int count;

  i = 0;
  count = 1;
  while ((match - count) % max != 1)
    count += 1;
  while (map[i] != '|')
    i += 1;
  while (map[i] == '|')
    i += 1;
  i -= 1;
  match = count;
  while (count != 0)
    {
      map[i] = ' ';
      count -= 1;
      i -= 1;
    }
  disp2(get_the_line(map), match);
}

void ai_num_cas5(char *map, int max, int match)
{
  int i;
  int line;
  int count;

  i = 0;
  count = 1;
  line = 0;
  until_pipe(map, &line, &i);
  while (map[i] == '|')
    i += 1;
  i -= 1;
  while ((match - count) % max != 2)
    count += 1;
  while (count != 0)
    {
      map[i] = ' ';
      count -= 1;
      i -= 1;
    }
  disp2(line, max);
}

void ai_num_cas6(char *map, int max, int match)
{
  int i;
  int line;
  int count;

  i = 0;
  count = 0;
  line = 0;
  until_pipe(map, &line, &i);
  while (map[i + 1] != '\n')
    i += 1;
  until_pipe(map, &line, &i);
  while (map[i] == '|')
    i += 1;
  i -= 1;
  while ((match - count) % max != 2)
    count += 1;
  max = count;
  while (count != 0)
    {
      map[i] = ' ';
      count -= 1;
      i -= 1;
    }
  disp2(line, max);
}

void ai_num_case_more_2(char *map, int match1, int match2, int max)
{
  if (match1 > max && match2 <= max)
    ai_num_cas5(map, max, match1);
  else if (match1 <= max && match2 > max)
    ai_num_cas6(map, max, match2);
  else
    ai_num_cas5(map, max, match1);
}

void ai_choice_num(char *map, int max)
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
    ai_num_case_more_2(map, match1, match2, max);
}
