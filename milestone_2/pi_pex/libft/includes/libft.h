/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:48:55 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:48:55 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
// for testing
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_int_array
{
	int		*array;
	size_t	size;
}	t_int_array;

//sorting
int			ft_int_compare(int a, int b);
void		ft_insertion_sort(int *arr, size_t size, int (*compare)(int, int));

//array
t_int_array	*ft_new_int_arr(size_t size);

//list
t_list		*ft_lstnew(void *content);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstfree(t_list **lst);
t_list		*ft_lstlast(t_list *lst);

// put
void		ft_putchar_fd(char c, int fd);
int			ft_putchar(char c);
void		ft_putstr_fd(char const *s, int fd);
int			ft_putstr(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putendl(char const *s);
void		ft_putnbr_fd(int n, int fd);
int			ft_putnbr(int n);
int			ft_putunsigned(unsigned int n);
int			ft_putaddress(void *ptr);
int			ft_putbase(char *base, long n);

// search
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strstr(const char *str, const char *target);
char		*ft_strnstr(const char *str, const char *target, size_t len);

// length
int			ft_strlen(const char *str);

// check if character is :
int			ft_isdigit(int arg);
int			ft_isalpha(int arg);
int			ft_isalnum(int arg);
int			ft_isascii(int arg);
int			ft_isprint(int arg);
int			ft_isupper(int arg);
int			ft_islower(int arg);
int			ft_isspace(int arg);

// convert character
int			ft_toupper(int ch);
int			ft_tolower(int ch);

// comparing strings
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *str1, const char *str2, size_t n);

// copying
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t n);
char		*ft_strdup(const char *src);

// Concatenation
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
size_t		ft_strlcat(char *dest, const char *src, size_t size);

// convert types
int			ft_atoi(const char *str);
char		*ft_itoa(int n);

// mem
void		*ft_memset(void *dest, int x, size_t n);
void		ft_bzero(void *dest, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);

//str
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strnew(size_t size);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_substr(char const *s, unsigned int start, int len);
char		*ft_strjoin(char const *s1, char const*s2);
char		*ft_strtrim(char const *s, char const *set);
char		**ft_split(char const *s, char c);
t_list		*ft_split_lst(char const *s, char c);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);

#endif