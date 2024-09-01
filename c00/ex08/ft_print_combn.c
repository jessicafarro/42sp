/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jesdos-s <jesdos-s@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:29:35 by jesdos-s            #+#    #+#           */
/*   Updated: 2024/08/31 15:29:35 by jesdos-s           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

void    ft_print_combn(int n);

int main() 
{
   ft_print_combn(2);
   return 0;



}


void    ft_print_combn(int n)
{  
    char charNumbers[10] = {'0','1','2','3','4','5','6','7','8','9'}; // We should to make this array cause write function not display int variables
    for(int a = 0; a <= 9; a++) {         //Iterate first collumn 
        for(int b = 0; b <= 9; b++) {     //Iterate second collumn
            if (0 < n < 10){
                write(1, &charNumbers[a], 1); //Print collumn
                write(1, &charNumbers[b], 1);
            }
            if (!(a == 9 && b == 9 )) 
                write(1, ", ", 2); 
        }
    }
}
