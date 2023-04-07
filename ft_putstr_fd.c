/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:49:15 by mortins-          #+#    #+#             */
/*   Updated: 2022/11/15 12:33:13 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

//	Outputs the string 's' to the given file descriptor

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
