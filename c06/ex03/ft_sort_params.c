/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:03:10 by nico              #+#    #+#             */
/*   Updated: 2023/11/10 19:15:45 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap_strings(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_printstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (argv[i][0] > argv[i + 1][0])
		{
			swap_strings(&argv[i], &argv[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	if (argc < 2)
		return (1);
	i = 1;
	while (argc > 1)
	{
		ft_printstr(argv[i]);
		write(1, "\n", 1);
		i++;
		argc --;
	}
	return (0);
}
