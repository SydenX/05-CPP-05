
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm: public AForm {
	private:
		const std::string _target;
	protected:
		
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform);
		PresidentialPardonForm& 	operator=(PresidentialPardonForm const&);
};

#endif
