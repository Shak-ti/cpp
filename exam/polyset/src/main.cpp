#include "../inc/polyset.hpp"

int main()
{
    searchableBag* sa1 = new searchableArrayBag();
    sa1->insert(1);
    sa1->insert(2);
    sa1->insert(2);
    sa1->print();
    std::cout << "Has 2? " << sa1->has(2) << "\n";

    searchableBag* st1 = new searchableTreeBag();
    st1->insert(10);
    st1->insert(5);
    st1->insert(10);
    st1->print();
    std::cout << "Has 5? " << st1->has(5) << "\n";

    set s1(sa1);
    s1.print();

    set s2(st1);
    s2.print();

    return 0;
}

