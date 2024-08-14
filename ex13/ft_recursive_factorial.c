/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:33:24 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 14:59:25 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		result *= ft_recursive_factorial(nb - 1);
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_recursive_factorial(6));
// }
