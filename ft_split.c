/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:39:58 by chughes           #+#    #+#             */
/*   Updated: 2022/03/29 13:40:39 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	int		i;
	size_t	wordcount;

	i = 1;
	wordcount = 0;
	if (s[0] != c && s[0] != '\0')
		wordcount = 1;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			wordcount++;
		i++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	char			**rtn;
	unsigned int	wordcount;
	unsigned int	start;
	unsigned int	end;

	wordcount = ft_wordcount(s, c);
	rtn = (char **)ft_calloc(wordcount + 1, sizeof(char *));
	if (rtn == NULL)
		return (NULL);
	rtn[wordcount] = (void *)0;
	if (wordcount == 0)
		return (rtn);
	start = (unsigned int)ft_strlen(s) - 1;
	while (s[start] && start > 0)
	{
		while (s[start] && start > 0 && s[start] == c)
			start--;
		end = start + 1;
		while (s[start] && start > 0 && s[start] != c)
			start--;
		if (wordcount > 0)
			wordcount--;
		rtn[wordcount] = ft_substr(s, start + 1, (end - start));
		if (wordcount == 0)
			break ;
	}
	return (rtn);
}
