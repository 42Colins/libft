/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:03:39 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/17 17:23:20 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

//Part one
/////////////////

//ft_strlen
int		ft_strlen(const char *s);

//ft_calloc
void	*ft_calloc(size_t count, size_t size);

//ft_atoi
int		ft_atoi(const char *str);

//ft_isalnum
int		ft_isalnum(int c);

//ft_isalpha
int		ft_isalpha(int c);

//ft_isascii
int		ft_isascii(int c);

//ft_isdigit
int		ft_isdigit(int c);

//ft_isprint
int		ft_isprint(int c);

//ft_strchr
char	*ft_strchr(const char *s, int c);

//ft_strlcat
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

//ft_strlcpy
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

//ft_strncmp
int		ft_strncmp(const char *s1, const char *s2, size_t n);

//ft_strnstr
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

//ft_strrchr
char	*ft_strrchr(const char *s, int c);

//ft_tolower
int		ft_tolower(int c);

//ft_toupper
int		ft_toupper(int c);

//ft_bzero
void	ft_bzero(void *s, size_t n);

//ft_memset
void	*ft_memset(void *b, int c, size_t len);

//ft_memchr
void	*ft_memchr(const void *s, int c, size_t n);

//ft_memcmp
int		ft_memcmp(const void *s1, const void *s2, size_t n);

//ft_memcpy
void	*ft_memcpy(void *dst, const void *src, size_t n);

//ft_memmove
void	*ft_memmove(void *dst, const void *src, size_t len);

//ft_strdup
char	*ft_strdup(const char *s1);

//Part two
//////////////////

//ft_substr
char	*ft_substr(char const *s, unsigned int start, size_t len);

//ft_strjoin
char	*ft_strjoin(char const *s1, char const *s2);

//ft_strtrim
char	*ft_strtrim(char const *s1, char const *set);

//File descriptors
//////////////////

//ft_putchar_fd
void	ft_putchar_fd(char c, int fd);

//ft_putstr_fd
void	ft_putstr_fd(char *s, int fd);

//ft_putendl_fd
void	ft_putendl_fd(char *s, int fd);

//ft_putnbr_fd
void	ft_putnbr_fd(int n, int fd);


#endif
