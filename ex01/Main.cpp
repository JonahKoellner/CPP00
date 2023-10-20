/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:05:10 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/20 13:54:37 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * empty phone book
 * user text prompt
 * commands:
 * 	ADD
 * 	SEARCH
 * 	EXIT
*/
#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string toupper(std::string string){
	for (size_t iter = 0; iter < string.size(); iter++){
		string[iter] = (string[iter] >= 'a' && string[iter] <= 'z') ? string[iter] -= 32 : string[iter];
	}
	return (string);
}

int main()
{
	PhoneBook pb = PhoneBook();
	std::string user_input;
	std::cout << std::endl;
	std::cout << "My Awesome Phonebook :)" << std::endl;
	while (true)
	{
		std::cout << std::endl;
		std::cout << "M_A_P>:";
		std::getline(std::cin, user_input);
		user_input = toupper(user_input);
		if (!std::cin)
			return((std::cout << "There seems to be an error with std::cin !!!" << std::endl), 1);
		if (user_input.compare("ADD") == 0)
			pb.AddContact();
		if (user_input.compare("EXIT") == 0)
			return (((std::cout << "BYE!\nExiting...") << std::endl), 0);
		if (user_input.compare("SEARCH") == 0)
		{
			pb.PreviewContacts();
			int index;
			std::string index_input;
			std::cout << std::endl;
			std::cout << "Index of Entry:";
			std::getline(std::cin, index_input);
			try
			{
				index = std::stoi(index_input);
				pb.SeeContact(index);
			}
			catch(const std::exception& e)
			{
				std::cerr << "This was not an index." << '\n';
				//std::cerr << e.what() << '\n';
			}
		}
	}
}
