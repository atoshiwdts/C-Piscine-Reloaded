/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:53:20 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/06 22:05:53 by wbontemp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <string.h>
int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	argc = 'void';
	__builtin_printf("mine version : %s\n", ft_strdup(argv[i]));
	__builtin_printf("the original one : %s", strdup(argv[i]));
}*/
/*
#include <string.h>
int	main(void)
{
	char	str1[] = "banane1";
	char	*str2 = ft_strdup(str1);
	str1[6] = '8';
	__builtin_printf("%s, %s\n", str1, str2);
}*/