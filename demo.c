#include "base64.h"
#include <stdio.h>
#include <string.h>
void encode_demo();
void decode_demo();

int main(){
    encode_demo();
    printf("\n\n\n");
    decode_demo();
    return 0;

}


void encode_demo(){
    char src[] = "hello world";
    int src_len = strlen(src);

    int dst_size = 20;
    char dst[dst_size];
    int dst_len = base64_encode_str(src,src_len,dst,dst_size);
    if(dst_len==-1){
        printf("encoding error!!!\n");
         return;
    }

    printf("********************* encode start *********************\n");
    printf("src:%s\n",src);
    printf("src len:%d\n\n",src_len);
    printf("dst:%s\n",dst);
    printf("dst len:%d\n\n",dst_len);
    printf("********************* encode end  *********************\n");

}

void decode_demo(){
    char src[] = "aGVsbG8gd29ybGQ=";
    int src_len = strlen(src);
    int dst_size = 20;
    char dst[dst_size];
    int dst_len = base64_decode_str(src,src_len,dst,dst_size);
    if(dst_len==-1){
        printf("decoding error!!!\n");
         return;
    }else if(dst_len==-2){
         printf("src is invaild,please check it\n");
         return;
    }
    printf("********************* decode start *********************\n");
    printf("src:%s\n",src);
    printf("src len:%d\n\n",src_len);
    printf("dst:%s\n",dst);
    printf("dst len:%d\n\n",dst_len);
    printf("********************* decode end  *********************\n");

}