/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:22:56 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/08 13:52:59 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::PrintContact(){
	std::cout << std::endl;
	std::cout << "First Name:" << FirstName << std::endl;
	std::cout << "Last Name:" << LastName << std::endl;
	std::cout << "Nickname:" << Nickname << std::endl;
	std::cout << "Phone Number:" << PhoneNumber << std::endl;
	std::cout << "Secret:" << Secret << std::endl;
}

void Contact::FillContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string sec){
	FirstName = fn;
	LastName = ln;
	Nickname = nn;
	PhoneNumber = pn;
	Secret = sec;
}

std::string TruncateString(std::string string, int max, std::string TruncateString){
	if (string.size() > max)
		return (string.substr(0, max - 1).append(TruncateString));
	return (string);
}

void Contact::PreviewContact(){
	std::cout << "|" << std::right << std::setw(10) << TruncateString(FirstName, 10, ".") << "|";
	std::cout << std::right << std::setw(10) << TruncateString(LastName, 10, ".") << "|";
	std::cout << std::right << std::setw(10) << TruncateString(Nickname, 10, ".") << "|";
	std::cout << std::endl;
}
