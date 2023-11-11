/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:21:35 by nico              #+#    #+#             */
/*   Updated: 2023/11/11 18:40:55 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	intermediate;

	intermediate = *a;
	*a = *b;
	*b = intermediate;
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	int a = 2;
// 	int b = 9;
// 	ft_swap(&a, &b);
// 	printf("a ahora es: %i y b ahro es: %i" ,a ,b);
// 	return 0;
// }
