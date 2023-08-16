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
#include <string>

class	Phonebook
{
	public:
			Phonebook(void);
			~Phonebook(void);
			void	add(void);
			//void	search(void);
			//void	print();
	private:
			Contact _contacts[8];
			int		_index;
};

#endif
