/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:41:59 by rvrignon          #+#    #+#             */
/*   Updated: 2022/04/30 00:38:37 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*process(char *str, int i, int j, char const *s1)
{
	int	k;

	k = 0;
	if (!str)
		return (NULL);
	while (k < j)
	{
		str[k] = s1[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i + j] && !ft_strchr(set, s1[i + j]))
		j++;
	if (i + j == 0)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * j + 1);
	return (process(str, i, j, s1));
}
