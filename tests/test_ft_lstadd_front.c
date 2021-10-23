#include "../libft.h"
#include <string.h>
int main()
{
	t_list	*start;
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;

	char	*content1 = strdup("hello");
	char	*content2 = strdup("I'm");
	char	*content3 = strdup("a content");
	start = NULL;
	elem1 = ft_lstnew(content1);
	elem2 = ft_lstnew(content2);
	elem3 = ft_lstnew(content3);
	elem1->next = elem2;
	elem2->next = elem3;
	ft_lstadd_front(&start, elem3);
	ft_lstadd_front(&start, elem2);
	ft_lstadd_front(&start, elem1);
	while(start)
	{
		printf("%s ", (char *)start->content);
		start = start->next;
	}
}
