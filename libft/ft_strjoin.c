/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:14:14 by vvioleta          #+#    #+#             */
/*   Updated: 2021/10/20 19:14:18 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*src;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	src = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1 ));
	if (src == NULL)
		return (NULL);
	while (s1[k] != '\0')
		src[i++] = s1[k++];
	k = 0;
	while (s2[k] != '\0')
		src[i++] = s2[k++];
	src[i] = '\0';
	return (src);
}
