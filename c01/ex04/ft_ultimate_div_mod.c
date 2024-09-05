/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:24:54 by jesdos-s          #+#    #+#             */
/*   Updated: 2024/09/05 10:32:55 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer1;
	int	buffer2;

	buffer1 = *a / *b;
	buffer2 = *a % *b;
	*a = buffer1;
	*b = buffer2;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 54;
	printf("%d\n%d\n",a,b);
	ft_ultimate_div_mod(&a,&b);
	printf("%d\n%d\n",a,b);
}
 */