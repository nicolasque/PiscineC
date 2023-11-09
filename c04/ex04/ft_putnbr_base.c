/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:25:40 by nico              #+#    #+#             */
/*   Updated: 2023/11/09 15:38:07 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

// Funcion para saber cuantos caracteres tendra la salida
int	ft_calc_exist_sice(int nbr, int base_size)
{
	int	exit_size;

	exit_size = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		exit_size++;
		nbr /= base_size;
	}
	return (exit_size);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	*exit;
	long	long_nbr;

	if (ft_error_management(base))
		write(1, 0, 1);
	else
	{
		long_nbr = nbr;
		exit = (char *)malloc(ft_calc_exist_sice(nbr, ft_strlen(base)) + 1);
		exit[ft_calc_exist_sice(nbr, ft_strlen(base))] = '\0';
		i = ft_calc_exist_sice(nbr, ft_strlen(base)) - 1;
		if (nbr < 0)
			long_nbr *= (-1);
		if (nbr < 0)
			ft_putchar('-');
		while (long_nbr >= 0 && i >= 0)
		{
			exit[i] = base[long_nbr % ft_strlen(base)];
			long_nbr /= ft_strlen(base);
			i--;
		}
		write(1, exit, ft_calc_exist_sice(nbr, ft_strlen(base)));
	}
}

//LA VERSION SENSATA, QUE NO PASA NORMINETE
// void	ft_putnbr_base(int nbr, char *base)
// {
// 	int		exit_size;
// 	int		i;
// 	char	*exit;
// 	long	long_nbr;

// 	if (ft_error_management(base))
// 		write(1, 0, 1);
// 	else
// 	{
// 		long_nbr = nbr;
// 		exit_size = ft_calc_exist_sice(nbr, ft_strlen(base));
// 		exit = (char *)malloc(exit_size + 1);
// 		exit[exit_size] = '\0';
// 		i = exit_size - 1;
// 		if (nbr < 0)
//		{
// 			long_nbr *= (-1);
// 			ft_putchar('-');
//		}
// 		while (long_nbr >= 0 && i >= 0)
// 		{
// 			exit[i] = base[long_nbr % ft_strlen(base)];
// 			long_nbr /= ft_strlen(base);
// 			i--;
// 		}
// 		write(1, exit, exit_size);
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	ft_putnbr_base(22, "0123456789ABCDEF");
// 	return 0;
// }