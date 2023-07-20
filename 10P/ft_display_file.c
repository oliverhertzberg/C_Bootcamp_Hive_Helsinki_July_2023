/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:48:02 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/19 19:26:44 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(STDOUT_FILENO, str, len);
}

void	readf(char *file)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_putstr("Cannot read file.\n");
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
		write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_read == -1)
		ft_putstr("Cannot read file.\n");
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc >= 2)
		{
			ft_putstr("Too many arguments.\n");
			return (-1);
		}
		if (argc <= 1)
		{
			ft_putstr("File name is missing.\n");
			return (-1);
		}
	}
	readf(argv[1]);
	return (0);
}
