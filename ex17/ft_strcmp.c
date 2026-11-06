/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:54:11 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/05 11:59:39 by wbontemp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include<string.h>
int	main(void)
{
	char	s1[] = "bonjour";
	char	s2[] = "bonjour";

	__builtin_printf("function :%d\n", ft_strcmp(s1, s2));
	__builtin_printf("original one :%d", strcmp(s1, s2));
}*/
