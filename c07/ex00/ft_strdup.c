/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:59:56 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 18:27:19 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strsize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcopy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*exit;

	src_size = ft_strsize(src);
	exit = (char *)malloc(src_size);
	ft_strcopy(exit, src);
	return (exit);
}

// int main()
// {
// 	char *hola;
// 	hola = ft_strdup("hola mundo");
// 	free(hola);
// 	return (0);
// }
