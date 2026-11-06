/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:28:04 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/05 12:07:30 by wbontemp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_parsestr(int argc, char *argv[])
{
	int		i;
	int		j;
	char	bs;

	i = 0;
	j = 1;
	bs = '\n';
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar(bs);
		i = 0;
		j++;
	}
}

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

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	j = 1;
	while (j < argc - 1)
	{
		i = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
				j = 1;
			}
			i++;
		}
		j++;
	}
	ft_parsestr(argc, argv);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (1);
	ft_sort_params(argc, argv);
	return (0);
}
