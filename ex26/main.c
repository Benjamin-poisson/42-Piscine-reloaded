/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:02:15 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/17 21:22:18 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_count_if(char **tab, int(*f)(char*));

int	str_is_lower(char *str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int	str_is_num(char *str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	int expected;
	int got;
	
	char *strs[] = {"Bonjour", "je", "suis", "un", "perroqueT", NULL};
	expected = 3;
	got = ft_count_if(strs, &str_is_lower);
	printf(expected == got ? "[PASS] " : "[FAIL] ");
	printf("For : %s, %s, %s, %s, %s\n", strs[0], strs[1], strs[2], strs[3], strs[4]);
	printf("For : ft_count_if(strs, &str_is_lower) | Expected : %d | Got : %d\n", expected, got);

	char *strs2[] = {"483345343", "011101010", "453453", "un", "4533853873349", NULL};
	expected = 4;
	got = ft_count_if(strs2, &str_is_num);
	printf(expected == got ? "[PASS] " : "[FAIL] ");
	printf("For : %s, %s, %s, %s, %s\n", strs2[0], strs2[1], strs2[2], strs2[3], strs2[4]);
	printf("For : ft_count_if(strs2, &str_is_num) | Expected : %d | Got : %d\n", expected, got);

	return 0;
}
