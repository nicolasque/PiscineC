/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:17:54 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 13:53:16 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

// int main(int argc, char const *argv[])
// {
// 	printf("la potencia es: %d\n", ft_iterative_power(5, -5));
// 	return 0;
// }
