/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:59:26 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/17 22:14:03 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utiles.h"

int	open_and_read(char *file_name)
{
	char	buf[1];
	int		count;
	int		fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Missing Files.\n", 16);
		return (-1);
	}
	count = 1;
	while (count != 0)
	{
		count = read(fd, buf, 1);
		write(1, &buf[0], 1);
	}
	close(fd);
	return (0);
}
