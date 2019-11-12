0x15. C - File I/O - Work with files

0-read_textfile.c -  reads a text file and prints it to the POSIX standard output.

Compilation options: $ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-read_textfile.c -o a
Excecution: $./a Requiescat.
   
1-create_file.c -  creates a file.
Compilation options: $ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-create_file.c -o b
Execution: $ ./b hello world

2-append_text_to_file.c - appends text at the end of a file.
Compilation options: $ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-append_text_to_file.c -o c
Execution: $ ./c hello " World!

3-cp.c - copies the content of a file to another file.
Compilation options $ gcc -Wall -pedantic -Werror -Wextra 3-cp.c -o cp
Execution: $ ./cp incitatous Incitatous