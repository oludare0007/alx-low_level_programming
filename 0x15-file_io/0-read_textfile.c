#include "main.h"

/**
 *  reads a text file and prints it to the POSIX standard output
 *
 *  @filename: 
 *  @letters: number of letters printed is seen.
 *
 *  Return: if failed, return 0.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t ndr, nr;
	char *btt;

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);
	btt = malloc(sizeof(char) * (letters));
	if (!btt)
		return (0);
	ndr = read(fd, btt, letters);
	nr = write(STDOUT_FILRNO, btt, nr);

	clode(fd);

	free(btt);

	return (nr);
}


