/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:07:08 by sle-nogu          #+#    #+#             */
/*   Updated: 2025/08/24 19:53:44 by sle-nogu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/Bureaucrat.hpp"
# include "../header/AForm.hpp"
# include "../header/ShrubberyCreationForm.hpp"
# include "../header/RobotomyRequestForm.hpp"
# include "../header/PresidentialPardonForm.hpp"
# include "../header/Intern.hpp"
#include <sstream>
#include <cstdlib>

int main()
{
    srand(time(NULL));
    Bureaucrat boss("Zapp Brannigan", 1);
    Intern someRandomIntern;
    AForm* createdForm;

    std::cout << "--- Test 1: Création d'un ShrubberyCreationForm ---" << std::endl;
    try
    {
        createdForm = someRandomIntern.makeForm("ShrubberyRequestForm", "jardin");
        if (createdForm)
        {
            std::cout << *createdForm << std::endl;
            boss.signForm(*createdForm);
            boss.executeForm(*createdForm);
            delete createdForm;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception inattendue: " << e.what() << '\n';
    }

    std::cout << "\n----------------------------------------------------\n" << std::endl;

    std::cout << "--- Test 2: Création d'un RobotomyRequestForm ---" << std::endl;
    try
    {
        createdForm = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        if (createdForm)
        {
            std::cout << *createdForm << std::endl;
            boss.signForm(*createdForm);
            boss.executeForm(*createdForm);
            boss.executeForm(*createdForm);
            delete createdForm;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception inattendue: " << e.what() << '\n';
    }

    std::cout << "\n----------------------------------------------------\n" << std::endl;

    std::cout << "--- Test 3: Création d'un PresidentialPardonForm ---" << std::endl;
    try
    {
        createdForm = someRandomIntern.makeForm("PresidentialPardonForm", "Zoidberg");
        if (createdForm)
        {
            std::cout << *createdForm << std::endl;
            boss.signForm(*createdForm);
            boss.executeForm(*createdForm);
            delete createdForm;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception inattendue: " << e.what() << '\n';
    }

    std::cout << "\n----------------------------------------------------\n" << std::endl;

    std::cout << "--- Test 4: Tentative de création d'un formulaire inconnu ---" << std::endl;
    try
    {
        createdForm = someRandomIntern.makeForm("demande d'augmentation", "Philip J. Fry");
        if (createdForm == NULL)
        {
            std::cout << "Test réussi: makeForm a bien retourné NULL pour un formulaire inconnu." << std::endl;
        }
        else
        {
            std::cout << "Test échoué: un formulaire a été créé pour un nom invalide." << std::endl;
            delete createdForm;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception capturée comme prévu: " << e.what() << '\n';
    }
    
    return 0;
}

