#include "main.h"
/**
 * appends text at the end of a file
 * @filename: filename
 * @text_content: content add.
 * Return: 1 when file exit, -1 if does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wltt;
	int wrl;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (wltt = 0; text_content[wltt]; wltt++)
			;
		wrl = write(fd, text_content, wltt);
		if (wrl == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

