/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:56:40 by ereynier     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 11:17:13 by ereynier    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcomp(char const c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	ft_dup(const char *s1, char *out, int start, int finish)
{
	int i;

	i = 0;
	while (start <= finish)
	{
		out[i] = s1[start];
		start++;
		i++;
	}
	out[i] = 0;
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		finish;
	int		i;
	char	*out;

	start = 0;
	finish = 0;
	i = 0;
	if (!(s1) || !(set))
		return (NULL);
	while (ft_charcomp(s1[i], set) && s1[i])
		i++;
	start = i;
	while (s1[i + 1])
		i++;
	while (ft_charcomp(s1[i], set) && i > 0)
		i--;
	finish = i;
	if ((finish - start) < 0 || !(out = (char*)malloc(finish - start + 1)))
		return (NULL);
	else
		ft_dup(s1, out, start, finish);
	return (out);
}
