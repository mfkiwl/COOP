#ifndef __I_CACHE__H_
#define __I_CACHE__H_


//#ifndef __OBJECT__H_
#include "object.h"
//#endif





typedef struct block_s {
	char* buff;
	int size;
	struct block_s* next;
}Block;

DEF_CLASS(iCache)

END_DEF(iCache);

FUNCTIONS(iCache)
BASE_FUNCTION_PTR(iCache, AddNewBlock, int block_size, void** returned);
BASE_FUNCTION_PTR(iCache, RemoveBlock, void* toDelete);
BASE_FUNCTION_PTR(iCache, GetAmountAllocatedMemory);
END_FUNCTIONS(iCache);

BASE_FUNCTION_H(iCache, AddNewBlock, int block_size, void** returned);
BASE_FUNCTION_H(iCache, RemoveBlock, void* toDelete);

DEF_INIT_CLASS(iCache);

#endif