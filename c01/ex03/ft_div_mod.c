/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:32:05 by marvin            #+#    #+#             */
/*   Updated: 2024/09/05 16:45:05 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	if (a > 0 || b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/* int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);
	return (0);
} */