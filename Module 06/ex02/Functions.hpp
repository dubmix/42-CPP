/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 06:56:33 by pdelanno          #+#    #+#             */
/*   Updated: 2023/10/03 07:25:05 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP

# define FUNCTIONS_HPP

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base *generate();
void identify(Base *p);
void identify(Base &p);

#endif