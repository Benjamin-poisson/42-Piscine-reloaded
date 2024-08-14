/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:51:47 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 17:02:45 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

#include <stdio.h>
int main(void)
{
	int	got;
	int	nb;
	int	expected;

	nb = 0;
	expected = 0;
	got = ft_sqrt(nb);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);

	nb = 1;
	expected = 1;
	got = ft_sqrt(nb);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);

	nb = 4;
	expected = 2;
	got = ft_sqrt(nb);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);

	nb = 9;
	expected = 3;
	got = ft_sqrt(nb);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);

	nb = 16;
	expected = 4;
	got = ft_sqrt(nb);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);

	nb = 25;
	expected = 5;
	got = ft_sqrt(nb);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);

	nb = 26;
	expected = 0;
	got = ft_sqrt(0);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);

	nb = -4;
	expected = 0;
	got = ft_sqrt(nb);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);

	nb = -234789;
	expected = 0;
	got = ft_sqrt(nb);
	printf(got == expected ? "[PASS] " : "[FAIL]");
	printf("For : ft_sqrt(%d) | ", nb);
	printf("Expected : %d | Got = %d\n", expected, got);
}
