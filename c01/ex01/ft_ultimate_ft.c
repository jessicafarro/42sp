/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:32:56 by jesdos-s          #+#    #+#             */
/*   Updated: 2024/09/03 16:57:35 by jesdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	int	d;

	d = 0;
	c = 0;
	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

/* int	main(void)
{
	int	x = 5;
	int	y = 10;

	printf("Antes da troca:\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	ft_swap(&x, &y);
	printf("Depois da troca:\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return (0);
} */
