/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:37:20 by nico              #+#    #+#             */
/*   Updated: 2023/11/15 11:41:47 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int valor = -5;
	printf("el valor era %i, y ahor es: %i\n",valor ,ABS(valor) );
	return 0;
}
