/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbontemp <wbontemp@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:59:35 by wbontemp          #+#    #+#             */
/*   Updated: 2026/11/06 21:00:54 by wbontemp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1084

int	ft_display_file(int fd)
{
	char	*buff[BUFFER_SIZE];
	int		bytes_read;

	bytes_read = read(fd, buff, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buff, bytes_read);
		bytes_read = read(fd, buff, BUFFER_SIZE);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (fd == -1)
		write(1, "Cannot read file.\n", 18);
	else
		ft_display_file(fd);
	return (0);
}
