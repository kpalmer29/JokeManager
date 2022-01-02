//Author: Kavi Palmer
//Email: kavi.m.palmer@vanderbilt.edu
//Last Updated: 1/2/2022
//Category: jokeMgr uses two dynamic arrays to store and retrieve joke objects
//          and to keep track of the different categories

#include "jokeMgr.h"

//ctor
jokeMgr::jokeMgr() : maxSizeJoke(DEFAULT_SIZE_Joke), currSizeJoke(0), jokeArray(new joke[maxSizeJoke]),
                     maxSizeCat(DEFAULT_SIZE_CATEGORY), currSizeCat(0), categoryArray(new Category[maxSizeCat]){}

//alt ctor
jokeMgr::jokeMgr(size_t initSizeJoke, size_t initSizeCat) : maxSizeJoke(initSizeJoke), currSizeJoke(0),
                                                            jokeArray(new joke[maxSizeJoke]),
                                                            maxSizeCat(initSizeCat), currSizeCat(0),
                                                            categoryArray(new Category[maxSizeCat]){}

//copy ctor
jokeMgr::jokeMgr(const jokeMgr &rhs) : maxSizeJoke(rhs.maxSizeJoke), currSizeJoke(rhs.currSizeJoke),
                                       jokeArray(new joke[maxSizeJoke]),
                                       maxSizeCat(rhs.maxSizeCat), currSizeCat(rhs.currSizeCat),
                                       categoryArray(new Category[maxSizeCat]){
    for (size_t i = 0; i < maxSizeJoke; i++) {
        jokeArray[i] = rhs.jokeArray[i];
    }

    for (size_t i = 0; i < maxSizeCat; i++) {
        categoryArray[i] = rhs.categoryArray[i];
    }
}

//assignment operator
const jokeMgr& jokeMgr::operator=(const jokeMgr &rhs) {
    if (this == &rhs)
        return *this;

    jokeMgr temp(rhs);

    std::swap(maxSizeJoke, temp.maxSizeJoke);
    std::swap(currSizeJoke, temp.currSizeJoke);
    std::swap(jokeArray, temp.jokeArray);
    std::swap(maxSizeCat, temp.maxSizeCat);
    std::swap(currSizeCat, temp.currSizeCat);
    std::swap(categoryArray, temp.categoryArray);
    return *this;
}

//Destructor
jokeMgr::~jokeMgr() {
    delete []jokeArray;
    delete [] categoryArray;

    jokeArray = nullptr;
    categoryArray= nullptr;
}

//getNumJokes()
//returns the current number of jokes
size_t jokeMgr::getNumJokes() const {
    return currSizeJoke;
}

//getNumCategories()
//returns the number of joke categories
size_t jokeMgr::getNumCategories() const {
    return currSizeCat;
}

//getMaxJokeSize()
//return the current max size of the jokeArray
size_t jokeMgr::getMaxJokeSize() const {
    return maxSizeJoke;
}

//getMaxCatSize()
//return the current max size of the categoryArray
size_t jokeMgr::getMaxCatSize() const {
    return maxSizeCat;
}

//categoryObjectExists
//param: cat- category object
//return - true if cat exists in categoryArray, fasle otherwise
bool jokeMgr::categoryObjectExists(const Category &cat) {
    for (size_t i = 0; i < currSizeCat; i++) {
        if (categoryArray[i] == cat)
            return true;
    }

    return false;
}

//categoryExists
//param cat - category as string object
//return - true if a category object in categoryArray equals cat
//          false otherwise
bool jokeMgr::categoryExists(std::string &cat) {
    for (size_t i = 0; i < currSizeCat; i++) {
        if (categoryArray[i].getCat() == cat)
            return true;
    }

    return false;
}

//jokeExists()
//param jk - joke object
//return - true if jk exists in jokeArray, false otherwise
bool jokeMgr::jokeExists(const joke &jk) {
    for (size_t i = 0; i < currSizeJoke; i++) {
        if (jokeArray[i].getJoke() == jk.getJoke() && jokeArray[i].getCategory() == jk.getCategory())
            return true;
    }
    return false;
}

//addCategory()
//param cat - category object
//return - false if the category already exists in categoryArray
//          otherwise, adds cat to categoryArray and returns true
bool jokeMgr::addCategory(const Category &cat) {
    if (categoryObjectExists(cat))
        return false;
    else {
        if (currSizeCat == maxSizeCat)
            growCatArray(maxSizeCat * 2);

        categoryArray[currSizeCat] = cat;
        currSizeCat++;

        return true;
    }
}

//printCategory()
//param cat - string object of category to be printed
//return - string object containing all the joke's in jokeArray
//          which are of category cat. If cat does not exist in
//          categoryArray and exception is thrown
std::string jokeMgr::printCategory(std::string &cat) {
    if (categoryExists(cat)) {
        std::string temp;
        for (size_t i = 0; i < currSizeJoke; i++) {
            if (jokeArray[i].getCategory() == cat) {
                temp.append(jokeArray[i].getJoke() + "\n");
            }
        }

        return temp;
    }

    else {
        throw std::invalid_argument ("category does not exist");
    }
}

//growJokeArray()
//param newSize - size of new dynamic array
//'grows' size of dynamic array by creating a new array
//and reassigning jokeArray pointer
void jokeMgr::growJokeArray(size_t newSize) {
    if (newSize > maxSizeJoke) {
        joke* temp = new joke[newSize];

        for (size_t i = 0; i < currSizeJoke; i++) {
            temp[i] = jokeArray[i];
        }

        delete [] jokeArray;
        jokeArray = temp;
        maxSizeJoke = newSize;
    }
}

//growCatArray()
//param newSize - size of new dynamic array
//'grows' size of dynamic array by creating a new array
//and reassigning categoryArray pointer
void jokeMgr::growCatArray(size_t newSize) {
    if (newSize > maxSizeCat) {
        Category* temp = new Category[newSize];

        for (size_t i = 0; i < currSizeCat; i++) {
            temp[i] = categoryArray[i];
        }

        delete [] categoryArray;
        categoryArray = temp;
        maxSizeCat = newSize;
    }
}

//addJokeObject()
//param j - joke object
//adds para object to jokeArray. If the joke's category does not already
//exist in categoryArray, calls addCategory(). If the joke already exists in jokeArray
//an exception is thrown
void jokeMgr::addJokeObject(const joke &j) {
    if (jokeExists(j))
        throw std::invalid_argument("This joke already exists in the jokeMgr");
    else {
        if (currSizeJoke == maxSizeJoke)
            growJokeArray(maxSizeJoke * 2);

        jokeArray[currSizeJoke] = j;
        std::string cat = j.getCategory();

        if (!categoryExists(cat)) { //checks if cat of j exists in categoryArray
            Category temp;
            temp.setCat(cat);
            addCategory(temp);
        }
        currSizeJoke++;
    }
}

//addJoke()
//param j - string object containing text of a joke
//param cat - string object containing category of the joke
//this method creates a joke object and assigns paramaters appropriately to that
//object. It then calls the addJokeObject() method.
void jokeMgr::addJoke(std::string &j, std::string &cat) {
    joke newJoke;
    newJoke.setJoke(j);
    newJoke.setCategory(cat);
    addJokeObject(newJoke);
}

//getJokes()
//return - string object containing all jokes in jokeArray
std::string jokeMgr::getJokes() {
    std::string jokes;
    for (size_t i = 0; i < currSizeJoke; i++) {
        jokes.append(jokeArray[i].toString() + "\n");
    }
    return jokes;
}

//getCategories()
//return - string object containing all categories in categoryArray
std::string jokeMgr::getCategories() {
    std::string categories;
    for (size_t i = 0; i < currSizeCat; i++) {
        categories.append(categoryArray[i].toString() + "\n");
    }
    return categories;
}

//getRandomJoke()
//return - random joke object from jokeArray
joke jokeMgr::getRandomJoke() {
    srand (time(NULL));
    size_t num = rand() % currSizeJoke;
    return jokeArray[num];
}

//getRandomJokeInCat()
//return - random joke object from jokeArray who's category is cat.
//          If cat does not exist in categoryArray and exception is thrown
joke jokeMgr::getRandomJokeInCat(std::string &cat) {
    if (!categoryExists(cat))
        throw std::invalid_argument("category does not exist");
    else {

        srand (time(NULL)); //seeding
        bool flag = false;

        while (flag == false){
        size_t num = rand() % currSizeJoke;
        if (jokeArray[num].getCategory() == cat)
            return jokeArray[num];
    }
    }
}

//deleteJokes()
//cleans jokeMgr by setting size of jokeArray and categoryArray to 0
//and setting all private variables of objects contained by both arrays to
//empty strings
void jokeMgr::deleteJokes() {
    for (size_t i = 0; i < currSizeJoke; i++) {
        jokeArray[i].deleteJoke();
    }
    currSizeJoke = 0;

    for (size_t i = 0; i < currSizeCat; i++) {
        categoryArray[i].setCat("");
    }
    currSizeCat = 0;

    std::printf( "done");
}

//shiftJokeArray()
//param index - index of point to shift array from
//helper method for deleteJoke(). Shifts the entire array down
//starting from param index to help with deletion.
void jokeMgr::shiftJokeArray(size_t index) {
    for (size_t i = index + 1; i < currSizeJoke; i++) {
        jokeArray[i - 1] = jokeArray[i];
    }
}

//shiftCategoryArray()
//param index - index of point to shift array from
//helper method for deleteCategory(). Shifts the entire array down
//starting from param index to help with deletion.
void jokeMgr::shiftCategoryArray(size_t index) {
    for (size_t i = index + 1; i < currSizeCat; i++) {
        categoryArray[i - 1] = categoryArray[i];
    }
}

//deleteJoke()
//param j - joke object
//removes j from jokeArray and shifts the array from point of deletion.
//If no other jokes in jokeArray are of the same category, the category of the joke
//is removed from categoryArray. If the joke doesn't exist in jokeArray and exception
//is thrown
void jokeMgr::deleteJoke(const joke &j) {
    if (!jokeExists(j))
        throw std::invalid_argument("joke doesn't exist");

    std::string cat = j.getCategory();
    int catCounter = 0;

    for (size_t i = 0; i < currSizeJoke; i++){
        if (jokeArray[i].getCategory() == cat)//records number of jokes in jokeArray that
            catCounter++;                     //are of the same category as the object to be deleted

        if (jokeArray[i].equals(j)) {
            jokeArray[i].deleteJoke();
            shiftJokeArray(i);
            currSizeJoke--;
        }
    }

    if (catCounter == 1) { //deleted object is only joke in category
        Category temp(cat);
        deleteCategory(temp);
    }
}

//deleteCategory()
//param cat - Category object
//removes param Category object from category array. Throws an exception if the
//Category does not exist in categoryArray
void jokeMgr::deleteCategory(const Category &cat) {
    if (!categoryObjectExists(cat))
        throw std::invalid_argument("category doesn't exist");

    for (size_t i = 0; i < currSizeCat; i++) {
        if (categoryArray[i] == cat) {
            categoryArray[i].setCat("");
            shiftCategoryArray(i);
            currSizeCat--;
        }
    }
}