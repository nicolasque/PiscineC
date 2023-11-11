/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:03:14 by nico              #+#    #+#             */
/*   Updated: 2023/11/11 18:14:29 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int intermediate;
	
	intermediate = *a;
	*a = *b;
	*b = intermediate;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	
	i = 0;
	size--;
	while (i < size)
		ft_swap(&tab[i++], &tab[size--]);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	int tab[] = {1, 2, 3, 4, 5};
// 	int size = 5;
// 	int i = 0;
// 	ft_rev_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("resultado: %i\n", tab[i]);
// 		i++;
// 	}
// 	return 0;
// }
