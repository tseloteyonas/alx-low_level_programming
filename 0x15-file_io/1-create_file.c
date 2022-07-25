#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: null terminated string
 *
 * Return: 1 if success and -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int filed, i, w;

	if (filename == NULL)
	{
		return (-1);
	}

	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filed == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0 ; text_content[i] != '\0' ; i++)
		;

	w = write(filed, text_content, i);

	if (w == -1)
	{
		return (-1);
	}

	close(filed);
	return (1);
}
