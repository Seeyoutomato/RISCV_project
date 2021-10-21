#include <stdio.h>
int main(){
  int nums[9]={20,5,10,5,20,5,3,7,7,3};
  int ans = 0;
  for(int i = 0 ; i < 9;++i){
      ans ^= nums[i];
  }
        
   printf("The only single number is: %d",ans);
}
