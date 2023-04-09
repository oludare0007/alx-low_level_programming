#include "main.h"
/**
 * append_text_to_file - append text at the end of the file
 *
 * @filename: filename.
 *
 *
 * @text_content: add the  content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 *
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wltt;
	int lwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (wltt = 0; text_content[wltt]; wltt++)
			;

		lwr = write(fd, text_content, wltt);

		if (lwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
