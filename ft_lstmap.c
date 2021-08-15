/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 23:20:25 by kkawano           #+#    #+#             */
/*   Updated: 2021/08/15 17:10:20 by kkawano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*newlst;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
	{
		ft_lstclear(&newlst, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmp);
		lst = lst->next;
	}
	return (newlst);
}

// #include <stdio.h>

// void	*func(void *x)
// {
// 	char	*a;
// 	int		i;

// 	i = 0;
// 	a = ft_strdup((char *)x);
// 	while (a[i] != '\0')
// 	{
// 		a[i] = ft_toupper(a[i]);
// 		i++;
// 	}
// 	return (a);
// }

// void	delete(void *x)
// {
// 	free(x);
// }

// int		main(void)
// {
// 	t_list	*l;
// 	t_list	*new_list;
// 	t_list	*tmp;

// 	l = NULL;
// 	for(int i = 0; i < 10; i++)
// 		ft_lstadd_back(&l, ft_lstnew("hoge"));
// 	tmp = l;
// 	while(l)
// 	{
// 		printf("%s\n", l->content);
// 		l = l->next;
// 	}
// 	new_list = ft_lstmap(tmp, func, delete);
// 	while (new_list)
// 	{
// 		printf("%s\n", new_list->content);
// 		new_list = new_list->next;
// 	}
// }
