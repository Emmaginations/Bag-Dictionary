#include <stdlib.h>
#include "bagADT.h"
#include "kvpair.h"

using namespace std;

template <class E>
class ABag : public Bag<E>
{
public:
	
	bool addItem(const E& item);
	bool remove(E& item);
	bool removeTop(E& returnValue);
	bool search(E& returnValue) const;
	bool inspectTop(E& item) const;
	void emptyBag();
	
	bool operator+=(const E& addend);
	int numItems() const;
	int bagCapacity() const;

private:
	E contents[10];
	int bagSize;
};

template <class E>
bool ABag<E>::addItem(const E& item)
{
	cout << "Item added";
}

template <class E>
bool ABag<E>::remove(E& item)
{

} //End remove()

template <class E>
bool ABag<E>::removeTop(E& returnValue)
{

} //End removeTop()

template <class E>
bool ABag<E>::search(E& returnValue) const
{

} //End search()

template <class E>
bool ABag<E>::inspectTop(E& item) const
{

} //End inspectTop()

template <class E>
void ABag<E>::emptyBag()
{

} //End emptyBag()

template <class E>
bool ABag<E>::operator+=(const E& addend)
{

} //End += operator overload

template <class E>
int ABag<E>::numItems() const
{

} //End numItems()

template <class E>
int ABag<E>::bagCapacity() const
{

} //End bagCapacity()




