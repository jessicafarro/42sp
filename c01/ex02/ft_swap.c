/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:28:45 by marvin            #+#    #+#             */
/*   Updated: 2024/09/03 16:25:36 by jesdos-s         ###   ########.fr       */
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

/* int	main()
{
    int num1 = 100;
    int num2 = 200;

    printf("Valores antes da troca:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    ft_swap(&num1, &num2);

    printf("Valores depois da troca:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
} */