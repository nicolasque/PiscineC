/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:01:08 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 23:30:19 by nico             ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_calculate_size(int size, char **strs, char *sep)
{
	int	str_sice;
	int	i;

	i = 0;
	str_sice = 0;
	while (i < size)
	{
		str_sice += ft_strsize(strs[i]);
		if (i < size - 1)
			str_sice += ft_strsize(sep);
		i++;
	}
	return (str_sice);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_comp;
	int		i;

	str_comp = (char *)malloc(1);
	str_comp[0] = '\0';
	if (size <= 0)
		return (str_comp);
	str_comp = (char *)malloc(ft_calculate_size(size, strs, sep) + 1);
	i = 0;
	while (i < size && *(strs + i))
	{
		ft_strcat(str_comp, strs[i]);
		if (i < (size - 1))
			ft_strcat(str_comp, sep);
		i++;
	}
	return (str_comp);
}

// int main()
// {
// 	char *strs[] = { "Hello", "world" };
// 	ft_strjoin(2, strs, "");
// 	return 0;
// }
