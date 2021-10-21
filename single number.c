#include <stdio.h>
int main(){
  int nums[9]={20,5,10,20,3,7,5,7,3};
  int ans = 0;
  for(int i = 0 ; i < 9;++i){
      ans ^= nums[i];
  }
        
   printf("The only single number is: %d",ans);
   return 0;
}
