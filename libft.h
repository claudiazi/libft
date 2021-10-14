//
// Created by Zi Yuan on 14.10.21.
//

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>

int	ft_isalpha(int	c);
int	ft_isdigit(int	c);
int	ft_isalnum(int	c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void*	ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void*	ft_memmove(void *restrict dst, const void *restrict src, size_t n);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

#endif //LIBFT_H
