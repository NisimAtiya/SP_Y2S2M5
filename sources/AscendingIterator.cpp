#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container)
:container(container),index(0)
{}
//Default complete constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container,size_t index)
        :container(container),index(index)
{}
//Copy constructor
MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer::AscendingIterator &other)
:container(other.container), index(other.index)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const {
    return MagicalContainer::AscendingIterator(*this);
}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const {
    return MagicalContainer::AscendingIterator(this->container, this->container.size());
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &other) {
    return *this;
}

bool MagicalContainer::AscendingIterator::operator==(const MagicalContainer::AscendingIterator &other) const {
    return false;
}

bool MagicalContainer::AscendingIterator::operator!=(const MagicalContainer::AscendingIterator &other) const {
    return false;
}

bool MagicalContainer::AscendingIterator::operator<(const MagicalContainer::AscendingIterator &other) const {
    return false;
}

bool MagicalContainer::AscendingIterator::operator>(const MagicalContainer::AscendingIterator &other) const {
    return false;
}

int MagicalContainer::AscendingIterator::operator*() {
    return 0;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++() {
    return *this;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(MagicalContainer::AscendingIterator &&other) {
    return *this;
}
