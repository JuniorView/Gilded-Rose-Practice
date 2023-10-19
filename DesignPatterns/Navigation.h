#ifndef NAVIGATION_H
#define NAVIGATION_H

class Navigation {
public:
    explicit Navigation();
    void init();

private:
    virtual void calculateRoute()=0;

    // The copy constructor and the copy assignment operator should be declared private
    // For simplicity of the exercise we ignore the rule of three
    //Navigation(const Navigation&);
    //Navigation& operator=(const Navigation&);
};

#endif //NAVIGATION_H
