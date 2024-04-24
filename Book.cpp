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

#define _CRT_SECURE_NO_WARNINGS


#include "Book.h"


#include <cstring>



namespace seneca {


    Book::Book(const char* title, int year, const char* author) : LibraryItem(title, year) {


        if (author) {


            m_author = new char[strlen(author) + 1];


            strcpy(m_author, author);


        }


        else {


            m_author = nullptr;


        }


    }



    Book::Book(const Book& src) : LibraryItem(src) {


        m_author = nullptr;


        *this = src;


    }



    Book& Book::operator=(const Book& src) {


        if (this != &src) {


            LibraryItem::operator=(src);


            delete[] m_author;



            if (src.m_author) {


                m_author = new char[strlen(src.m_author) + 1];


                strcpy(m_author, src.m_author);


            }


            else {


                m_author = nullptr;


            }


        }


        return *this;

    }


    Book::~Book() {

        delete[] m_author;

    }


    std::ostream& Book::display(std::ostream& ostr) const {

        LibraryItem::display(ostr);


        ostr << std::endl << "Author: " << (m_author ? m_author : "Unknown");


        return ostr;


    }



    bool Book::operator>(const Book& other) const {


        return m_author && other.m_author && strcmp(m_author, other.m_author) > 0;


    }


}

