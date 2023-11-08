/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:30:57 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 19:22:41 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*exit;

	i = 0;
	if (max <= min)
		return (NULL);
	while ((i + min) < max)
		i++;
	printf("min: %d\n", min);
	exit = malloc(i * sizeof(int));
	i = 0;
	while ((i + min) < max)
	{
		*(exit + i) = (i + min);
		i++;
	}
	return (exit);
}

// int main(int argc, char const *argv[])
// {
// 	ft_range(5, 10);
// i = 0;
// while ((i + min) < max)
// {
// 	printf("Numeros:  %d \n", exit[i]);
// 	i++;
// }
// }
