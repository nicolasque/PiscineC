/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:53:20 by nico              #+#    #+#             */
/*   Updated: 2023/11/15 17:34:37 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_fill_struct(char *source, struct s_stock_str *estruc)
{
	estruc->str = malloc(ft_strlen(source + 1));
	estruc->copy = malloc(ft_strlen(source));
	estruc->size = ft_strlen(source);
	ft_strcpy(estruc->str, source);
	ft_strcpy(estruc->copy, source);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*estruct_char;

	estruct_char = malloc((ac + 1) * sizeof(struct s_stock_str));
	i = 0;
	while (i < ac)
	{
		ft_fill_struct(&av[i][0], (estruct_char + i));
		i++;
	}
	i = 0;
	while (i < ac)
	{
		printf("el largo es: %i \n", estruct_char[i].size);
		printf("La cadena dice: %s \n", estruct_char[i].str);
		printf("La copiad dice: %s \n", estruct_char[i].copy);
		i++;
	}
	return (estruct_char);
}

// int main()
// {
// 	char *av[] = {"hola", "mundo", "que", "tal", "tu"};
// 	ft_strs_to_tab(5, av);
// 	return 0;
// }
