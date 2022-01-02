**JOKEMANAGER**

This program uses dynamic arrays to manage, cateogrize, and store jokes.

**JOKE**

joke.h & joke.cpp

Joke object. Each joke contains the text of the actual joke, as well as category. Each joke object also contains a series of public functions which can be used by joke manager to edit the object.

**CATEGORY**

category.h & category.cpp

An object whose only private variable is a string representing a joke object.

**JOKEMGR**

The joke manager creates two dynamic arrays, one to keep track of joke objects added and removed from the manager, aother to keep track of the different categories represented by the jokes. 

jokeMgr has functionality including but not limited to adding/removing jokes, retreiving a random joke, retreiving all jokes, retreiving all jokes from a certain category, growing the size of a dynamic array, and more. 
