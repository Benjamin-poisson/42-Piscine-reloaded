/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:11:04 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 22:20:44 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}

void set_point2(t_point *point)
{
point->x = 0;
point->y = 7;
}

void set_point3(t_point *point)
{
point->x = 34;
point->y = 101;
}
int main(void)
{
t_point point;
set_point(&point);
printf(point.x == 42 && point.y == 21 ? "[PASS] " : "[FAIL] ");
printf("Expected : 42, 21 | Got : %d, %d\n", point.x, point.y);

set_point2(&point);
printf(point.x == 0 && point.y == 7 ? "[PASS] " : "[FAIL] ");
printf("Expected : 0, 7 | Got : %d, %d\n", point.x, point.y);

set_point3(&point);
printf(point.x == 34 && point.y == 101 ? "[PASS] " : "[FAIL] ");
printf("Expected : 34, 101 | Got : %d, %d\n", point.x, point.y);

return (0);
}
