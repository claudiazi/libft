#include "../libft.h"
#include <fcntl.h>
int		main()
{
	int fd= open("foo.txt", O_RDWR);
	ft_putnbr_fd(-2147483648, fd);
	fd++;
	ft_putchar_fd('\n', fd);
	fd++;
	ft_putnbr_fd(2147483647, fd);
	close(fd);
	return (0);
}
