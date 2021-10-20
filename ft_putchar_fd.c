#include "libft.h"
void ft_putchar_fd(char c, int fd)
/* Writes cnt bytes from buf to the file or socket associated with fd. cnt should not be greater than INT_MAX.
 * (defined in the limits.h header file). If cnt is zero, write() simply returns 0 without attempting any other action. */
/* File descriptor is integer that uniquely identifies an open file of the process. */
{
	write(fd, &c, 1);
}
