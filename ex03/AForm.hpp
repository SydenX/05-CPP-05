
#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string 	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	protected:

	public:
		AForm();
		AForm(std::string name);
		AForm(std::string name, int gradeToExecute, int gradeToSign);
		virtual ~AForm();
		AForm(AForm const &form);
		virtual AForm& 	operator=(AForm const&);
		std::string const &getName() const;
		int getSignatureGrade() const;
		int getExecutionGrade() const;
		bool isSigned() 		const;
		void beSigned(Bureaucrat const &executor);
		virtual void execute(Bureaucrat const &executor) const;
		
		class GradeTooHighException: public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class FormNotSignedException: public std::exception{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream output, const AForm &form);

#endif
