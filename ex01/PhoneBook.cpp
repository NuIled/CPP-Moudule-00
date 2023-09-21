/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:16:14 by aoutifra          #+#    #+#             */
/*   Updated: 2023/09/20 18:23:03 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{   
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(int i)
{
    arr[i].add_contact();
}

void PhoneBook::print_contact(int x)
{
    arr[x].print_contact();
}

void Search_Contact(int i ,PhoneBook Object)
{
    int index;
    Log("Index of the looking Contact");
    std::string input;
    std::getline(std::cin, input);
    if(std::cin.fail())
        std::cin.clear();
    index = std::stoi(input);
    if (index > 8 || i < index || index < 1)
    {
        Log("No sutch contact in this index") 
        return;
    }
    Object.print_contact(index);
}

int main()
{
    std::string input;
    PhoneBook Object;
    static int i = 0;
    Log("Welcome To my PhoneBook you can search or add a Contact");
    while(1)
    {
        std::getline(std::cin, input,'\n');
        if(i == 9) i = 8;
        if (input.compare("ADD") == 0)
            Object.add_contact(++i);
        else if (!input.compare("SEARCH"))
            Search_Contact(i, Object);
        else if (input.compare("EXIT") == 0)
            break;
        else
            Log("Try :ADD or SEARCH or EXIT");
    }
    return (0);
}
