//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 6, Project 8
//  2/10/2016
//  giftlist class
//  has list of person where each person has list of gift ideas

#include <cstdlib>  // Provides size_t
#include <vector>
class person{
public:
    std::string name;
    std::vector<std::string> ideas;
    person(std::string name, std::string wish) {
        this->name = name;
        ideas.push_back(wish);
    }
};

class GiftList {
public:
    std::vector<person> list;
    void add(std::string name, std::string wish);
    void remove(std::string name);
    void print();
};
