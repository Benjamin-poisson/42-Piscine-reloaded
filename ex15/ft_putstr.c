/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:21:48 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 15:37:34 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

/* #include <unistd.h>
int	main(void)
{
	char str[] = "Hello, World!";
	write(1, "Expected : Hello, World! | Got : ", 34);
	ft_putstr(str);
	write(1, "\n", 1);

	char str2[] = "Test string";
	write(1, "Expected : Test string | Got : ", 32);
	ft_putstr(str2);
	write(1, "\n", 1);

	char str3[] = "1234567890";
	write(1, "Expected : 1234567890 | Got : ", 31);
	ft_putstr(str3);
	write(1, "\n", 1);

	char str4[] = "!@#&(*$*()&*)($#*)_^@&(#*$^*&!^@$)";
	write(1, "Expected : !@#&(*$*()&*)($#*)_^@&(#*$^*&!^@$) | Got : ", 55);
	ft_putstr(str4);
	write(1, "\n", 1);

	char str5[] = "";
	write(1, "Expected : | Got : ", 20);
	ft_putstr(str5);
	write(1, "\n", 1);

	return (0);
} */
