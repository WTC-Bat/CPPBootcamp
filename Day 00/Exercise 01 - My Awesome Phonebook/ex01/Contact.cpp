#include "Contact.hpp"

/* Constructors */
Contact::Contact(void)
{
	return ;
}

/* Getters */

std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_login(void)
{
	return (this->login);
}

std::string	Contact::get_postal_address(void)
{
	return (this->postal_address);
}

std::string	Contact::get_email_address(void)
{
	return (this->email_address);
}

std::string Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string	Contact::get_birthday_date(void)
{
	return (this->birthday_date);
}

std::string	Contact::get_favorite_meal(void)
{
	return (this->favorite_meal);
}

std::string	Contact::get_underwear_color(void)
{
	return (this->underwear_color);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

/* Setters */

void	    Contact::set_first_name(std::string firstName)
{
	if (!firstName.empty())
		this->first_name = firstName;
}

void	    Contact::set_last_name(std::string lastName)
{
	if (!lastName.empty())
		this->last_name = lastName;
}

void	    Contact::set_nickname(std::string nickname)
{
	if (!nickname.empty())
		this->nickname = nickname;
}

void        Contact::set_login(std::string login)
{
	if (!login.empty())
		this->login = login;
}

void        Contact::set_postal_address(std::string postalAddress)
{
	if (!postal_address.empty())
		this->postal_address = postalAddress;
}

void        Contact::set_email_address(std::string emailAddress)
{
	if (!email_address.find('@'))
		std::cout << "Email address is invalid" << std::endl;
	else
		this->email_address = emailAddress;
}

void        Contact::set_phone_number(std::string phoneNumber)
{
	if (!phoneNumber.empty())
		this->phone_number = phoneNumber;
}

void        Contact::set_birthday_date(std::string birthdayDate)
{
	if (!birthdayDate.empty())
		this->birthday_date = birthdayDate;
}

void        Contact::set_favorite_meal(std::string favoriteMeal)
{
	if (!favoriteMeal.empty())
		this->underwear_color = favoriteMeal;
}

void        Contact::set_underwear_color(std::string underwearColor)
{
	if (!underwearColor.empty())
		this->underwear_color = underwearColor;
}

void        Contact::set_darkest_secret(std::string darkestSecret)
{
	//if (darkestSecret.empty)
		//throw error
	if (!darkestSecret.empty())
		this->darkest_secret = darkestSecret;
}