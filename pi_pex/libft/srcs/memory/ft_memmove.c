/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:04:13 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 21:04:13 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!src || !dest)
		return (dest);
	if (src < dest)
	{
		while (n-- != 0)
			d[n] = s[n];
	}
	else
	{
		while (n-- != 0)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dest);
}

/*
int main() 
{ 
    char str[100] = "hellomohammed"; 
    char *first, *second; 
    first = str; 
    second = str; 
    printf("Original string :%s\n", str); 
      
    memcpy(first + 5, first, 8); 
    printf("memcpy overlap : %s\n", str); 
  
    ft_memmove(second + 5, first, 8); 
    printf("memmove overlap : %s\n", str); 
  
    return (0); 
}
*/