/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosell- <drosell-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:05:35 by drosell-          #+#    #+#             */
/*   Updated: 2022/09/16 10:05:41 by drosell-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count <= n)
	{
		s[count] = c;
		count++;
	}
	return (s);
}
