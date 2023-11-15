/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:44:22 by nico              #+#    #+#             */
/*   Updated: 2023/11/15 11:52:13 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>


void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;

}
int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}