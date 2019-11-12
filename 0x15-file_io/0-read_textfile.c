#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t c, d, e;

	buffer = malloc(sizeof(char)* letters);
	if (buffer == NULL)
		return (-1);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return(0);

	c = read(file, buffer, letters);
	if (c == -1)
		return (0);

	d = write(STDOUT_FILENO, buffer, c);
	if (d == -1)
		return (0);
	
	e = close(file);
	if (e == -1)
		return (0);
	
	return(c);
}
