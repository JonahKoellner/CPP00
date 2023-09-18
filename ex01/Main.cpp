/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:05:10 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/18 10:45:28 by jkollner         ###   ########.fr       */
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
		std::cin >> user_input;
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
			std::cout << std::endl;
			std::cout << "Index of Entry:";
			std::cin >> index;
			if (std::cin.fail()){
				std::cout << "This was not an index." << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the remaining input
			}
			else
				pb.SeeContact(index);
		}
	}
}
