/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:09:31 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 17:58:57 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		count;
	long	multipli;

	multipli = 0;
	count = 0;
	while ((multipli * multipli) != nb)
	{
		multipli *= multipli;
		if (multipli > nb)
			return (0);
		count ++;
		multipli = count;
	}
	return (count);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("la raiz cuadrada des: %d \n", ft_sqrt(2147483647));	
// 	return 0;
// }
