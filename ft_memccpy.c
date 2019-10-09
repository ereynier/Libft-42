/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:05:55 by ereynier     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 16:15:23 by ereynier    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*(((char*)src) + i) == (unsigned char)(c))
		{
			*(((char*)dst) + i) = *(((char*)src) + i);
			i++;
			return (dst + i);
		}
		*(((char*)dst) + i) = *(((char*)src) + i);
		i++;
	}
	return (0);
}
