/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:10:19 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/20 13:55:18 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	contact_num = 0;
}

void PhoneBook::SeeContact(int index){
	if (index >= contact_num || index < 0)
		std::cout << "Not a valid index for this Phonebook." << std::endl;
	else{
		contact_list[index].PrintContact();
	}
}

void PhoneBook::PreviewContacts(){
	std::cout << std::endl;
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nick Name" << "|";
	std::cout << std::endl;
	for (int iter = 0; iter < contact_num; iter++) {
		std::cout << std::setw(10) << iter;
		contact_list[iter].PreviewContact();
	}
}

void PhoneBook::AddContact(){
	std::string fn, ln, nn, pn, sec;
	std::cout << "First Name:";
	std::getline(std::cin, fn);
	std::cout << "Last Name:";
	std::getline(std::cin, ln);
	std::cout << "Nick name:";
	std::getline(std::cin, nn);
	std::cout << "Phone Number:";
	std::getline(std::cin, pn);
	std::cout << "Secret:";
	std::getline(std::cin, sec);
	if (!(fn.empty() || ln.empty() || nn.empty() || pn.empty() || sec.empty())){
		Contact con;
		con.FillContact(fn, ln, nn, pn, sec);
		SaveContact(con);
	}else{
		std::cout << "Don't leave any field empty !" << std::endl;
	}
}

void PhoneBook::SaveContact(Contact con){
	if ((unsigned int)contact_num < (sizeof(contact_list) / sizeof(Contact)))
		contact_list[contact_num++] = con;
	else{
		for (int iter = 0; iter < contact_num - 1; iter++){
			contact_list[iter] = contact_list[iter + 1];
		}
		contact_list[contact_num - 1] = con;
	}
}
