/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:54:47 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/14 21:58:14 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

static int	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}

# define ABS(Value) ft_abs(Value)

#endif
