/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:30:08 by mhunter           #+#    #+#             */
/*   Updated: 2021/10/30 14:32:42 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int			i;
	char		*out;
	const char	*in;

	i = 0;
	in = str;
	while (in[i] != '\0')
	{
		i++;
	}
	out = malloc(i * sizeof(char) + 1);
	if (!out)
	{
		return (NULL);
	}
	i = 0;
	while (in[i] != '\0')
	{
		out[i] = in[i];
		i++;
	}
	out[i] = 0;
	return (out);
}
