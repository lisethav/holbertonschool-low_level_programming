#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to read
 * @letters: count characters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open, end_file, read_now;
	char buffer[1024];

	end_file = 0;
	read_now = 1;

	if (filename == NULL)
		return (0);
	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
	{
		return (0);
	}
	else
	{
		while (letters > 1024 && read_now != 0)
		{
			read_now = read(file_open, buffer, 1024);
			write(STDOUT_FILENO, buffer, read_now);
			end_file += read_now;
			letters -= 1024;
		}
			read_now = read(file_open, buffer, letters);
			write(STDOUT_FILENO, buffer, read_now);
			end_file += read_now;
			close(file_open);
			return (end_file);
	}
}
