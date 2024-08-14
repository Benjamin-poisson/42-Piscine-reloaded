/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:00:43 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 22:08:13 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	int	expected;
	int	got;
	int	test;

	test = 42;
	expected = 42;
	got = ABS(test);
	printf(expected == got ? "[Pass] " : "[FAIL] ");
	printf("For : ABS(%d) | Expected : %d | Got : %d\n", test, expected, got);

	test = -42;
	expected = 42;
	got = ABS(test);
	printf(expected == got ? "[Pass] " : "[FAIL] ");
	printf("For : ABS(%d) | Expected : %d | Got : %d\n", test, expected, got);

	test = 0;
	expected = 0;
	got = ABS(test);
	printf(expected == got ? "[Pass] " : "[FAIL] ");
	printf("For : ABS(%d) | Expected : %d | Got : %d\n", test, expected, got);

	test = -1011235;
	expected = 1011235;
	got = ABS(test);
	printf(expected == got ? "[Pass] " : "[FAIL] ");
	printf("For : ABS(%d) | Expected : %d | Got : %d\n", test, expected, got);

	test = 830942;
	expected = 830942;
	got = ABS(test);
	printf(expected == got ? "[Pass] " : "[FAIL] ");
	printf("For : ABS(%d) | Expected : %d | Got : %d\n", test, expected, got);
}
