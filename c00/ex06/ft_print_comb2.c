/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 16:50:10 by vinda-si          #+#    #+#             */
/*   Updated: 2024/08/26 16:57:42 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(int n);

int main() 
{
    ft_print_comb2(2);
    return(0);
}

void	ft_print_comb2(int n)
{  
    char charNumbers[10] = {'0','1','2','3','4','5','6','7','8','9'}; // We should to make this array cause write function not display int variables
    if ( n <= 0 || n > 10)
        return;
    for(int a = 0; a <= 9; a++) {         //Iterate first collumn 
        for(int b = 0; b <= 9; b++) {     //Iterate second collumn
            if ( (b >= a + 1) ) { //Make logical validation
                write(1, &charNumbers[a], 1); //Print collumn
                write(1, &charNumbers[b], 1);
                if (!(a == 8 && b == 9 )) // Comma control of last combination
                    write(1, ", ", 2); 
            }
        }
    }
}
