/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:22:31 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/29 20:49:17 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s2_ind;
	char	*output;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	s2_ind = 0;
	output = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!output)
		return (NULL);
	while (s1[i] != '\0')
	{
		output[i] = s1[i];
		i++;
	}
	while (s2[s2_ind] != '\0')
	{
		output[i] = s2[s2_ind];
		i++;
		s2_ind++;
	}
	output[i] = '\0';
	return (&output[0]);
}
