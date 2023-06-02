#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container)
        :Mcontainer(container),index(0)
{}
//Default complete constructor
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container,size_t index)
        :Mcontainer(container),index(index)
{}
//Copy constructor
MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer::PrimeIterator &other)
        :Mcontainer(other.Mcontainer), index(other.index)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const {
    return MagicalContainer::PrimeIterator(*this);
}
MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const {
    return MagicalContainer::PrimeIterator(this->Mcontainer, this->Mcontainer.size());
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const MagicalContainer::PrimeIterator &other) {
    if (this != &other)
    {
        if (&Mcontainer != &other.Mcontainer)
        {
            throw std::runtime_error("Cannot assign iterators from different containers");
        }

        index = other.index;
    }

    return *this;
}

bool MagicalContainer::PrimeIterator::operator==(const MagicalContainer::PrimeIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index == other.index;
}

bool MagicalContainer::PrimeIterator::operator!=(const MagicalContainer::PrimeIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index != other.index;
}

bool MagicalContainer::PrimeIterator::operator<(const MagicalContainer::PrimeIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index < other.index;
}

bool MagicalContainer::PrimeIterator::operator>(const MagicalContainer::PrimeIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index > other.index;
}

int MagicalContainer::PrimeIterator::operator*() {
    if (index > Mcontainer.Prime_container.size())
    {
        throw std::out_of_range("Iterator out of range");
    }

    return *(Mcontainer.Prime_container.at(index));
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() {
    if (index >= Mcontainer.Prime_container.size())
    {
        throw std::runtime_error("Iterator out of range");
    }

    ++index;
    return *this;
}

MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(MagicalContainer::PrimeIterator&& other) noexcept {
    if (this != &other) {
        Mcontainer = other.Mcontainer;
        index = other.index;
    }
    return *this;
}
