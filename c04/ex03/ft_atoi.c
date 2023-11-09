/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:07:45 by nico              #+#    #+#             */
/*   Updated: 2023/11/09 13:24:36 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	exit;
	int	simbol_count;

	i = 0;
	simbol_count = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			simbol_count++;
		i++;
	}
	exit = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		exit = exit * 10 + str[i] - '0';
		i++;
	}
	if ((simbol_count % 2) != 0)
		exit = -exit;
	return (exit);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("El numero es: %d \n", ft_atoi("   -+++a87a65"));
// 	return 0;
// }
