/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:44:44 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 15:04:22 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb % count != 0)
	{
		count++;
		if (count == nb)
			return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb ++;
	return (nb);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("el siguente primo es: %d\n", ft_find_next_prime(27));
// 	return 0;
// }
