/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:12:23 by pdelanno          #+#    #+#             */
/*   Updated: 2023/08/16 16:26:05 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>

class	Phonebook
{
	public:
			Phonebook(void);
			~Phonebook(void);
			void		add(void);
			int			add_info(std::string str, int i);
			void		search(void);
			void		print(int i);
			std::string adapt(std::string str);
			int			isNumber(std::string str);
			int 		strToInt(const std::string str);
	private:
			Contact _contacts[8];
			int		_index;
};

#endif
