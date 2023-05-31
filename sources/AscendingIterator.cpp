#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container)
:container(container),size(0)
{}
//Default complete constructor
MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container,size_t size)
        :container(container),size(size)
{}
//Copy constructor
MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer::AscendingIterator &other)
:container(other.container), size(other.size)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const {
    return MagicalContainer::AscendingIterator(*this);
}
MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const {
    return MagicalContainer::AscendingIterator(this->container, this->size);
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::AscendingIterator &
MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &other) {
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
