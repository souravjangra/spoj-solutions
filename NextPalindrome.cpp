#include<stdio.h>
#include<string.h>

int main(){

				int t;
				scanf("%d",&t);
				char str[1000001];
				while(t--){
								scanf("%s",str);
								int len = strlen(str);
								int flag = 0;
								for(int i=0;i<len;i++){
												if(str[i] != '9'){
																flag = 1;
																break;
												}			
								}

								if(flag == 0){
												printf("1");
												for(int i=0;i<len-1;i++)
																printf("0");
												printf("1");
												printf("\n");
								}
								else{
												int flag = 0,mid;
												if(len%2 == 0)
																mid = len/2 -1;
												else
																mid = len/2;
												for(int i=0;i<len/2;i++){
																if(str[i] > str[len-i-1])
																				flag = 2;
																else if(str[i] < str[len-i-1])
																				flag = 1;
																str[len-i-1] = str[i];
												}
												if(flag == 1 || flag == 0){
																int i = 0;
																while(str[mid-i] == '9'){
																				str[mid-i] = '0';
																				str[len-1-mid+i] = '0';
																				i++;
																}
																str[mid-i]++;
																str[len-1-mid+i] = str[mid-i];
												}
												printf("%s\n",str);

								}
				}

}

