#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container)
        :container(container),index(0)
{}
//Default complete constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container,size_t index)
        :container(container),index(index)
{}
//Copy constructor
MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer::PrimeIterator &other)
        :container(other.container), index(other.index)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const {
    return MagicalContainer::PrimeIterator(*this);
}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const {
    return MagicalContainer::PrimeIterator(this->container, this->container.size());
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const MagicalContainer::PrimeIterator &other) {
    return *this;
}

bool MagicalContainer::PrimeIterator::operator==(const MagicalContainer::PrimeIterator &other) const {
    return false;
}

bool MagicalContainer::PrimeIterator::operator!=(const MagicalContainer::PrimeIterator &other) const {
    return false;
}

bool MagicalContainer::PrimeIterator::operator<(const MagicalContainer::PrimeIterator &other) const {
    return false;
}

bool MagicalContainer::PrimeIterator::operator>(const MagicalContainer::PrimeIterator &other) const {
    return false;
}

int MagicalContainer::PrimeIterator::operator*() {
    return 0;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() {
    return *this;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(MagicalContainer::PrimeIterator &&other)noexcept {
    return *this;
}
