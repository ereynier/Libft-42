/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:38:39 by ereynier     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 14:18:40 by ereynier    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_conv(long int n, char *out, int i)
{
	long int j;

	if (n < 0)
		j = -n;
	else
		j = n;
	if (j / 10 > 0)
	{
		i = ft_conv(j / 10, out, i) + 1;
		out[i] = (j % 10) + '0';
		return (i);
	}
	out[i] = (j % 10) + '0';
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*out;

	j = n;
	i = 0;
	while (j)
	{
		j = j / 10;
		i++;
	}
	if (n < 0)
		i++;
	if (!(out = (char*)malloc(i * sizeof(char) + 1)))
		return (0);
	i = 0;
	if (n < 0)
	{
		out[0] = '-';
		i++;
	}
	i = ft_conv((long int)(n), out, i);
	out[i + 1] = 0;
	return (out);
}
