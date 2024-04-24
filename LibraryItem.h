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

#ifndef LIBRARYITEM_H


#define LIBRARYITEM_H


#include <iostream>


namespace seneca {


    class LibraryItem {


    protected:


        char* m_title;


        int m_year;



    public:


        LibraryItem();


        LibraryItem(const char* title, int year);


        LibraryItem(const LibraryItem& src);


        LibraryItem& operator=(const LibraryItem& src);


        virtual ~LibraryItem();



        virtual std::ostream& display(std::ostream& ostr = std::cout) const;


        friend std::ostream& operator<<(std::ostream& os, const LibraryItem& item);


    };


}


#endif


#pragma once
