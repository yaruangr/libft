/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:39:41 by yaruangr          #+#    #+#             */
/*   Updated: 2023/02/18 12:12:16 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"
//#include	<stdio.h>

int	ft_isalnum(int c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}
	else if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int	main(void)
{
	printf("%d\n", ft_isalnum('+'));
	return (0);
}
*/