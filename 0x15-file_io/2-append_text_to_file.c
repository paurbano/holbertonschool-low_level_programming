#include "holberton.h"
/**
 * append_text_to_file - append text to file
 * @filename: File to read
 * @text_content: content to add
 * Description: append at the end of file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, wr, lenContent = 0;

if (filename == NULL)
return (-1);

file = open(filename, O_WRONLY | O_APPEND, 0600);

if (file == -1)
return (-1);

if (text_content != NULL)
{
for ( ; text_content[lenContent] != '\0' ; lenContent++)
lenContent++;

wr = write(file, text_content, lenContent);

if (wr == -1)
{
close(file);
return (-1);
}

}

close(file);
return (1);
}
