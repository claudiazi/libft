#include "libft.h"
void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*curr;

	next = *lst;
	if (!lst || !del)
		return ;
	while (next)
	{
		curr = next;
		next = curr->next;
		ft_lstdelone(curr, del);
	}
	*lst = 0;
}
