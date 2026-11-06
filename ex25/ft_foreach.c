/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:27:31 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/06 19:27:34 by wbontemp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i != length)
	{
		f(tab[i]);
		i++;
	}
}

/*
#include <unistd.h>

int     main()
{
	int     tab[] = {5, 0, 0, 0, 0};

	ft_foreach(tab, 5, &ft_putnbr);
}*/
