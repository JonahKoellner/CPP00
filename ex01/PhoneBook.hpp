/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:56:52 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/08 14:29:03 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once	//include guard

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

/// Array of class Contacts: (Dynamic allocation forbidden !!!)
///		- max 8 Contacts -> if adding more replace the oldest with the newest one
class PhoneBook {
	private:
		int	contact_num;
		Contact contact_list[8];
		void SaveContact(Contact con);
	public:
		PhoneBook();
		void PreviewContacts();
		void SeeContact(int index);
		void AddContact();
};
