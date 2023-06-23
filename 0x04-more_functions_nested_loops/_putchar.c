#include <unistd.h>
#include "main.h"


/**
 * _putchar - print char to cout
 *
 * @c: referes to the char to be printed
 *
 * Return: 1 (Success) and -1 on error
*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
