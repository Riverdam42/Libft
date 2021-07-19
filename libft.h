#ifndef _LIBFT_H_
#define _LIBFT_H_


#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

int		ft_atoi(char *str);
void ft_bzero(void *s, size_t n);
void *malloc(size_t size);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int ch, size_t n);
int ft_memcmp(const void* s1, const void* s2, size_t n);
void *ft_memcpy(void *buf1, const void *buf2, size_t n);
void *ft_memmove(void *buf1, const void *buf2, size_t n);
int ft_memset(void *buf, int ch, size_t n);
void ft_putchar_fd(char c, int fd);
void	ft_putnbr(int nb, int fd);
void	ft_putstr(char *s, int fd);
char *ft_strchr (const char *s, int c);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
int			ft_strlen(char *str);
char		*ft_strcat(char *dest, char *src);
void		*ft_strjoin(int size, char **strs, char *sep);
size_t ft_strlcpy (char *dst, const char *src, size_t size);
unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strnstr (const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
