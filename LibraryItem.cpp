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



#include "LibraryItem.h"


#include <cstring>



namespace seneca {


    LibraryItem::LibraryItem() : m_title(nullptr), m_year(0) {}



    LibraryItem::LibraryItem(const char* title, int year) : m_year(year) {


        if (title) {


            m_title = new char[strlen(title) + 1];


            strcpy(m_title, title);


        }


        else
        {



            m_title = nullptr;


      
        
        }


    }



    LibraryItem::LibraryItem(const LibraryItem& src) : m_title(nullptr) {


        *this = src;


    }

    LibraryItem& LibraryItem::operator=(const LibraryItem& src) {



        if (this != &src) {




            delete[] m_title;


            m_year = src.m_year;


            if (src.m_title) 
            
            {


                m_title = new char[strlen(src.m_title) + 1];

                strcpy(m_title, src.m_title);

            }

            else
            {

                m_title = nullptr;

            }
        }

        return *this;

    }


    LibraryItem::~LibraryItem() {

        delete[] m_title;

    }


    std::ostream& LibraryItem::display(std::ostream& ostr) const {

        ostr << "Title: " << (m_title ? m_title : "Unknown") << " (" << m_year << ")";

        return ostr;

    }


    std::ostream& operator<<(std::ostream& os, const LibraryItem& item) {

        return item.display(os);

    }

}
