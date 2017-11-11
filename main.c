#include <stdio.h>
#ifdef _OPENMP
# include <omp.h> // illustrates how to safely include
#endif

int main()
{
    // Illustrates how the pre-processor directives work
#ifdef _OPENMP
    printf("The value of the _OPENMP macro: %i\n", _OPENMP);
#else
    printf("_OPENMP is not defined");
#endif
    return 0;
}