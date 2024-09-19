
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
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform);
		PresidentialPardonForm& 	operator=(PresidentialPardonForm const&);
		std::string	const getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif
