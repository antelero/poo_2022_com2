#include "common.h"
#include "folder.h"
#include "file.h"

int main()
{
    Folder *fo0 = new Folder("folder0");
    File * fi0 = new File("file0");
    File * fi1 = new File("file1");
    fo0->addChild(fi0);
    fi1->setParent(fo0);
    fo0->addChild(fi0);  // Duplicate
    fi1->setParent(fo0); // Duplicate
    // There are now 2 files in folder fo0
    fo0->list();
    Folder *fo1 = new Folder("folder1");
    fo1->addChild(fi1);
    fi0->setParent(fo1);
    fo1->addChild(fi1); // Duplicate
    fi0->setParent(fo1); // Duplicate
    // There are now 0 files in folder fo0
    // There are now 2 files in folder fo1
    fo0->list();
    fo1->list();
    delete fo0;
    delete fo1;
    delete fi0;
    delete fi1;
    return 0;
}
