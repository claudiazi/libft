#include "../libft.h"

int main()
{
	char	*data = "hello, i'm a content! :)";
	t_list	*l = ft_lstnew(data);
	printf("%s", (char *)l->content);
}

