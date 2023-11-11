/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:49:57 by nico              #+#    #+#             */
/*   Updated: 2023/11/11 18:38:41 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	printf("El largo de la cadena: %i \n", ft_strlen("12345"));
// 	return 0;
// }
