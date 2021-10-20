#include "../libft.h"
#include <fcntl.h>
int		main()
{
	int fd= open("foo.txt", O_RDWR);
	ft_putchar_fd('a', fd);
	ft_putchar_fd('\n', fd);
	close(fd);
	return (0);
}