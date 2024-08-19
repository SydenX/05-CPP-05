
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
		void				setGrade(int grade);
	protected:
		
	public:
		Bureaucrat(std::string);
		Bureaucrat(std::string, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &bureaucrat);
		Bureaucrat& 	operator=(Bureaucrat const&);
		std::string const &getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat &bureaucrat);

#endif
