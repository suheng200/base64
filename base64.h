/**
 * @file base64.h
 * 
 * @author suheng (suheng200@outlook.com)
 * @brief base64 implemented in C language
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef SUHENG_BASE64_H
#define SUHENG_BASE64_H

/**
 * @brief The string is encoded using base64
 * 
 * @param[in]  src        the string needs to be encoded
 * @param[in]  src_len    string length
 * @param[out] dst        save the encode result,you need to alloc the space yourself,the memory space needs to be large enough to save the result
 * @param[in]  dst_size   size of dst,  dst_size > (1.34 * srclen) is a must
 * @retval     -1   dst can't store the result
 *          
 */
int base64_encode_str(const char *src, const int src_len, char *dst, int dst_size);


/**
 * @brief The string is decode using base64
 * 
 * @param[in]  src        the string needs to be decoded
 * @param[in]  src_len    string length
 * @param[out] dst        save the encode result,you need to alloc the space yourself,the memory space needs to be large enough to save the result
 * @param[in]  dst_size   size of dst, dst_size > (0.75 * srclen) is a must
 * @retval     -1   dst can't store the result
 * @retval     -2   src is invalid
 * @retval     >=0  dst length
 */
int base64_decode_str(const char *src, const int src_len, char *dst, int dst_size);



static const char *ENCODE_TABLE = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
static const int DECODE_TABLE[128] = {    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                    0, 0, 0, 62, 0, 0, 0, 63, 52, 53, 
                                    54,55, 56, 57, 58, 59, 60, 61, 0, 0,
                                    0, 0, 0, 0, 0, 0, 1, 2, 3, 4,
                                    5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 
                                    15,16, 17, 18, 19, 20, 21, 22, 23, 24,
                                    25, 0, 0, 0, 0, 0, 0, 26, 27, 28,
                                    29,30, 31, 32, 33, 34, 35, 36, 37, 38,
                                    39, 40, 41, 42, 43, 44, 45, 46, 47, 48,
                                    +
                                    49, 50, 51, 0, 0, 0, 0, 0};
#endif //SUHENG_BASE64_H


