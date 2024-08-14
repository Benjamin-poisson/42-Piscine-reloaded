/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:07:07 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 17:07:58 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "Hello World!";
	int	got = ft_strlen(str);
	int	expected = strlen(str);
	printf(got == expected ? "[PASS] " : "[FAIL] ");
	printf("Expected : %d | Got : %d\n", expected, got);

	char str2[] = "String test";
	got = ft_strlen(str2);
	expected = strlen(str2);
	printf(got == expected ? "[PASS] " : "[FAIL] ");
	printf("Expected : %d | Got : %d\n", expected, got);

	char str3[] = "!@#$-|=^&*()_+<>:;,./?";
	got = ft_strlen(str3);
	expected = strlen(str3);
	printf(got == expected ? "[PASS] " : "[FAIL] ");
	printf("Expected : %d | Got : %d\n", expected, got);

	char str4[] = "";
	got = ft_strlen(str4);
	expected = strlen(str4);
	printf(got == expected ? "[PASS] " : "[FAIL] ");
	printf("Expected : %d | Got : %d\n", expected, got);
}
