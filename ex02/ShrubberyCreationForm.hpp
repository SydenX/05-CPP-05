
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm: public AForm {
	private:
		const std::string _target;
	protected:
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform);
		ShrubberyCreationForm& 	operator=(ShrubberyCreationForm const&);
		std::string	const getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif
