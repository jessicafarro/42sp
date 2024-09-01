/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:49:27 by marvin            #+#    #+#             */
/*   Updated: 2024/08/31 15:49:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void) {
    ft_is_negative(-42);
    ft_is_negative(42);
    return 0;
}

void ft_is_negative(int n){   
    char answer = 'N'; 
    if (n > 0 ) answer = 'P';      
    write(1, &answer, 1);
}
