
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string 	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	protected:
		
	public:
		Form(std::string name);
		Form(std::string name, int gradeToExecute, int gradeToSign);
		~Form();
		Form(Form const &form);
		Form& 	operator=(Form const&);
		std::string const &getName() const;
		int getSignatureGrade() const;
		int getExecutionGrade() const;
		bool isSigned() 		const;
		void beSigned(Bureaucrat *b);
		
		class GradeTooHighException: public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream output, const Form &form);

#endif
