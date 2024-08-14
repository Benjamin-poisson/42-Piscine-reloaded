/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:05:01 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 16:11:30 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_is_negative(int n);

#include <unistd.h>
int main()
{
	write(1, "For : ft_is_negative(42) | Expected : P | Got : ", 49);
	ft_is_negative(42);
	write(1, "\n", 1);

	write(1, "For : ft_is_negative(-42) | Expected : N | Got : ", 50);
	ft_is_negative(-42);
	write(1, "\n", 1);

	write(1, "For : ft_is_negative(0) | Expected : P | Got : ", 48);
	ft_is_negative(0);
	write(1, "\n", 1);

	write(1, "For : ft_is_negative(-2147483648) | Expected : N | Got : ", 58);
	ft_is_negative(-2147483648);
	write(1, "\n", 1);

	write(1, "For : ft_is_negative(2147483647) | Expected : P | Got : ", 57);
	ft_is_negative(2147483647);
	write(1, "\n", 1);
}
