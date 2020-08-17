#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
using namespace std;

class Subject;
class Observer {
    public:
    virtual void update(Subject * subject)=0;
    bool operator==(const Observer & obs) const {
        return this == & obs;
    }
};

#endif /* observer_h */
