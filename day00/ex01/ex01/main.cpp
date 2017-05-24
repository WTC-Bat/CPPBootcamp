/*
**  A lot of errors
*/

#include "Contact.hpp"

Contact tContacts[8];

//?
static int  get_contacts_length(Contact contacts[])
{
    unsigned int    idx;

    for (idx = 0; idx < (sizeof(*contacts) / sizeof(contacts[0])); idx++)
    {
        idx++;
    }
    return (idx);
    // int     len;

    // len = 0;
    // if (&contacts[0] != NULL)
    // {
    //     while (&contacts[len] != NULL)
    //     {
    //         std::cout << len << std::endl;
    //         len++;
    //     }
    // }
    // return (len);

    // return (sizeof(contacts) / sizeof(contacts[0]));
}

static void add_new_contact(Contact contacts[], Contact contact)
{
    size_t  len;

    len = -1;
    if (!contacts)
        contacts = new Contact[8];

    if ((len = get_contacts_length(contacts)) == 8)
        return ;    //ERROR
    
    if (len == 0) 
        contacts[len] = contact;
    else
        contacts[len - 1] = contact;
}

static void test_print()
{
    int i;

    i = 0;
    for (i = 0; i < get_contacts_length(tContacts); i++)
    {
        std::cout << tContacts[i].get_first_name() << std::endl;
        std::cout << tContacts[i].get_email_address() << std::endl;
    }
}

static void test_contact()
{
    Contact tContact = Contact::Contact();

    tContact.set_first_name("Matthew");
    tContact.set_last_name("Van Wyk");
    tContact.set_nickname("FatBat");
    tContact.set_login("mvanwyk");
    tContact.set_postal_address("123 Fourth Avenue, Fifthville");
    tContact.set_email_address("myshorts.mail@gmail.com");
    tContact.set_phone_number("0112345678");
    tContact.set_birthday_date("6 March 1988");
    tContact.set_favorite_meal("Cheese Burger");
    tContact.set_underwear_color("Shocking Pink");
    tContact.set_darkest_secret("I.AM.BAT!");

    add_new_contact(tContacts, tContact);
    test_print();
}

int         main(int argc, char **argv)
{
    // Contact contacts[8];

    if (argc > 1)
    {
        //TMP
        if (strcmp(argv[1], "TEST") == 0)
        {
            std::cout << "Testing...!" << std::endl;
            test_contact();
        }
    }

    /*
    Contact contact = Contact::Contact();
    contact.set_email_address("fatbat@contacts.co.za");

    std::cout << "Added: " << contact.get_email_address() << " to contacts" << std::endl;
    */
}