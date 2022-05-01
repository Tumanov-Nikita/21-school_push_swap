/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:23:30 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/07 13:19:15 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*out;

	out = (char *)str;
	i = 0;
	while (out[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (out[i] == (char)ch)
			return (out + i);
		i--;
	}
	return (NULL);
}
