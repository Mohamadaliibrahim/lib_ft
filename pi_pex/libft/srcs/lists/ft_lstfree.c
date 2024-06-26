/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:51:08 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 20:51:08 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstfree(t_list **lst)
{
	if (!lst || !*lst)
		return ;
	if ((*lst)->next)
		ft_lstfree(&(*lst)->next);
	if ((*lst)->content)
		free((*lst)->content);
	free(*lst);
}
