
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*list;
	t_list		*new_list;

	if (!lst)
		return (NULL);
	list = f(lst);
	new_list = list;
	while (lst->next)
	{
		lst = lst->next;
		list->next = f(lst);
		if (!list->next)
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new_list);
}