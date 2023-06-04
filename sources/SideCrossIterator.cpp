#include "MagicalContainer.hpp"
//Default constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container)
        :Mcontainer(container),index(0)
{}
//Default complete constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container,size_t index)
        :Mcontainer(container),index(index)
{}
//Copy constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer::SideCrossIterator &other)
        :Mcontainer(other.Mcontainer), index(other.index)
{}
//----------------------------------------------------------------------------------------------------------------------
//Functions begin and end
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const {
    return MagicalContainer::SideCrossIterator(this->Mcontainer,0);
}
MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const {
    return MagicalContainer::SideCrossIterator(this->Mcontainer, this->Mcontainer.Sidecross_container.size());
}
//----------------------------------------------------------------------------------------------------------------------


MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const MagicalContainer::SideCrossIterator &other) {
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

bool MagicalContainer::SideCrossIterator::operator==(const MagicalContainer::SideCrossIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index == other.index;
}

bool MagicalContainer::SideCrossIterator::operator!=(const MagicalContainer::SideCrossIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index != other.index;
}

bool MagicalContainer::SideCrossIterator::operator<(const MagicalContainer::SideCrossIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index < other.index;
}

bool MagicalContainer::SideCrossIterator::operator>(const MagicalContainer::SideCrossIterator &other) const {
    if (&Mcontainer != &other.Mcontainer)
    {
        throw std::runtime_error("Cannot compare iterators from different containers");
    }

    return index > other.index;
}

int MagicalContainer::SideCrossIterator::operator*() {
    if (index >= Mcontainer.Sidecross_container.size())
    {
        throw std::out_of_range("Iterator out of range");
    }

    return *(Mcontainer.Sidecross_container.at(index));
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++() {
    if (index >= Mcontainer.Sidecross_container.size())
    {
        throw std::runtime_error("Iterator out of range");
    }

    ++index;
    return *this;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(MagicalContainer::SideCrossIterator &&other)noexcept {
    if (this != &other) {
        Mcontainer = other.Mcontainer;
        index = other.index;
    }
    return *this;
}