#ifndef MAIN_H
#define MAIN_H

/* putchar - writes a character to stdout */
int _putchar(char c);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

int coincidence(char *a, char *b);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);




/* main - the main function of the program */
int main(void);

#endif /* MAIN_H */
