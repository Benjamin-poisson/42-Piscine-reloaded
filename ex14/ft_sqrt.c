/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:02:39 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 15:20:31 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mult;

	mult = 1;
	while (mult * mult <= nb)
	{
		if ((mult * mult) == nb)
			return (mult);
		mult++;
	}
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	int	result;

	result = ft_sqrt(0);
	printf(result == 0
		? "[PASS] ft_sqrt(0) = %d\n"
		: "[FAIL] ft_sqrt(0) = %d, expected 0\n", result);

	result = ft_sqrt(1);
	printf(result == 1
		? "[PASS] ft_sqrt(1) = %d\n"
		: "[FAIL] ft_sqrt(1) = %d, expected 1\n", result);

	result = ft_sqrt(4);
	printf(result == 2
		? "[PASS] ft_sqrt(4) = %d\n"
		: "[FAIL] ft_sqrt(4) = %d, expected 2\n", result);

	result = ft_sqrt(9);
	printf(result == 3
		? "[PASS] ft_sqrt(9) = %d\n"
		: "[FAIL] ft_sqrt(9) = %d, expected 3\n", result);

	result = ft_sqrt(16);
	printf(result == 4
		? "[PASS] ft_sqrt(16) = %d\n"
		: "[FAIL] ft_sqrt(16) = %d, expected 4\n", result);

	result = ft_sqrt(25);
	printf(result == 5
		? "[PASS] ft_sqrt(25) = %d\n"
		: "[FAIL] ft_sqrt(25) = %d, expected 5\n", result);

	result = ft_sqrt(26);
	printf(result == 0
		? "[PASS] ft_sqrt(26) = %d\n"
		: "[FAIL] ft_sqrt(26) = %d, expected 0\n", result);

	result = ft_sqrt(-4);
	printf(result == 0
		? "[PASS] ft_sqrt(-4) = %d\n"
		: "[FAIL] ft_sqrt(-4) = %d, expected 0\n", result);

	return 0;
} */
