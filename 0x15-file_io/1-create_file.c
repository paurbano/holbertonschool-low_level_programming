#include "holberton.h"
/**
 * create_file - create a file
 * @filename: File to read
 * @text_content: number of letters it should read and print
 * Description: create a text file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
int file, wr, lenContent = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

if (file == -1)
return (-1);


for ( ; text_content[lenContent] != '\0' ; lenContent++)
;

wr = write(file, text_content, lenContent);

if (wr == -1)
return (-1);

close(file);
return (1);
}
