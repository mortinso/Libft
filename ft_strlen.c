/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:40:09 by mortins-          #+#    #+#             */
/*   Updated: 2022/11/15 13:03:46 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

//	Returns the number of bytes in 's'

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
