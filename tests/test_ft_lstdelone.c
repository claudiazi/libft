#include "../libft.h"
#include <string.h>
void ft_del(void *content)
{
	if(!content)
		return ;
	free(content);
}

int main()
{
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*lst;

	char	*content1 = strdup("hello");
	char	*content2 = strdup("I'm");
	char	*content3 = strdup("a content");
	elem1 = ft_lstnew(content1);
	elem2 = ft_lstnew(content2);
	elem3 = ft_lstnew(content3);
	elem1->next = elem2;
	elem2->next = elem3;
	lst = elem1;
	ft_lstdelone(elem2, &ft_del);
	while (lst)
	{
		printf("%s ", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}
