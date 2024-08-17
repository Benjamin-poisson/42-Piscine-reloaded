/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:40:14 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/17 18:58:46 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > 9)
		ft_putnbr(nbr);
	ft_putchar(nbr + '0');
}

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int length = 10;
	
	write(1, "For : ft_foreach(tab, length, &ft_putnbr)\nExpected : 0123456789\nGot : ", 70);
	ft_foreach(tab, length, &ft_putnbr);
	ft_putchar('\n');

	return (0);
}
