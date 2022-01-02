//Author: Kavi Palmer
//Email: kavi.m.palmer@vanderbilt.edu
//Last Updated: 1/1/2022
//Category: Creates a category object which are contained in an array used by jokeMgr
//          to keep track of the different joke categories which exist

#ifndef UNTITLED_CATEGORY_H
#define UNTITLED_CATEGORY_H

#include <string>



class Category {
private:

    std::string cat;

public:

    Category();

    Category(std::string &setCt);

    bool checkCategory(std::string &newCat); //checks if category already exists

   std::string getCat();

   void setCat(const std::string &newCat);

   virtual std::string toString();

   virtual bool equals(const Category& rhs) const;

   bool operator==(const Category &rhs) const;



};


#endif //UNTITLED_CATEGORY_H
