/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjesdos-s <mjesdos-s@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:29:35 by jesdos-s            #+#    #+#           */
/*   Updated: 2024/08/31 15:29:35 by jesdos-s           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void) {
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void){    
    char numbers[] = "1234567890";
    write(1, &numbers, 10);
}
