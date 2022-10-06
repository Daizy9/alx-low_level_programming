#include "main.h"
#include <stdlib.h>

#include <string.h>
/**
 * *_realloc - reallocate memory size function
 * * @ptr: pointer to address of old memory location
 * * @old_size: unsigned int type of old memory size
 * * @new_size: unsigned int type for new memory size
 * * Return:  return pointer to array
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = mem;
	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;
	free(ptr);
	return (mem);
}
