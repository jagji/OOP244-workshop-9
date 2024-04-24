#pragma once
/*/////////////////////////////////////////////////////////////////////////
                          Workshop - 9
Full Name  : jagjit kaur
Student ID#: 156806226
Email      : jkaur682@myseneca.ca
Section    : NII
Date       : 03 april  2024

Authenticity Declaration:

I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////////////*/


#ifndef BOOK_H


#define BOOK_H


#include "LibraryItem.h"




namespace seneca {


    class Book : public LibraryItem {


        char* m_author;



    public:


        Book(const char* title, int year, const char* author);


        Book(const Book& src);


        Book& operator=(const Book& src);


        ~Book() override;



        std::ostream& display(std::ostream& ostr = std::cout) const override;


        bool operator>(const Book& other) const;


    };


}


#endif
