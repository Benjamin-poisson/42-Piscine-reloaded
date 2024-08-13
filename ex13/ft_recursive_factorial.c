/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:24 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/13 16:46:19 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return(0);
	if (nb == 1)
		return (1);
	if (nb > 1)
		return (ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_factorial(6));
}
