#pragma once
#ifndef CONTACT_H
#define CONTACT_H
#include <string>


class Contact {

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        std::string secret;

    public:
    Contact(void);
    ~Contact(void);

    void set_first_name(std::string t_first_name);
    std::string get_first_name(void);

    void set_last_name(std::string t_last_name);
    std::string get_last_name(void);

    void set_nickname(std::string t_nickname);
    std::string get_nickname(void);

    void set_number(std::string t_number);
    std::string get_number(void);

    void set_secret(std::string t_secret);
    std::string get_secret(void);

};



#endif
