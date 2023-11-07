/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:50:22 by nico              #+#    #+#             */
/*   Updated: 2023/11/07 23:12:36 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
    if (nb < 0)
        return (0);
    
	while (nb != 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}

// int main(int argc, char const *argv[])
// {
// 	printf("the factorial is: %d \n", ft_iterative_factorial(-5));    
//     return 0;
// }
