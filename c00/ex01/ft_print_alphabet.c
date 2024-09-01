/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <mjesdos-s@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:29:35 by jesdos-s            #+#    #+#           */
/*   Updated: 2024/08/31 15:29:35 by jesdos-s           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void ft_print_alphabet(void);

int main(void) {
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(void){    
    char alphabet[] = "abcdefghijklmnopqrstuvxyz";
    write(1, &alphabet, 26);
}