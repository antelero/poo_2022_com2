#ifndef COMMON_H
#define COMMON_H

#include <string>

#include <iostream>

class Folder;

class Common {
    std::string m_name;
    Folder* m_parent;

public:
    explicit Common(std::string const & name)
    : m_name(name),m_parent(nullptr){}
    virtual ~Common(){};
    virtual void open() { /*Whatever*/}
    virtual void draw() const {/*Whatever*/}
    virtual Folder* getParent() const { return m_parent; };
    virtual void setParent(Folder* parent);
    bool operator==(Common const & other) const {
        return m_name == other.m_name;
    }
    bool operator!=(Common const & other) const {
        return !(*this  == other);
    }
#if 1 // Testing
    std::string const & name() const {
        return m_name;
    }
    std::string parent() const;

    virtual void list() const {
        std::cout << name() << " (in " << parent() << ')' << std::endl ;
    }
#endif
};

#endif // EOF
