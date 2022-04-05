/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:47:28 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 13:48:10 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*c;
	char	len;

	c = ft_itoa(n);
	len = ft_strlen(c);
	write(fd, &c, len);
	return ;
}
