/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:31:36 by nico              #+#    #+#             */
/*   Updated: 2023/11/09 19:29:56 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// #include "ft_convert_base2.c"

int	ft_strlen(char *base);
int	ft_error_management(char *base);
int	ft_atoi_base(char *str, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

char	*ft_putnbr_base(int nbr, char *base)
{
	int		exit_size;
	int		i;
	char	*exit;
	long	long_nbr;

	long_nbr = nbr;
	exit_size = ft_calc_exist_sice(nbr, ft_strlen(base));
	if (nbr < 0)
		exit_size++;
	exit = (char *)malloc(exit_size + 1);
	exit[exit_size] = '\0';
	i = exit_size - 1;
	if (long_nbr < 0)
		long_nbr *= (-1);
	while (long_nbr >= 0 && i >= 0)
	{
		exit[i--] = base[long_nbr % ft_strlen(base)];
		long_nbr /= ft_strlen(base);
	}
	if (nbr < 0)
		exit[0] = '-';
	return (exit);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	first_conversion;

	if (ft_error_management(base_from) || ft_error_management(base_to))
		return (NULL);
	first_conversion = ft_atoi_base(nbr, base_from);
	printf("primeara converiso: %i\n", first_conversion);
	return (ft_putnbr_base(first_conversion, base_to));
}

// int main ()
// {
// 	printf("SALIDA: %s\n", ft_convert_base("-1A3", "0123456789ABCDEF", "01"));
// }