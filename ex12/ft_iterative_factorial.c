/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:54:53 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/06 21:55:12 by wbontemp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	temp = nb;
	i = 1;
	while (i < nb)
	{
		temp = temp * i;
		i++;
	}
	return (temp);
}
/*
int	main(void)
{
	int	nb;

	nb = 20;
	__builtin_printf("%d", ft_iterative_factorial(nb));
}*/