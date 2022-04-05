#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read the file and print checked amount of letters
 * @filename: file's name
 * @letters: number of letters
 * Return: wr or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int torf = 0, r = 0, wr = 0;
	char *buf;

	buf = malloc(sizeof(char) * letters); /*set memory*/
	torf = open(filename, O_RDONLY); /*open file as read only*/
	r = read(torf, buf, letters); /*read file*/
	wr = write(STDOUT_FILENO, buf, r); /*write the letters set*/

	if (!filename || torf == -1 || r == -1 || !buf)
	{
		free(buf); /*if fails, free buf*/
		return (0);
	}

	close(torf); /*close file*/
	free(buf); /*free memory to avoid leaks*/
	return (wr); /*if success return wr*/
}
