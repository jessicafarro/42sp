/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:19:32 by marvin            #+#    #+#             */
/*   Updated: 2024/09/01 10:19:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}
int main(void)
{
    int number;

    ft_ft(&number);
    printf("The valor of 'number' is: %d\n", number);

    return 0;
}