#include "match.h"

int main(int av, char **ac)
{
  int line;
  int max;
  char *map;

  max = 0;
  if (av == 3)
    {
      if ((line = getdigit(ac[1])) < 1 || line > 100)
	return (84);
      if ((max = getdigit(ac[2])) < 1)
	return (84);
      map = malloc(sizeof(char) * ((line * 2) + 2) * (line + 2) + 1);
      inistr(map, ((line * 2 + 2) * (line + 2)));
      fill_map(map, line);
      return (game(map, line, max));
    }
  else
    return (84);
   return (0);
}
