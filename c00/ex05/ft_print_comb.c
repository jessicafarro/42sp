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

#include <unistd.h>

void	ft_print_comb(void);

int main() 
{
    ft_print_comb();
    return(0);
}

void	ft_print_comb(void)
{  
    char charNumbers[10] = {'0','1','2','3','4','5','6','7','8','9'}; // We should to make this array cause write function not display int variables
    for(int a = 0; a <= 9; a++) {         //Iterate first collumn 
        for(int b = 1; b <= 9; b++) {     //Iterate second collumn
            for(int c = 1; c <= 9; c++) { //Iterate third collumn
                if ( !(a == b == c) && (b >= a + 1) && (c >= b + 1)) { //Make logical validation, not 3 equal numbers and subsequent colluns not minor of previous one 
                    write(1, &charNumbers[a], 1); //Print collumn
                    write(1, &charNumbers[b], 1);
                    write(1, &charNumbers[c], 1);
                    if (!(a == 7 && b == 8 && c == 9 )) // Comma control of last combination
                        write(1, ", ", 2);           
                } 
            }
        }
    }
}
