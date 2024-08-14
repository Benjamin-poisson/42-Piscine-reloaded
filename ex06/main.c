/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:53:45 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 16:03:10 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_alphabet(void);

#include <unistd.h>
int	main(void)
{
	write(1, "Expected : abcdefghijklmnopqrstuvwxyz\nGot : ", 45);
	ft_print_alphabet();
}
