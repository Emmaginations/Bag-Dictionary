#pragma once

#include "dictionaryADT.h"
#include <stdlib.h>
#include "kvpair.h"
#include "ABag.h"

template <class Key, class E>
class ADictionary : public Dictionary<Key, E>
{
private:
	myBag<KVpair> theBag;
	int dictionarySize;
};
