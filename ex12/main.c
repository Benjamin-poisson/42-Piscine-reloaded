/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:36:11 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 16:46:05 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

#include <stdio.h>
int main()
{
	int	test = 6;
	int expected = 720;
	int got = ft_iterative_factorial(test);
	printf(got == expected ? "[Pass] " : "[Fail] ");
	printf("For : ft_iterative_factorial(%d) | ", test);
	printf("Expected : %d | Got %d\n", expected, got);

	test = 9;
	expected = 362880;
	got = ft_iterative_factorial(test);
	printf(got == expected ? "[Pass] " : "[Fail] ");
	printf("For : ft_iterative_factorial(%d) | ", test);
	printf("Expected : %d | Got %d\n", expected, got);

	test = -1;
	expected = 0;
	got = ft_iterative_factorial(test);
	printf(got == expected ? "[Pass] " : "[Fail] ");
	printf("For : ft_iterative_factorial(%d) | ", test);
	printf("Expected : %d | Got %d\n", expected, got);

	test = 0;
	expected = 1;
	got = ft_iterative_factorial(test);
	printf(got == expected ? "[Pass] " : "[Fail] ");
	printf("For : ft_iterative_factorial(%d) | ", test);
	printf("Expected : %d | Got %d\n", expected, got);
}
