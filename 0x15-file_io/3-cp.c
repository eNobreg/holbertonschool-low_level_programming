#include "holberton.h"

void helper_err(int f, int c, char *str2i, int fd);
/**
 * main - main function
 * @argc: Amount of args
 * @argv: Value of args
 * Return: sometimes
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int file1, file2, written, closed;
	ssize_t count;

	helper_err(9, argc, argv[1], 0);

	file1 = open(argv[1], O_RDONLY);
	helper_err(6, file1, argv[1], 0);

	file2 = open(argv[2], (O_WRONLY | O_TRUNC | O_CREAT), 00664);

	if (file2 == -1)
	{
		closed = close(file1);
		helper_err(10, closed, argv[1], file1);

		exit(98);
	}
	while ((count = read(file1, buffer, sizeof(buffer))) != 0)
	{
		helper_err(4, count, argv[1], 0);

		written = write(file2, buffer, count);
		helper_err(7, written, argv[2], 0);
	}

	closed = close(file1);
	helper_err(10, closed, argv[1], file1);

	closed = close(file2);
	helper_err(10, closed, argv[1], file2);

	return (0);
}
/**
 * helper_err - helper
 * @f: Passes in a 4 for read, a 7 for write, a 10 for close, a 6 for file1,
 * 9 if argc is too big
 * @c: Value
 * @str2: String to use somtimes
 * @fd: File descriptor
 * Return: Never
 */
void helper_err(int f, int c, char *str2, int fd)
{

	if (f == 4 && c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str2);
		exit(98);
	}
	if (f == 7 && c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str2);
		exit(99);
	}
	if (f == 6 && c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str2);
		exit(98);
	}
	if (f == 9 && c != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (f == 10 && c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
