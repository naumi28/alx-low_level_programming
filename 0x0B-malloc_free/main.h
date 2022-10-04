#ifndef _MAIN_
#define _MAIN_
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void freemem(int **);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int get_wordcount(char *str);
void freememc(char **d);

#endif
