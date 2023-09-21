/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:30:24 by aoutifra          #+#    #+#             */
/*   Updated: 2023/09/20 18:21:28 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::add_contact()
{
    Log("Name");
    std::getline(std::cin,m_Name);
    Log("Last Name:");
    std::getline(std::cin,m_Lastname);
    Log("Nike Name:");
    std::getline(std::cin,m_Nikename);
    Log("Phone Number:");
    std::getline(std::cin,m_Phone_Number);
    Log("Dark secret:");
    std::getline(std::cin,m_Dark_secret);
}
void Contact::print_contact()
{
    Log("NAME:" << m_Name);
    Log("Last Name:" << m_Lastname);
    Log("Nike Name:" << m_Nikename);
    Log("Phone Number:" << m_Phone_Number);
    Log("Dark secret:" << m_Dark_secret);
}

Contact::Contact() {
}

Contact::~Contact() {
}
