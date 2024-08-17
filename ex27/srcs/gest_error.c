/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:59:04 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/17 22:09:17 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utiles.h"

int	gest_error(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac <= 1)
	{
		write(2, "File name missing.\n", 20);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	while (av[i])
		i++;
	if (i < 1)
	{
		write(2, "Argument to short.\n", 20);
		return (1);
	}
	return (0);
}
