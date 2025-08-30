/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:07:08 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/24 18:00:17 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/Bureaucrat.hpp"
# include "../header/AForm.hpp"
# include "../header/ShrubberyCreationForm.hpp"
# include "../header/RobotomyRequestForm.hpp"
# include "../header/PresidentialPardonForm.hpp"
#include <cstdlib>

#include <sstream>

int main()
{
    srand(time(NULL));
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "--- CREATION DES BUREAUCRATES ET FORMS --" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    try
    {
        Bureaucrat boss("Zaphod Beeblebrox", 1);
        Bureaucrat intern("Arthur Dent", 150);
        std::cout << boss << std::endl;
        std::cout << intern << std::endl;

        ShrubberyCreationForm   form1("jardin");
        RobotomyRequestForm     form2("Bender");
        PresidentialPardonForm  form3("Ford Prefect");
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
        std::cout << form3 << std::endl;

        std::cout << "\n-----------------------------------------" << std::endl;
        std::cout << "--- TEST DU SHRUBBERY CREATION FORM ---" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
        
        std::cout << "\n-> L'interne essaie de signer le formulaire Shrubbery..." << std::endl;
        intern.signForm(form1);

        std::cout << "\n-> Le boss essaie d'executer le formulaire non signe..." << std::endl;
        boss.executeForm(form1);

        std::cout << "\n-> Le boss signe et execute le formulaire Shrubbery..." << std::endl;
        boss.signForm(form1);
        boss.executeForm(form1);


        std::cout << "\n-----------------------------------------" << std::endl;
        std::cout << "--- TEST DU ROBOTOMY REQUEST FORM ---" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;

        std::cout << "\n-> Le boss signe le formulaire Robotomy..." << std::endl;
        boss.signForm(form2);

        std::cout << "\n-> L'interne essaie d'executer le formulaire signe..." << std::endl;
        intern.executeForm(form2);

        std::cout << "\n-> Le boss execute le formulaire Robotomy 4 fois..." << std::endl;
        boss.executeForm(form2);
        boss.executeForm(form2);
        boss.executeForm(form2);
        boss.executeForm(form2);


        std::cout << "\n-----------------------------------------" << std::endl;
        std::cout << "--- TEST DU PRESIDENTIAL PARDON FORM ---" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
        

        std::cout << "\n-> Le boss signe le formulaire Presidentiel..." << std::endl;
        boss.signForm(form3);

        std::cout << "\n-> Le boss execute le formulaire Presidentiel..." << std::endl;
        boss.executeForm(form3);
    }
    catch (std::exception & e)
    {
        std::cerr << "Une exception non geree a atteint le main: " << e.what() << std::endl;
    }

    return 0;
}

