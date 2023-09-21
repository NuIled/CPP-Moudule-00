/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:30:28 by aoutifra          #+#    #+#             */
/*   Updated: 2023/09/21 02:03:55 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_H
#define Contact_H
#include <iostream>

#define Log(x) std::cout << "-->" << x << std::endl;

class Contact 
{
    std::string m_Name;
    std::string m_Lastname;
    std::string m_Nikename;
    std::string m_Phone_Number;
    std::string m_Dark_secret;
public:
    void print_contact();
    void add_contact();
    Contact();
    ~Contact();
};


#endif // Contact_H 