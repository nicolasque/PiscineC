/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:47:13 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 14:43:46 by nico             ###   ########.fr       */
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

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("\n1 == primo , 0 == no primo -RESULTADO: %d\n\n", ft_is_prime(1));
// 	return 0;
// }
