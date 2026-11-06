/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:21:27 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/05 10:23:36 by wbontemp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
