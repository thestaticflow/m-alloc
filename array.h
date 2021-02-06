include "structure.h" //for some libs already declared
int n = 5;
int* ptr;

void arr(void) 
(

int i;

ptr = (int*)calloc(n * sizeof(int)) /*basically size of int is 4 byte = 8 bit... but it depend with compiler some conpilers 2 byte for int some other compilers
2 byte for int.. most of the time is 4 byte so  n * sizeof(int) == 5 * 4 = 25 so we need 25 bytes in memory in case the memory's availabe we will get void pointer*/

for(i = 0; i < n; ++i){
             ptr[i] = i + 1;

}

for(i = 0; i < n; ++i){
            cout<<ptp[i]<<"\n";
}
)
