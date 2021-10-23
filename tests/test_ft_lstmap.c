#include "../libft.h"
#include <string.h>
void *iter_toupper(void *content)
{
	if(!content)
		return(0);
	char *str = content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (content);
}

void ft_del(void *content)
{
	if(!content)
		return ;
	free(content);
}

int main()
{
	t_list	*elem;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*new_lst;

	char	*content1 = strdup("hello");
	char	*content2 = strdup("I'm");
	char	*content3 = strdup("a content");
	elem = ft_lstnew(content1);
	elem2 = ft_lstnew(content2);
	elem3 = ft_lstnew(content3);
	elem->next = elem2;
	elem2->next = elem3;
	new_lst = ft_lstmap(elem2, &iter_toupper, &ft_del);
	while(new_lst)
	{
		printf("%s ", (char *)new_lst->content);
		new_lst = new_lst->next;
	}
	return (0);
}
