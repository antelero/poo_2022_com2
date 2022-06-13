#ifndef FILE_H
#define FILE_H

#include "common.h"

class File : public Common {
    // Whatever
public:
    explicit File(std::string const & name)
    : Common(name){}
    virtual void open(){/*Whatever*/};

};

#endif // EOF
