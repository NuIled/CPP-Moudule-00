/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:56:36 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/30 13:51:37 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    Contact arr[8];
public:
	PhoneBook();
	~PhoneBook();
    void add_contact(int i);
    void print_contacts(int x);
    void print_contact(int x);
};

int if_contain_digit(std::string& index);

#endif