#ifndef CONTACT_H
 #define CONTACT_H

#include <iostream>

class Contact
{
private:
    /* Fields */
    std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string darkest_secret;

public:
    /* Constructors */
    Contact(void);
    // Could have constructors that include parameters for each field

    /* Destructors */
    // ~Contact(void);

    /* Getters */
    std::string get_first_name(void);
    std::string get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_login(void);
	std::string	get_postal_address(void);
	std::string	get_email_address(void);
	std::string get_phone_number(void);
	std::string	get_birthday_date(void);
	std::string	get_favorite_meal(void);
	std::string	get_underwear_color(void);
	std::string get_darkest_secret(void);

    /* Setters */
	void	    set_first_name(std::string firstName);
	void	    set_last_name(std::string lastName);
	void	    set_nickname(std::string nickname);
    void        set_login(std::string login);
    void        set_postal_address(std::string postalAddress);
    void        set_email_address(std::string emailAddress);
    void        set_phone_number(std::string phoneNumber);
    void        set_birthday_date(std::string birthdayDate);
    void        set_favorite_meal(std::string favoriteMeal);
    void        set_underwear_color(std::string underwearColor);
    void        set_darkest_secret(std::string darkestSecret);    
};

 #endif