/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 13:50:22 by ereynier     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 14:10:28 by ereynier    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void*))
{
	t_list	*out;

	if (!(out = malloc(sizeof(t_list))))
		return (NULL);
	if (lst == NULL || f == NULL)
		return (NULL);
	out->content = (*f)(lst->content);
	lst = lst->next;
	while (lst->next)
	{
		ft_lstadd_back(&out, (*f)(lst->content));
		lst = lst->next;
	}
	return (out);
}
