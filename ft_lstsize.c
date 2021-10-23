#include "libft.h"
int	ft_lstsize(t_list	*lst)
{
	int size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*question: do we have to create a t_list *next here? */