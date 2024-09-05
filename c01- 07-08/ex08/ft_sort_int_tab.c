/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:35:29 by marvin            #+#    #+#             */
/*   Updated: 2024/09/01 12:35:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_sort_int_tab( int *tab, size_t size )
{
    for ( size_t last = size; !( size < 2 ); size = last ){
        for ( size_t i = last = 1; i < size; ++i ){
            if ( tab[i] < tab[i-1] ){
                int tmp = tab[i];
                tab[i] = tab[i - 1];
                tab[i - 1] = tmp;                
                last = i;
            }
        }
    }
}
int main(void) 
{
    int tab[] = { 9, 5, 2, 3, 8, 4, 16, 20, 24 };
    const size_t N = sizeof( tab ) / sizeof( *tab );
    
    for ( size_t i = 0; i < N; i++ )
    {
        printf( "%d ", tab[i] );
    }
    putchar( '\n' );
    
    ft_sort_int_tab( tab, N );
    
    for ( size_t i = 0; i < N; i++ )
    {
        printf( "%d ", tab[i] );
    }
    putchar( '\n' );

    return 0;
}