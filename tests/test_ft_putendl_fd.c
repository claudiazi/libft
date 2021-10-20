#include "../libft.h"
#include <fcntl.h>
int		main()
{
	int fd= open("foo.txt", O_RDWR);
	ft_putendl_fd("test ft_putstr_fd", fd);
	close(fd);
	return (0);
}