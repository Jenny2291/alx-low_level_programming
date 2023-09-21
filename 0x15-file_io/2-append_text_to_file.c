#include "main.h"

/**
<<<<<<< HEAD
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file to append text to
=======
 * append_text_to_file - Appends text to an already existing file.
 * @filename: A pointer to the name of the file to append to 
>>>>>>> 93d97848eec0e5869e0c253906d7c782478e260c
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
