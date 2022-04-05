#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - append text to a file
 * @filename: file's name
 * @text_content: text content to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int torf = 0, wr = 0, len = 0;

	if (filename == NULL)
		return (-1);

	torf = open(filename, O_APPEND | O_WRONLY);
	if (torf == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		wr = write(torf, text_content, len);
		if (wr == -1)
			return (-1);
	}

	close(torf);
	return (1);
}
