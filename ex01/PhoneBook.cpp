/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:16:14 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/30 13:50:46 by aoutifra         ###   ########.fr       */
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

void PhoneBook::print_contacts(int x)
{
    arr[x].print_view(x);
}

int if_contain_digit(std::string& index)
{
    int digit = 0;
    for (size_t i = 0; i < index.length();)
    {
        if (index[i] > '9' || index[i] < '0' || i > 11)
            return -1;
        i++;
        digit = index[i - 1] - '0' * i;
    }
    return ((digit < 8 && digit >= 0) ? digit : -1);
}
void print_borard()
{
    Logx ( "Index     " << "|"<<
    "First Name"<< 
    "|" "Last Name " <<
     "|" "Nick Name " << "|"<<
     "Cell Phone" << "|"<<
     "Secret    " << std::endl);
}

void Search_Contact(int i ,PhoneBook Object)
{
    std::string index;
    print_borard();
    for (int j = 0; j <= 7; j++)
        Object.print_contacts(j);
    int number = 0;
    Log("Index of the looking Contact");
    std::getline(std::cin,index);
    if(std::cin.fail())
        exit(0);
    number = if_contain_digit(index);
    if (index.empty() ||number == -1|| number  > i)
    {
        Log("No sutch contact in this index");
        return;
    }
    Object.print_contact(number);
    return ;
}

int main()
{
    std::string input;
    PhoneBook Object;
    int i = -1;
    Log("Welcome To my PhoneBook you can search or add a Contact");
    Log("Try :ADD or SEARCH or EXIT");
    while(1)
    {
        std::getline(std::cin,input);
        if (std::cin.fail())
            exit(0);
        if(i == 7) i = -1;
        if (!input.compare("ADD"))
            Object.add_contact(++i);
        else if (!input.compare("SEARCH"))
            Search_Contact(i, Object);
        else if (!input.compare("EXIT"))
            break;
        else
            Log("Try :ADD or SEARCH or EXIT");
        std::cin.clear();
    }
    return (0);
}
