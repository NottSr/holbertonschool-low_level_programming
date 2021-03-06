#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of files
 * @av: files checked
 * Return: 0 or -1
 */
int main(int argc, char *av[])
{
	int f1 = 0, f2 = 0, r1 = 0, w2 = 0;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	f1 = open(av[1], O_RDONLY);
	if (f1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	f2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (f2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((r1 = read(f1, buf, 1024)) > 0)
	{
		w2 = write(f2, buf, r1);
		if (w2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (r1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	if (close(f1) == -1 || close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n"), exit(100);

	return (0);
}
