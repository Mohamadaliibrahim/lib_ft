/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:16:02 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:16:02 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static void	fill_words(char const *s, char c, t_list **lst)
{
	size_t	i;
	size_t	j;
	char	*word;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			word = ft_substr(s, i, j);
			ft_lstadd_back(lst, ft_lstnew(word));
			i += j - 1;
		}
		i++;
	}
}

t_list	*ft_split_lst(char const *s, char c)
{
	t_list	*lst;

	lst = NULL;
	fill_words(s, c, &lst);
	return (lst);
}

/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len);
	return (sub);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > i)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new || !lst)
		return ;
	tmp = ft_lstlast(*lst);
	if (!tmp)
	{
		*lst = new;
		return ;
	}
	tmp->next = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

void    ft_lst_free(t_list **alst)
{
    if (!alst || !*alst)
        return ;
    if ((*alst)->next)
        ft_lst_free(&(*alst)->next);
    if ((*alst)->content)
        free((*alst)->content);
    free(*alst);
}

int main(void)
{
    char *str = "----hey-------my name-----is-moe-";
    char c = '-';

    t_list *lst = ft_split_lst(str, c);
    t_list *tmp;
    tmp = lst;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    ft_lst_free(&lst);
}
*/