/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:23:27 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 16:34:45 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

#include <stdio.h>
int main()
{
	int a = 5;
	int b = 2;
	int mod = 0;
	int div = 0;
	ft_div_mod(a, b, &div, &mod);
	printf((div == (a / b) && mod == (a % b)) ? "[PASS] " : "[FAIL] ");
	printf("For : %d, %d | ", a, b);
	printf("Expaected : div = %d & mod = %d | ", (a / b), (a % b));
	printf("Got : div = %d & mod = %d\n", div, mod);
	
	a = 42;
	b = 4;
	mod = 0;
	div = 0;
	ft_div_mod(a, b, &div, &mod);
	printf((div == (a / b) && mod == (a % b)) ? "[PASS] " : "[FAIL] ");
	printf("For : %d, %d | ", a, b);
	printf("Expaected : div = %d & mod = %d | ", (a / b), (a % b));
	printf("Got : div = %d & mod = %d\n", div, mod);

	a = -42;
	b = 4;
	mod = 0;
	div = 0;
	ft_div_mod(a, b, &div, &mod);
	printf((div == (a / b) && mod == (a % b)) ? "[PASS] " : "[FAIL] ");
	printf("For : %d, %d | ", a, b);
	printf("Expaected : div = %d & mod = %d | ", (a / b), (a % b));
	printf("Got : div = %d & mod = %d\n", div, mod);
}
