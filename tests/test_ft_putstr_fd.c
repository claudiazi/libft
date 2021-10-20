#include "../libft.h"
#include <fcntl.h>
int		main()
{
	int fd= open("foo.txt", O_RDWR);
	ft_putstr_fd("test ft_putstr_fd", fd);
	ft_putstr_fd("\n", fd);
	close(fd);
	return (0);
}