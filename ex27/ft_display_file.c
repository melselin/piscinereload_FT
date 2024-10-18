/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelfrin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:18:16 by mwelfrin          #+#    #+#             */
/*   Updated: 2024/10/18 12:18:25 by mwelfrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

int	main(int argc, char **argv)
{
	char	buffer[BUFFER_SIZE];
	int		fd;
	int		ret;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	ret = read(fd, buffer, BUFFER_SIZE);
	write(1, buffer, ret);
	close(fd);
	return (0);
}
