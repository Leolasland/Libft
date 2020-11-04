#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

int	ft_atoi(char *str);
void ft_bzero(void * s ,size_t  n);
void *ft_calloc(size_t num, size_t size);
int ft_isalpha(int ch);
int ft_isalnum(int ch);
int ft_isascii(int c);
int ft_isdigit(int ch);
int ft_isprint(int ch);
char *ft_itoa(int n);
void *ft_memccpy(void *dest, const void *source, int ch, size_t count);
void *ft_memchr(const void *buffer, int ch, size_t count);
int ft_memcmp(const void *buf1, const void *buf2, size_t count);
void *ft_memcpy(void *to, const void *from, size_t count);
void *ft_memmove(void *to, const void *from, size_t count);
void *ft_memset(void *buf, int ch, size_t count);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *str, int ch);
char *ft_strdup(char *src);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat (char *dst, const char *src, size_t size);
size_t ft_strlcpy (char *dst, const char *src, size_t size);
int	ft_strlen(char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp (char *s1, char *s2, unsigned int n);
char * ft_strnstr (const char *big, const char *little, size_t len);
char *ft_strrchr(const char *str, int ch);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int ch);
int ft_toupper(int ch);

#endif