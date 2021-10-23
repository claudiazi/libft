#include "../libft.h"
#include <string.h>
void iter_toupper(void *content)
{
	if(!content)
		return ;
	char *str = content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

int main()
{
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*start;

	char	*content1 = strdup("hello");
	char	*content2 = strdup("I'm");
	char	*content3 = strdup("a content");
	elem1 = ft_lstnew(content1);
	elem2 = ft_lstnew(content2);
	elem3 = ft_lstnew(content3);
	elem1->next = elem2;
	elem2->next = elem3;
	ft_lstiter(elem2, &iter_toupper);
	start = elem1;
	while(start)
	{
		printf("%s ", (char *)start->content);
		start = start->next;
	}
	return (0);
}
