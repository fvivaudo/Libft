/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivaudo <fvivaudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:39:44 by fvivaudo          #+#    #+#             */
/*   Updated: 2014/11/09 12:04:41 by fvivaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		while (*s != '\0')
		{
			(*f)(s);
			s++;
		}
}
