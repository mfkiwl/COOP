#include "ClassUnitTest.h"
#include "BaseClassExample.h"

IMPL_FUN(Class_CallSimpleFunction_SanityTest)
{
	// Arrange
	SCOPE_START;
	
	CREATE_OBJECT(BaseClassExample, B), 10, 3);
	
	// Act
	int retVal = 0;
	FUN(GetVolume, &B), &retVal CALL
	
	// Assert
	ASSERT(retVal == 10 * 3);

	SCOPE_END;
}END_FUN