#include "holberton.h"

int main(int argc, char **argv)
{
	char buffer[1024];
	int file1, file2, written, closed;
	ssize_t count;

	if (argc > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (file2 == -1 || file1 == -1)
	{
		closed = close(file1);
		if (closed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", file1);
			exit(100);
		}
		exit(98);		
	}	
	while ((count = read(file1, buffer, sizeof(buffer))) != 0)
	{
		if (count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		written = write(file2, buffer, count);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	return (0);
}
