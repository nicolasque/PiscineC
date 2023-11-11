/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:15:33 by nico              #+#    #+#             */
/*   Updated: 2023/11/11 18:20:21 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int intermediate;
	
	intermediate = *a;
	*a = *b;
	*b = intermediate;
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < (size - 1))
	{
		if(tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}