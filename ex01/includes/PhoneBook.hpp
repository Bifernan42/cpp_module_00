#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "common.hpp"
# include "Contact.hpp"

class PhoneBook {
	private:
		int argc;
		int oldest;
		Contact contacts[8];
	public:
		PhoneBook ();
		void add();
		void search();
};

#endif
