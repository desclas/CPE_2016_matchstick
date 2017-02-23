/*
** match.h for  in /home/mathias/Bureau/matchstick
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Feb 23 14:41:01 2017 Mathias
** Last update Thu Feb 23 15:10:57 2017 Mathias
*/

#ifndef MATCH_H_
# define MATCH_H_

# include <unistd.h>
# include <stdlib.h>

void inistr(char *str, int max);
int getdigit(char *str);
void first_end(char *map, int *i, int line);
void the_space(char *map, int *i, int line, int count);
void pipes(char * map, int *i, int count);
void fill_map(char *map, int line);
char *my_revstr(char *str);
char *nbr_to_string(int match);
int disp_error(int error, int match);
int check_player(char *str);
int check_match(char *map, int i, int count);
void sub(char *map, int i, int count);
void disp2(int line, int match);
void disp(int line, int match);
int check_win(char *map, int player);
int the_play(char *map, int line, int match);
int player(char *map, int line, int max);
void disp_map(char *map);
void ai_inf_rand(char *map);
int how_match(char *map);
void ai_sub(char *map);
void ai_lose(char *map);
void ai_cas1(char *map);
void ai_cas2(char *map);
void ai_cas3(char *map);
void ai_cas4(char *map);
void ai_inf_case_less_2(char *map, int match1, int match2);
void until_pipe(char *map, int *line, int *i);
void ai_cas5(char *map);
void ai_cas6(char *map);
void ai_cas7(char *map);
void ai_cas8(char *map);
void ai_cas9(char *map);
void ai_cas10(char *map);
void ai_cas11(char *map);
void ai_inf_case_more_2(char *map, int match1, int match2);
void ai_choice_inf(char *map);
void ai_inf_think(char *map, int line);
void ai_inf_choice(char *map);
void ini_tabs(int *ta, int *tb, int ia, int ib);
void ai_num_rand2(int *higher, int *chang);
void ai_num_rand3(char *map, int *high);
void ai_num_rand4(char *map, int line, int max);
void ai_num_rand(char *map, int max);
int get_the_line(char *map);
void ai_num_cas1(char *map, int max, int match);
void ai_num_cas5(char *map, int max, int match);
void ai_num_cas6(char *map, int max, int match);
void ai_num_case_more_2(char *map, int match1, int match2, int max);
void ai_choice_num(char *map, int max);
void ai_num_think(char *map, int line, int max);
void ai_num_choice(char *map, int max);
void ai_play(char *map, int max, int line);
int game(char *map, int line, int max);
int who_win(int chekc);

#endif /* !MATCH_H_ */
