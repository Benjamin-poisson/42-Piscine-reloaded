/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:53:45 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 16:03:34 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_numbers(void);

#include <unistd.h>
int	main(void)
{
	write(1, "Expected : 0123456789\nGot : ", 29);
	ft_print_numbers();
}
