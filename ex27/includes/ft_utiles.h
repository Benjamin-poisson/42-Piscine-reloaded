/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utiles.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:57:30 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/17 21:58:35 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILES_H
# define FT_UTILES_H

# include <fcntl.h>
# include <unistd.h>

int	open_and_read(char *file_name);
int	gest_error(int ac, char **av);

#endif
