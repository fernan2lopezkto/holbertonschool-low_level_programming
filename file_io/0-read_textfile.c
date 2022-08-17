#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read a text file
 *
 * @filename: namber of the file
 * @letters: is the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	int fd = open(filename, O_RDWR);
	
	if(fd == -1)
		return (0);

	buf = malloc(letters + sizeof(char));
	if (!buf)
		retun(0);

	read(fd, buf, letters);

	printf("buf is %s", buf);

	close(fd);
	free(buf);

	return (0);

}
