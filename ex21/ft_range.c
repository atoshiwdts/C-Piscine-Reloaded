/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 09:12:49 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/05 16:03:57 by wbontemp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_intdif(int min, int max)
{
	int	tmp;

	if (min < 0)
	{
		tmp = min * -1;
		max = tmp + max;
	}
	else
		max = max - min;
	return (max);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	i = ft_intdif(min, max);
	array = (int *) malloc (i * sizeof(int));
	i = 0;
	if (array == NULL)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*range;

	min = -9;
	max = 5;
	i = 0;
	range = ft_range(min, max);
	while (min < max)
	{
		__builtin_printf("  %d", range[i]);
		min++;
		i++;
	}
	return (0);
}*/
