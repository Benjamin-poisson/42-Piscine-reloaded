/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:15:06 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 16:28:35 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

#include <stdio.h>
int main()
{
	int a = 24;
	int b = 42;
	ft_swap(&a, &b);
	printf(a == 42 && b == 24 ? "[PASS] " : "[FAIL] ");
	a = 24;
	b = 42;
	printf("For : ft_swap(%d, %d) | ", a, b);
	printf("Expected : a = %d & b = %d | ", b , a);
	ft_swap(&a, &b);
	printf("Got : a = %d & b = %d\n", a, b);

	a = 456;
	b = 2;
	ft_swap(&a, &b);
	printf(a == 2 && b == 456 ? "[PASS] " : "[FAIL] ");
	a = 456;
	b = 2;
	printf("For : ft_swap(%d, %d) | ", a, b);
	printf("Expected : a = %d & b = %d | ", b , a);
	ft_swap(&a, &b);
	printf("Got : a = %d & b = %d\n", a, b);
}
