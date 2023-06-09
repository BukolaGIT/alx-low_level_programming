#include "main.h"

/**
 * append_text_to_file - Write function that
 * appends text at the end of file.
 * @alxforme: 1 on success and -1 on failure.
 * @text_content: The string to add to end  of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *alxforme, char *text_content)
{
	int o, w, len = 0;

	if (alxforme == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(alxforme, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
