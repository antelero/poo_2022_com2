#ifndef FOLDER_H
#define FOLDER_H

#include "common.h"
#include <vector>

class Folder : public Common {
    std::vector<Common *> m_children;

    std::vector<Common *>::iterator find(Common const * child) {
        auto i = m_children.begin();
        for (   ;i != m_children.end() && **i != *child; ++i) {}
        return i;
    }

public:
    explicit Folder(std::string const & name)
    : Common(name){}
    virtual void open(){/*Whatever*/}
    virtual void draw() const {/*Whatever*/}
    void addChild(Common * child) {
        auto par = child->getParent();
        if (par && par != this) {
            par->removeChild(child);
        }
        if (find(child) == m_children.end()) {
            m_children.push_back(child);
            m_children.back()->setParent(this);
        }
    }
    void removeChild(Common const * child) {
        auto where = find(child);
        if (where != m_children.end()) {
            m_children.erase(where);
        }
    }
#if 1 // Testing
    void list() const {
        std::cout << name() << " {" << std::endl;
        for (Common const * child : m_children) {
            child->list();
        }
        std::cout << '}' << std::endl;
    }
#endif
};

#endif //EOF
