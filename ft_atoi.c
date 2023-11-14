/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:40:14 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 19:02:36 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_res(int sign)
{
	if (sign == (-1))
		return (0);
	return (-1);
}

static char	*issspace(char *str)
{
	while (str && (*str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\r'
			|| *str == '\f' || *str == ' '))
	{
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	resulte;
	int				count;

	sign = 1;
	resulte = 0;
	count = 0;
	str = issspace((char *)str);
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str) == 1)
	{
		resulte = resulte * 10 + (*str - '0');
		str++;
		count++;
	}
	if (resulte > LONG_MAX && count >= 20)
		return (check_res(sign));
	return (sign * resulte);
}
/*#include <stdio.h>
#include <xlocale.h>
int main()
{
	printf("%d\n",ft_atoi("-214748364944445454545434343433434343343"));
	printf("%d",atoi("214748364944445454545434343433434343343"));

}*/
