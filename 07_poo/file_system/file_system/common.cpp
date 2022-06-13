#include "common.h"
#include "folder.h"

void Common::setParent(Folder* parent) {
    auto par = getParent();
    if (par && par != parent) {
        par->removeChild(this);
    }
    m_parent = parent;
    m_parent->addChild(this);
}

#if 1 // Testing
std::string Common::parent() const {
    return m_parent ? m_parent->name() : "<null>";
}
#endif
