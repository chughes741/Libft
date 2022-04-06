/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:52:14 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 13:52:17 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*rtn;
	unsigned int	start;
	size_t			len;

	start = 0;
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, (int)s1[start]) != NULL && start <= len)
		start++;
	while (ft_strchr(set, (int)s1[len]) != NULL && len >= start)
		len--;
	rtn = ft_substr(s1, start, (len - start + 1));
	return (rtn);
}
