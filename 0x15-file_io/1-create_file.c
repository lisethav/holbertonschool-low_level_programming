#include "main.h"

/**
 * create_file - creates a new file and write inside
 *
 * @filename: the file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int new_file;
	int i = 0;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != 0)
		{
			i++;
		}
		write(new_file, text_content, i);
	}
	close(new_file);
	return (1);
}
