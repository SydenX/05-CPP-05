
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
		void beExecuted(Bureaucrat const &executor) const;

		class CannotCreateOpenFile: public std::exception{
			public:
				virtual const char *what() const throw();
		};
};

#endif
