/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:12:23 by cwannhed          #+#    #+#             */
/*   Updated: 2024/12/05 09:54:19 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_strings(char const *s, char c)
{
	size_t			count;
	unsigned char	in_string;

	count = 0;
	in_string = 0;
	while (*s)
	{
		if (*s != c && !in_string)
		{
			in_string = 1;
			count++;
		}
		else if (*s == c)
			in_string = 0;
		s++;
	}
	return (count);
}

static	void	*free_array(char **array, size_t i)
{
	while (i > 0)
	{
		free(array[i - 1]);
		i--;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*start;
	size_t	n_strings;
	size_t	i;

	n_strings = count_strings(s, c);
	array = (char **)ft_calloc(n_strings + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (i < n_strings)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		array[i] = (char *)ft_calloc(s - start + 1, sizeof(char));
		if (!array[i])
			return (free_array(array, i));
		ft_strlcpy(array[i], start, s - start + 1);
		i++;
	}
	return (array);
}
