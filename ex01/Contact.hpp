/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:02:16 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/08 13:30:47 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Contact fields:
 * 	- First name
 * 	- Last name
 * 	- Nickname
 * 	- Phone Number
 * 	- Secret
*/

#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class Contact{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string Secret;
	public:
		void FillContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string sec);
		void PrintContact();
		void PreviewContact();
};
