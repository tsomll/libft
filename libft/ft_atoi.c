/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvioleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:36:16 by vvioleta          #+#    #+#             */
/*   Updated: 2021/10/13 13:36:29 by vvioleta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int	f;
	int	res;
	int	i;

	f = 1;
	i = 0;
	res = 0;
	while (*(str + i) == ' ' || (*(str + i) >= '\t' && *(str + i) <= '\r'))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			f = f * (-1);
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9' && *(str + i) != '\0')
	{
		res = res * 10 + *(str + i) - '0';
		i++;
	}
	return ((long long int)res * f);
}
