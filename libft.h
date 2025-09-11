#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int     ft_isalpha(int);
int     ft_isdigit(int);
int     ft_isalnum(int);
int     ft_isascii(int);
int     ft_isprint(int);
size_t  ft_strlen(const char *);
void    *ft_memset(void *, int , size_t );
void    ft_bzero(void *, size_t );
void    *ft_memcpy(void *, const void *, size_t );
void    *ft_memmove(void *, const void *, size_t );
size_t  ft_strlcpy(char *, const char *, size_t );
size_t  ft_strlcat(char *, const char *, size_t );
int     ft_toupper(int);
int     ft_tolower(int);
char    *ft_strchr(const char *, int );
char    *ft_strrchr(const char *, int);
int     ft_strncmp(const char *, const char *, size_t);
void    *ft_memchr(const void *, int, size_t);
int     ft_memcmp(const void *, const void *, size_t );
char    *ft_strnstr(const char *,	const char *, size_t );
#endif
