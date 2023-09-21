/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:10:37 by aoutifra          #+#    #+#             */
/*   Updated: 2023/09/12 02:53:48 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main (int ac ,char *av[])
{
    if (ac > 1)
        for(int i = 1; i < ac ;i++)
        {
            for(int j = 0 ; j < strlen(av[i])  ;j++)
                cout << (char)toupper(av[i][j])<< std::endl;
        }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    return 0;
}