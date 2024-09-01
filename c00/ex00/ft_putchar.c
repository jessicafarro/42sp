/*# **************************************************************************** #
  #                                                                              #
  #                                                         :::      ::::::::    #
  #    c00                                                :+:      :+:    :+:    #
  #                                                     +:+ +:+         +:+      #
  #    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
  #                                                 +#+#+#+#+#+   +#+            #
  #    Created: 2024/08/30 11:53:34 by marvin            #+#    #+#              #
  #    Updated: 2024/08/30 11:53:34 by marvin           ###   ########.fr        #
  #                                                                              #
  # **************************************************************************** #*/

//Defining the standart input output lib
#include <stdio.h>

// Function declaration
void ft_putchar(char c);

//Declaration of a main block
int main() {
    ft_putchar('R'); // Call the function with one caracter
    return 0;
}

// Function definition
void ft_putchar(char c) {
    write(1, &c, 1);
}

