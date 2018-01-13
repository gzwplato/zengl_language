/*
   Copyright 2017 zenglong (made in china)

   For more information, please see www.zengl.com

   This file is part of zengl language.

   zengl language is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   zengl language is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with zengl language,the copy is in the file licence.txt.  If not,
   see <http://www.gnu.org/licenses/>.
*/

#ifndef _ZENGL_GLOBAL_HEADER_H_
#define _ZENGL_GLOBAL_HEADER_H_

#ifdef ZL_EXP_OS_IN_ZENGLOX
	#include <stdlib.h>
	#include "setjmp.h"
	#include "zengl_locals.h"
	#include "zengl_exportfuns.h"
#else
	#include <stdio.h>
	#include <stdlib.h>
	#include <memory.h>
	#include <stdarg.h>
	#include <ctype.h>
	#include <string.h>
	#include <time.h>
	#include "setjmp.h"
	#include "zengl_locals.h"
	#include "zengl_exportfuns.h"
#endif

/*һЩ�궨��*/
#define ZL_VM_SIGNER 0x4D564C5A //�ж�������ṹ���Ƿ�����Ч�ṹ���signer��־����ZLVM�ĸ�Ӣ����ĸ��ASCII�룬�ɵ��ֽ�����ֽ�����
#define ZL_FALSE 0 //�߼���
#define ZL_TRUE 1 //�߼���
#define ZL_FILE_BUF_SIZE 1024 //��ȡ�ļ��Ļ����С
#define ZL_FILE_MAX_PATH 350 //���·��ֵ
#define ZL_FILE_EOF EOF //�ж��Ƿ�����ļ���β
#define ZL_SYM_HASH_SIZE 211 //����hash������Ĵ�С
#define ZL_SYM_HASH_TOTAL_SIZE 1477 //HASH����ܴ�С�� Ŀǰ��7����̬���飬ÿ����̬����ʹ�ù�ϣ���211�����һ��1477��
#define ZL_SYM_HASH_SHIFT 4  //������תΪ����hash������ʱ�ļ�������
#define ZL_RC4_STATE_SIZE 256 //RC4��������state״̬�������Ԫ�ظ���
#define ZL_STRNULL '\0' //�ַ��������ַ�
#define ZL_NULL 0 //ָ��Ϊ0�ĺ궨��
#define ZL_VOID void //�����Զ���ĺ�������void , char֮���C��׼���ͣ������Ժ��ͳһ�������⼸�����ͺ�Ҳ������typedef������
#ifdef ZL_EXP_OS_IN_ARM_GCC
	#define ZL_CHAR signed char //ʹ��signed��ʾ�з��ŵ���˼����ΪARM GCC��charĬ����unsigned��(Ƕ��ʽ����������ܶ����⣡)�������б�Ҫ������ָ����signed
#else
	#define ZL_CHAR char
#endif
#define ZL_UCHAR unsigned char
#define ZL_BYTE unsigned char
#define ZL_INT int
#define ZL_LONG long
#define ZL_WCHAR_T wchar_t
#define ZL_FLOAT float
#define ZL_DOUBLE double
#define ZL_CONST const
#define ZL_EXTERN extern
typedef unsigned char ZL_BOOL; //����bool����
typedef size_t ZL_SIZE_T;
typedef unsigned int ZL_UINT;
typedef clock_t ZL_CLOCK_T;
#define ZL_TOKENSTR_SIZE 40 //compile�е�tokenInfo��str��ʼ���Ͷ�̬���ݵĴ�С
#define ZL_MEM_POOL_SIZE 40 //�ڴ�س�ʼ���Ͷ�̬���ݵĴ�С
#define ZL_DEF_STR_POOL_SIZE 1024 //�������Ӧ���ַ����س�ʼ���Ͷ�̬���ݵĴ�С
#define ZL_DEF_TABLE_SIZE 20 //def����ĳ������Ӧ��̬�����ʼ���Ͷ�̬���ݵĴ�С
#define ZL_LINECOL_SIZE 211 //compile�е�LineCols���кŶ�̬�����ʼ���Ͷ�̬���ݵĴ�С
#define ZL_FILE_STACK_SIZE 10 //����inc�����ļ��Ķ�ջ�ĳ�ʼ�������ݵĴ�С��
#define ZL_INFO_STRING_SIZE 1024 //������Ϣ�ַ����ĳ�ʼ���Ͷ�̬���ݵĴ�С��
#define ZENGL_SYS_PRINTF printf //��ӡ���ĺ궨�壬����ʹ��printf��Ҳ�������Զ���ĺ����������������־�ļ��ĺ����ȡ�
#define ZENGL_SYS_VPRINTF vprintf //����ͨ��������arglist����ӡ��ѡ�����б�ĺ���
#define ZENGL_SYS_FILE_OPEN fopen //���ļ�����
#define ZENGL_SYS_FILE_GETS fgets //��ȡ�ļ����ݵ������еĺ���
#define ZENGL_SYS_FILE_READ fread //��ȡ�ļ����ݵ������У���Ҫ���ڶ�ȡ�������ļ�
#define ZENGL_SYS_FILE_EOF feof //��ȡ�ļ����ݵ������еĺ���
#define ZENGL_SYS_FILE_CLOSE fclose //�ر��ļ����
#define ZENGL_SYS_MEM_ALLOC malloc //�ڴ���亯��
#define ZENGL_SYS_MEM_RE_ALLOC realloc //�ڴ����µ�����С�ĺ���
#define ZENGL_SYS_MEM_SET memset //���������ڴ��е�ֵ
#define ZENGL_SYS_MEM_COPY memcpy //�����ڴ濽������
#define ZENGL_SYS_MEM_FREE free //�ͷ��ڴ���Դ
#define ZENGL_SYS_CTYPE_IS_ALPHA isalpha //ctype.h�������ı�׼�⺯�����ж��ַ��Ƿ�ΪӢ����ĸ
#define ZENGL_SYS_CTYPE_IS_DIGIT isdigit //ctype.h�������ı�׼�⺯�����ж��ַ��Ƿ�Ϊ����
#define ZENGL_SYS_CTYPE_IS_HEXDIGIT isxdigit //ctype.h�������ı�׼�⺯�����ж��ַ��Ƿ�Ϊʮ��������
#define ZENGL_SYS_CTYPE_IS_ALNUM isalnum //ctype.h�������ı�׼�⺯�����ж��ַ��Ƿ�Ϊ��ĸ������
#define ZENGL_SYS_SPRINTF sprintf //���ַ�����ʽ�������������
#ifdef ZL_LANG_IN_VC6
	#define ZENGL_SYS_SPRINTF_ARG_NUM _vsnprintf //ʹ��va_list���������ַ����ĸ�ʽ���������������VC6�������µ�vsnprintf��Ҫ��ǰ����»��ߣ�
#else
	#define ZENGL_SYS_SPRINTF_ARG_NUM vsnprintf //ʹ��va_list���������ַ����ĸ�ʽ���������
#endif
#define ZENGL_SYS_STRLEN strlen //�õ��ַ���������Ϣ
#define ZENGL_SYS_STRCMP strcmp //�ַ����ȽϺ���
#define ZENGL_SYS_STRNCMP strncmp //�ַ����ȽϺ���
#define ZENGL_SYS_STRNCPY strncpy //�ַ�����������
#define ZENGL_SYS_STRCHR strchr //���ַ����в���ĳ�ַ�
#define ZENGL_SYS_STR_TO_NUM atoi //���ַ���תΪ����
#define ZENGL_SYS_STR_TO_LONG_NUM atol //���ַ���תΪ������
#define ZENGL_SYS_STR_TO_FLOAT atof //���ַ���תΪ������
#define ZENGL_SYS_TIME_CLOCK clock //��ȡCPUִ�е�tick�δ�ֵ������ͳ��ִ��ʱ��
#define ZENGL_SYS_JMP_LONGJMP_TO longjmp //����ת�����ڳ���ʱ��ת
#define ZENGL_SYS_JMP_SETJMP setjmp //���ó���ת�ĵ�ַ
#define ZENGL_SYS_ARG_LIST va_list //�ɱ�����б�
#define ZENGL_SYS_ARG_START va_start //�ɱ������ʼ��ַ
#define ZENGL_SYS_ARG_GET  va_arg  //��ȡ�ɱ����ֵ
#define ZENGL_SYS_ARG_END va_end //�����ɱ�����б���
#ifndef va_copy
	#define va_copy(dst, src)   memcpy(&(dst), &(src), sizeof(va_list))
#endif
#define ZENGL_SYS_ARG_COPY va_copy // �����ɱ�����б���Ҫ����64λϵͳ�е�GCC��clang
/*�궨�����*/

#endif/* _ZENGL_GLOBAL_HEADER_H_ */
