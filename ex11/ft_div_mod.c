/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:30:06 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/13 16:32:45 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int main()
// {
// 	int a = 5;
// 	int b = 2;
// 	int mod = 0;
// 	int div = 0;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("div = %d\nmod = %d\n", div, mod);
// }
