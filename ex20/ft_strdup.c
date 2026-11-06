/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:53:20 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/05 12:08:39 by wbontemp         ###   ########lyon.fr   */
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
	dup = (char *) malloc(i + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	dup = src;
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