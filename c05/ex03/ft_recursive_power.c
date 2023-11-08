/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:17:02 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 13:52:43 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (((nb) * (ft_recursive_power(nb, (power - 1)))));
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("la potencia es: %i \n", ft_recursive_power(5, 5));
// 	return 0;
// }
