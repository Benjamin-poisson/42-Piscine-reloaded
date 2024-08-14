/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:37:37 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 17:49:27 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	expected;
	int	got;

	char	str1[] = "ABC";
	char	str2[] = "ABC";
	expected = strcmp(str1, str2);
	got = ft_strcmp(str1, str2);
	printf(expected == got ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strcmp(%s, %s) | Expected : %d | Got : %d\n", str1, str2, expected, got);

	char	str3[] = "ABC";
	char	str4[] = "AB";
	expected = strcmp(str3, str4);
	got = ft_strcmp(str3, str4);
	printf(expected == got ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strcmp(%s, %s) | Expected : %d | Got : %d\n", str3, str4, expected, got);

	char	str5[] = "AB";
	char	str6[] = "ABC";
	expected = strcmp(str5, str6);
	got = ft_strcmp(str5, str6);
	printf(expected == got ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strcmp(%s, %s) | Expected : %d | Got : %d\n", str5, str6, expected, got);

	char	str7[] = "ABA";
	char	str8[] = "ABZ";
	expected = strcmp(str7, str8);
	got = ft_strcmp(str7, str8);
	printf(expected == got ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strcmp(%s, %s) | Expected : %d | Got : %d\n", str7, str8, expected, got);

	char	str9[] = "ABJ";
	char	str0[] = "ABC";
	expected = strcmp(str9, str0);
	got = ft_strcmp(str9, str0);
	printf(expected == got ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strcmp(%s, %s) | Expected : %d | Got : %d\n", str9, str0, expected, got);

	char	str11[] = "aj!";
	char	str12[] = "aj~";
	expected = strcmp(str11, str12);
	got = ft_strcmp(str11, str12);
	printf(expected == got ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strcmp(%s, %s) | Expected : %d | Got : %d\n", str11, str12, expected, got);
}
