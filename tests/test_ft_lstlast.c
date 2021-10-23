#include "../libft.h"
#include <string.h>

int main()
{
	t_list	*elem;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*last;

	char	*content1 = strdup("hello");
	char	*content2 = strdup("I'm");
	char	*content3 = strdup("a content");
	elem = ft_lstnew(content1);
	elem2 = ft_lstnew(content2);
	elem3 = ft_lstnew(content3);
	elem->next = elem2;
	elem2->next = elem3;
	last = ft_lstlast(elem);
	printf("%s", (char *)last->content);
}
