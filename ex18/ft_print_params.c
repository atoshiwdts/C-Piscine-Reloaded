/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 09:17:28 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/05 12:04:14 by wbontemp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	c = '\n';
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		i = 0;
		j++;
		ft_putchar(c);
	}
}

int	main(int argc, char *argv[])
{
	ft_print_params(argc, argv);
	return (0);
}
