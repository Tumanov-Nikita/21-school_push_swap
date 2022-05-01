/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:38:17 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/07 13:08:26 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*output;

	i = 0;
	if (!s)
		return (NULL);
	str_len = ft_strlen((char *)s);
	if (start >= (unsigned int)str_len || str_len <= 1)
		len = 0;
	if (len > str_len)
		len = str_len;
	output = malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	if (len >= 0)
		ft_strlcpy(output, s + start, len + 1);
	return (output);
}
