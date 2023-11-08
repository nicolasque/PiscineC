/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:47:20 by nico              #+#    #+#             */
/*   Updated: 2023/11/08 13:50:26 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;
	int	resultado_anterior;
	int	next_result;

	resultado_anterior = 1;
	result = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	while (index)
	{
		next_result = result + resultado_anterior;
		resultado_anterior = result;
		result = next_result;
		index --;
	}
	return (result);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("el indice fibonaci que dices es: %d \n", ft_fibonacci(5));
// 	return 0;
// }
