#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - create a file
 * @filename: file's name
 * @text_content: text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int torf = 0, wr = 0, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		torf = open(filename, O_CREAT, 00600);
		close(torf);
		return (1);
	}

	torf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	while (text_content[len])
		len++;

	wr = write(torf, text_content, len);
	if (wr == -1 || torf == -1)
		return (-1);

	close(torf);
	return (1);
}
