/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:39:45 by marvin            #+#    #+#             */
/*   Updated: 2024/08/31 19:39:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr(int nb);
int ft_countdig(int nb);

int main() 
{
    ft_putnbr(-12378906);
    return(0);
}

void	ft_putnbr(int nb)
{
    char charNumbers[10] = {'0','1','2','3','4','5','6','7','8','9'}; // We should to make this array cause write function not display int variables
    int i = 0;
    int isNeg = 0;

    if (nb < 0){ //test if is negative number
        isNeg = 1;  
        nb *= -1; //Only positibe is allowed
    }

    int arr[ft_countdig(nb)]; //make an array with length of int    

    while (nb > 0) { // iterate with integer and put on array
        int digit = nb % 10;
        arr[i] = digit;
        i++;
        nb /= 10;
    } 
    if (isNeg) //if is negative put minus signal
        write(1, "-", 1);
    for(int a = i  - 1 ; a >= 0; a--) {   //make a reverse loop to put on screen the int     
        write(1, &charNumbers[arr[a]], 1);
    }
}
int	ft_countdig(int nb) // function count int
{
    int ret=1;
    while (nb/=10) ret++;
    return ret;
}
