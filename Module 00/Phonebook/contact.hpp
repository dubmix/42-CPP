/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:29:14 by pdelanno          #+#    #+#             */
/*   Updated: 2023/08/16 16:09:50 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	public:
			Contact(void);
			~Contact(void);
			void			set_data(std::string str, int i);
			std::string		get_data(int i);
	private:
			// std::string		_firstname;
			// std::string		_lastname;
			// std::string		_nickname;
			// std::string		_phone;
			// std::string		_secret;
			std::string			_data[4];
};

#endif
