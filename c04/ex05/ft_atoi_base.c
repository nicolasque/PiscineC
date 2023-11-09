/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:50:42 by nico              #+#    #+#             */
/*   Updated: 2023/11/09 17:59:16 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_error_management(char *base)
{
	int	i;
	int	j;
	int	coincidencias;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = 0;
		coincidencias = 0;
		while (base[j])
		{
			if (base[i] == base[j])
				coincidencias ++;
			if (coincidencias > 1)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int	ft_manage_sapces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	exit;
	int	i;
	int	j;
	int	count;

	if (ft_error_management(base))
		return (1);
	count = ft_strlen(str) - 1 - ft_manage_sapces(str);
	exit = 0;
	i = ft_manage_sapces(str);
	while (count >= 0)
	{
		j = 0;
		while (str[i] != base[j])
			j++;
		exit = exit + (j * ft_iterative_power(ft_strlen(base), count--));
		i++;
	}
	i = 0;
	while (*str++ != '\0')
	{
		if (*str == '-')
			exit *= (-1);
	}
	return (exit);
}

// int main(int argc, char const *argv[])
// {
// 	printf("Exit: %d\n", ft_atoi_base("    1A3", "0123456789ABCDEF"));

// 	return 0;
// }
