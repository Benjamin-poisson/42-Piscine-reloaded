/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:09:21 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 21:53:13 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	get_size(int min, int max)
{
	if (min >= max)
		return (0);
	int	size = max - min;
	if (size < 0)
		return (-size);
	return (size);
}

void	aff_tab(int *tab, int size)
{
	int i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		if (i == size - 1)
			printf("\n");
		else
			printf(" ,");
		i++;
	}
}

int	ft_tabcmp(int *tab1, int *tab2, int size)
{
	int i = 0;
	while(i < size)
	{
		if (tab1[i] != tab2[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	min;
	int	max;
	int	size;

	int	*tab = NULL;
	min = 0;
	max = 10;
	size = get_size(min, max);
	int	expected[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	tab = ft_range(min, max);
	if (tab == NULL)
	{
		printf("___ERROR_MALLOC___\n");
		return (1);
	}
	if (ft_tabcmp(expected, tab, size))
		printf("[FAIL]\n");
	else
		printf("[PASS]\n");
	printf("For : ft_range(%d, %d)\n", min, max);
	printf("Expected : ");
	aff_tab(expected, size);
	printf("Got : ");
	aff_tab(tab, size);
	printf("\n");

	int	*tab2 = NULL;
	min = -20;
	max = -10;
	size = get_size(min, max);
	int	expected2[10] = {-20, -19, -18, -17, -16, -15, -14, -13, -12, -11};
	tab2 = ft_range(min, max);
	if (tab2 == NULL)
	{
		printf("___ERROR_MALLOC___\n");
		return (1);
	}
	if (ft_tabcmp(expected2, tab2, size))
		printf("[FAIL]\n");
	else
		printf("[PASS]\n");
	printf("For : ft_range(%d, %d)\n", min, max);
	printf("Expected : ");
	aff_tab(expected2, size);
	printf("Got : ");
	aff_tab(tab2, size);
	printf("\n");

	int	*tab3 = NULL;
	min = 0;
	max = 1;
	size = get_size(min, max);
	int	expected3[1] = {0};
	tab3 = ft_range(min, max);
	if (tab3 == NULL)
	{
		printf("___ERROR_MALLOC___\n");
		return (1);
	}
	if (ft_tabcmp(expected3, tab3, size))
		printf("[FAIL]\n");
	else
		printf("[PASS]\n");
	printf("For : ft_range(%d, %d)\n", min, max);
	printf("Expected : ");
	aff_tab(expected3, size);
	printf("Got : ");
	aff_tab(tab3, size);
	printf("\n");

	int	*tab4 = NULL;
	min = 0;
	max = 0;
	size = get_size(min, max);
	tab4 = ft_range(min, max);
	if (tab4 == NULL)
	{
		printf("[PASS]\n");
		printf("For : ft_range(%d, %d)\n", min, max);
		printf("Expected : \n");
		printf("Got : \n");
		printf("\n");
	}
	else
	{
		printf("[FAIL]\n");
		printf("For : ft_range(%d, %d)\n", min, max);
		printf("Expected : ");
		printf("Got : ");
		aff_tab(tab4, size);
		printf("\n");
	}

	int	*tab5 = NULL;
	min = 20;
	max = 10;
	size = get_size(min, max);
	tab5 = ft_range(min, max);
	if (tab5 == NULL)
	{
		printf("[PASS]\n");
		printf("For : ft_range(%d, %d)\n", min, max);
		printf("Expected : \n");
		printf("Got : \n");
		printf("\n");
	}
	else
	{
		printf("[FAIL]\n");
		printf("For : ft_range(%d, %d)\n", min, max);
		printf("Expected : ");
		printf("Got : ");
		aff_tab(tab5, size);
		printf("\n");
	}

	return (0);
}
