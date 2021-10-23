#include "../libft.h"
#include <string.h>
int main()
{
	t_list	*elem;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*start;

	char	*content1 = strdup("hello");
	char	*content2 = strdup("I'm");
	char	*content3 = strdup("a content");
	elem = ft_lstnew(content1);
	elem2 = ft_lstnew(content2);
	elem3 = ft_lstnew(content3);
	elem->next = elem2;
	start = elem;
	ft_lstadd_back(&start, elem3);
	while(start)
	{
		printf("%s ", (char *)start->content);
		start = start->next;
	}
}
