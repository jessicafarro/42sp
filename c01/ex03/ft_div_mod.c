/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesdos-s <jesdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:32:05 by marvin            #+#    #+#             */
/*   Updated: 2024/09/03 17:50:25 by jesdos-s         ###   ########.fr       */
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

int main()
{
    int num1 = 10;
    int num2 = 3;
    int division;
    int remainder;

    ft_div_mod(num1, num2, &division, &remainder);

    printf("Resultado da divisão: %d\n", division);
    printf("Resto da divisão: %d\n", remainder);

    return 0;
}