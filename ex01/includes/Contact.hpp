/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:59:23 by bifernan          #+#    #+#             */
/*   Updated: 2024/09/03 14:21:08 by bifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "common.hpp"

class Contact {
	private: 
		std::string	index;
		std::string	trunc_first_name;
		std::string	trunc_last_name;
		std::string	trunc_nickname;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		void	display_contact();
		void	update_field(std::string, int);
		void	trunc_str(std::string, int);
		void	show_contact();
};

#endif
