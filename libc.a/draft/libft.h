#ifndef LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_isalpha(int nbr);
int	ft_isalnum(int nbr);
int	ft_isascii(int nbr);
int	ft_isdigit(int nbr);
int	ft_isprint(int nbr);
int	ft_tolower(int nbr);
int	ft_toupper(int nbr);
int	ft_atoi(const char *str);
char *ft_memchr(const void *str, int c, size_t amount);
int ft_memcmp(const void *str1, const void *str2, size_t amount);
char *ft_memmove(void *dest, const void *src, size_t amount);
char *ft_memcpy(void *dest, const void *src, size_t amount);
char *ft_memset(void *str, int chr, size_t amount);
char	*ft_strchr(const char *s, int c);
char *ft_strrchr(const char *str, int c);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *str1, const char *str2, size_t amount);
size_t ft_strlcpy(char *dest, char *src, size_t amount);
char	*ft_strnstr(const char *str, const char *target, size_t amount);
char    *ft_strdup(const char *orginal);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s, char const *set);
char    *ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_bzero(void *s, size_t amount);
char	**ft_split(char *s, char c);
#endif
