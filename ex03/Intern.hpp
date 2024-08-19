
#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
	private:
		
	protected:
		
	public:
		Intern();
		~Intern();
		Intern(Intern const &intern);
		Intern& 	operator=(Intern const&);
		AForm *makeForm(std::string formType, std::string target);
};

#endif
