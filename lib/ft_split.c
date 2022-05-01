/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:10:26 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/07 14:06:05 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words(char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i + 1] != '\0')
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

int	ft_letters(char **mas, char *str, char c, int i)
{
	int	count;

	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i] != '\0')
			{
				i++;
				count++;
			}
			break ;
		}
		i++;
	}
	*mas = (char *)malloc(count + 1);
	if (!*mas)
		return (-1);
	ft_strlcpy(*mas, str + (i - count), count + 1);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**out;
	int		size;

	if (!s)
		return (NULL);
	size = ft_words((char *)s, c);
	out = malloc((size + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	out[size] = 0;
	i = 0;
	while (i < size)
	{
		s += ft_letters(&out[i], (char *)s, c, 0);
		if ((int)s == -1)
			return (NULL);
		i++;
	}
	return (out);
}
