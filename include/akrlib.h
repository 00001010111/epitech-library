/*
** EPITECH PROJECT, 2026
** akrlib.h
** File description:
** Akeron's C library for Epitech.
*/

#ifndef AKRLIB_H_
    #define AKRLIB_H_
    #define NULL ((void*)0)
    #define ERROR 84
    #define END 0
    #define P_ALIAS "alias"

/* "a_" listed functions */

int a_putnbr(int nb);
char *a_strjoin(const char *s1, const char *s2);
void a_putchar(char c);
char *a_strcat(char const *dest, char const *src);
int a_putstr(char const *str);
char *a_strcpy(char *dest, char const *src);
int a_strcmp(char const *s1, char const *s2);
char *a_strdup(char const *src);
int a_strlen(char const *str);
char *a_strncat(char *dest, char const *src, int nb);
int a_strncmp(char const *s1, char const *s2, int n);

/* akeron lib standard functions */

char *arrtostr_n(char **arr, int start_index);
char **nstoarr(char *str, char *delim);
void cleanstr(char *str);
void freearr(char **array);
int arrlen(char **arr);
char *seekenv(char **env, char *key);
void printarr(char **__arr);
int strtoi(char const *str);
char **stoarr(char const *str);

#endif /* AKRLIB_H_ */
