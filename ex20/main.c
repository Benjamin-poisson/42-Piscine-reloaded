/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:19:08 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 18:26:57 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char src[] = "ABC";
	char *dest = NULL;
	dest = ft_strdup(src);
	printf(strcmp(src, dest) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(%s) | Expected : %s | Got : %s\n", src, src, dest);

	char src2[] = "Je suis une citrouille qui a peur";
	char *dest2 = NULL;
	dest2 = ft_strdup(src2);
	printf(strcmp(src2, dest2) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(%s) | Expected : %s | Got : %s\n", src2, src2, dest2);

	char src3[] = "";
	char *dest3 = NULL;
	dest3 = ft_strdup(src3);
	printf(strcmp(src3, dest3) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(%s) | Expected : %s | Got : %s\n", src3, src3, dest3);

	char src4[] = "Hello, World!";
	char *dest4 = NULL;
	dest4 = ft_strdup(src4);
	printf(strcmp(src4, dest4) == 0 ? "[PASS] " : "[FAIL] ");
	printf("For : ft_strdup(%s) | Expected : %s | Got : %s\n", src4, src4, dest4);

	return (0);
}
