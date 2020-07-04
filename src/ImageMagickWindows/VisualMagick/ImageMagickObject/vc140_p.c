

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Jul 04 13:29:48 2020
 */
/* Compiler settings for vc140.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "vc140.h"

#define TYPE_FORMAT_STRING_SIZE   1091                              
#define PROC_FORMAT_STRING_SIZE   631                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _vc140_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } vc140_MIDL_TYPE_FORMAT_STRING;

typedef struct _vc140_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } vc140_MIDL_PROC_FORMAT_STRING;

typedef struct _vc140_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } vc140_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const vc140_MIDL_TYPE_FORMAT_STRING vc140__MIDL_TypeFormatString;
extern const vc140_MIDL_PROC_FORMAT_STRING vc140__MIDL_ProcFormatString;
extern const vc140_MIDL_EXPR_FORMAT_STRING vc140__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMagickImage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMagickImage_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const vc140_MIDL_PROC_FORMAT_STRING vc140__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure OnStartPage */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter piUnk */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEndPage */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x9 ),	/* 9 */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x24 ),	/* 36 */
/* 80 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 82 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 90 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 98 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0xa ),	/* 10 */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 118 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 126 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 130 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 132 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 136 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Remove */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xb ),	/* 11 */
/* 152 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varIndex */

/* 168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Compare */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xc ),	/* 12 */
/* 188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 196 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 204 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 210 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Composite */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0xd ),	/* 13 */
/* 230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 238 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 246 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 250 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 252 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 256 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Convert */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0xe ),	/* 14 */
/* 272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 280 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 288 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 294 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Identify */

/* 306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0xf ),	/* 15 */
/* 314 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 320 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 322 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 330 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 336 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 340 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Mogrify */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 364 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 366 */	NdrFcShort( 0x1 ),	/* 1 */
/* 368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 372 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 378 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 382 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Montage */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x11 ),	/* 17 */
/* 398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 406 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 414 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 418 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 420 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 424 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stream */

/* 432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x12 ),	/* 18 */
/* 440 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 446 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 448 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 456 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 460 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 462 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 466 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TestHarness */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x13 ),	/* 19 */
/* 482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 488 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 490 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pArrayVar */

/* 498 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 502 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Parameter pVar */

/* 504 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 508 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x14 ),	/* 20 */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 532 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 540 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 544 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x15 ),	/* 21 */
/* 560 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 566 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 568 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 570 */	NdrFcShort( 0x1 ),	/* 1 */
/* 572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varIndex */

/* 576 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 580 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter pVal */

/* 582 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 586 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Messages */

/* 594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x16 ),	/* 22 */
/* 602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 608 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 610 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 618 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 622 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const vc140_MIDL_TYPE_FORMAT_STRING vc140__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 20 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 22 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	NdrFcShort( 0x3fa ),	/* Offset= 1018 (1044) */
/* 28 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 30 */	NdrFcShort( 0x2 ),	/* Offset= 2 (32) */
/* 32 */	
			0x13, 0x0,	/* FC_OP */
/* 34 */	NdrFcShort( 0x3e0 ),	/* Offset= 992 (1026) */
/* 36 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 38 */	NdrFcShort( 0x18 ),	/* 24 */
/* 40 */	NdrFcShort( 0xa ),	/* 10 */
/* 42 */	NdrFcLong( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x70 ),	/* Offset= 112 (158) */
/* 48 */	NdrFcLong( 0xd ),	/* 13 */
/* 52 */	NdrFcShort( 0x94 ),	/* Offset= 148 (200) */
/* 54 */	NdrFcLong( 0x9 ),	/* 9 */
/* 58 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (256) */
/* 60 */	NdrFcLong( 0xc ),	/* 12 */
/* 64 */	NdrFcShort( 0x2c4 ),	/* Offset= 708 (772) */
/* 66 */	NdrFcLong( 0x24 ),	/* 36 */
/* 70 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (820) */
/* 72 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 76 */	NdrFcShort( 0x30a ),	/* Offset= 778 (854) */
/* 78 */	NdrFcLong( 0x10 ),	/* 16 */
/* 82 */	NdrFcShort( 0x324 ),	/* Offset= 804 (886) */
/* 84 */	NdrFcLong( 0x2 ),	/* 2 */
/* 88 */	NdrFcShort( 0x33e ),	/* Offset= 830 (918) */
/* 90 */	NdrFcLong( 0x3 ),	/* 3 */
/* 94 */	NdrFcShort( 0x358 ),	/* Offset= 856 (950) */
/* 96 */	NdrFcLong( 0x14 ),	/* 20 */
/* 100 */	NdrFcShort( 0x372 ),	/* Offset= 882 (982) */
/* 102 */	NdrFcShort( 0xffff ),	/* Offset= -1 (101) */
/* 104 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 108 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 110 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 112 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 114 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 116 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (104) */
/* 122 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 124 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 126 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 130 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 136 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 140 */	NdrFcShort( 0x4 ),	/* 4 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	0x13, 0x0,	/* FC_OP */
/* 152 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (116) */
/* 154 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 156 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 158 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 162 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 164 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 170 */	0x11, 0x0,	/* FC_RP */
/* 172 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (126) */
/* 174 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 176 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 178 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 188 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 192 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 194 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 196 */	NdrFcShort( 0xff3e ),	/* Offset= -194 (2) */
/* 198 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 200 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x6 ),	/* Offset= 6 (212) */
/* 208 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 210 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 212 */	
			0x11, 0x0,	/* FC_RP */
/* 214 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (178) */
/* 216 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 218 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 228 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 230 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 232 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 234 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 244 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 248 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 250 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 252 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (216) */
/* 254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 256 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x6 ),	/* Offset= 6 (268) */
/* 264 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 266 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 268 */	
			0x11, 0x0,	/* FC_RP */
/* 270 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (234) */
/* 272 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 274 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 276 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 278 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 280 */	NdrFcShort( 0x2 ),	/* Offset= 2 (282) */
/* 282 */	NdrFcShort( 0x10 ),	/* 16 */
/* 284 */	NdrFcShort( 0x2f ),	/* 47 */
/* 286 */	NdrFcLong( 0x14 ),	/* 20 */
/* 290 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 292 */	NdrFcLong( 0x3 ),	/* 3 */
/* 296 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 298 */	NdrFcLong( 0x11 ),	/* 17 */
/* 302 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 304 */	NdrFcLong( 0x2 ),	/* 2 */
/* 308 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 310 */	NdrFcLong( 0x4 ),	/* 4 */
/* 314 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 316 */	NdrFcLong( 0x5 ),	/* 5 */
/* 320 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 322 */	NdrFcLong( 0xb ),	/* 11 */
/* 326 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 328 */	NdrFcLong( 0xa ),	/* 10 */
/* 332 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 334 */	NdrFcLong( 0x6 ),	/* 6 */
/* 338 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (570) */
/* 340 */	NdrFcLong( 0x7 ),	/* 7 */
/* 344 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 346 */	NdrFcLong( 0x8 ),	/* 8 */
/* 350 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (576) */
/* 352 */	NdrFcLong( 0xd ),	/* 13 */
/* 356 */	NdrFcShort( 0xfe9e ),	/* Offset= -354 (2) */
/* 358 */	NdrFcLong( 0x9 ),	/* 9 */
/* 362 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (216) */
/* 364 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 368 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (580) */
/* 370 */	NdrFcLong( 0x24 ),	/* 36 */
/* 374 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (588) */
/* 376 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 380 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (588) */
/* 382 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 386 */	NdrFcShort( 0x100 ),	/* Offset= 256 (642) */
/* 388 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 392 */	NdrFcShort( 0xfe ),	/* Offset= 254 (646) */
/* 394 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 398 */	NdrFcShort( 0xfc ),	/* Offset= 252 (650) */
/* 400 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 404 */	NdrFcShort( 0xfa ),	/* Offset= 250 (654) */
/* 406 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 410 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (658) */
/* 412 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 416 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (662) */
/* 418 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 422 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (646) */
/* 424 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 428 */	NdrFcShort( 0xde ),	/* Offset= 222 (650) */
/* 430 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 434 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (666) */
/* 436 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 440 */	NdrFcShort( 0xde ),	/* Offset= 222 (662) */
/* 442 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 446 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (670) */
/* 448 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 452 */	NdrFcShort( 0xde ),	/* Offset= 222 (674) */
/* 454 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 458 */	NdrFcShort( 0xdc ),	/* Offset= 220 (678) */
/* 460 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 464 */	NdrFcShort( 0xda ),	/* Offset= 218 (682) */
/* 466 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 470 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (694) */
/* 472 */	NdrFcLong( 0x10 ),	/* 16 */
/* 476 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 478 */	NdrFcLong( 0x12 ),	/* 18 */
/* 482 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 484 */	NdrFcLong( 0x13 ),	/* 19 */
/* 488 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 490 */	NdrFcLong( 0x15 ),	/* 21 */
/* 494 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 496 */	NdrFcLong( 0x16 ),	/* 22 */
/* 500 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 502 */	NdrFcLong( 0x17 ),	/* 23 */
/* 506 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 508 */	NdrFcLong( 0xe ),	/* 14 */
/* 512 */	NdrFcShort( 0xbe ),	/* Offset= 190 (702) */
/* 514 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 518 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (712) */
/* 520 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 524 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (716) */
/* 526 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 530 */	NdrFcShort( 0x74 ),	/* Offset= 116 (646) */
/* 532 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 536 */	NdrFcShort( 0x72 ),	/* Offset= 114 (650) */
/* 538 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 542 */	NdrFcShort( 0x70 ),	/* Offset= 112 (654) */
/* 544 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 548 */	NdrFcShort( 0x66 ),	/* Offset= 102 (650) */
/* 550 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 554 */	NdrFcShort( 0x60 ),	/* Offset= 96 (650) */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* Offset= 0 (560) */
/* 562 */	NdrFcLong( 0x1 ),	/* 1 */
/* 566 */	NdrFcShort( 0x0 ),	/* Offset= 0 (566) */
/* 568 */	NdrFcShort( 0xffff ),	/* Offset= -1 (567) */
/* 570 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 574 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 576 */	
			0x13, 0x0,	/* FC_OP */
/* 578 */	NdrFcShort( 0xfe32 ),	/* Offset= -462 (116) */
/* 580 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 582 */	NdrFcShort( 0x2 ),	/* Offset= 2 (584) */
/* 584 */	
			0x13, 0x0,	/* FC_OP */
/* 586 */	NdrFcShort( 0x1b8 ),	/* Offset= 440 (1026) */
/* 588 */	
			0x13, 0x0,	/* FC_OP */
/* 590 */	NdrFcShort( 0x20 ),	/* Offset= 32 (622) */
/* 592 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 594 */	NdrFcLong( 0x2f ),	/* 47 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 608 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 610 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 614 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 616 */	NdrFcShort( 0x4 ),	/* 4 */
/* 618 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 620 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 622 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 624 */	NdrFcShort( 0x10 ),	/* 16 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0xa ),	/* Offset= 10 (638) */
/* 630 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 632 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 634 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (592) */
/* 636 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 638 */	
			0x13, 0x0,	/* FC_OP */
/* 640 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (610) */
/* 642 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 644 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 646 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 648 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 650 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 652 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 654 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 656 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 658 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 660 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 662 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 664 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 666 */	
			0x13, 0x0,	/* FC_OP */
/* 668 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (570) */
/* 670 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 672 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (576) */
/* 674 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 676 */	NdrFcShort( 0xfd5e ),	/* Offset= -674 (2) */
/* 678 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 680 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (216) */
/* 682 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 684 */	NdrFcShort( 0x2 ),	/* Offset= 2 (686) */
/* 686 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 688 */	NdrFcShort( 0x2 ),	/* Offset= 2 (690) */
/* 690 */	
			0x13, 0x0,	/* FC_OP */
/* 692 */	NdrFcShort( 0x14e ),	/* Offset= 334 (1026) */
/* 694 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 696 */	NdrFcShort( 0x2 ),	/* Offset= 2 (698) */
/* 698 */	
			0x13, 0x0,	/* FC_OP */
/* 700 */	NdrFcShort( 0x14 ),	/* Offset= 20 (720) */
/* 702 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 704 */	NdrFcShort( 0x10 ),	/* 16 */
/* 706 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 708 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 710 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 712 */	
			0x13, 0x0,	/* FC_OP */
/* 714 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (702) */
/* 716 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 718 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 722 */	NdrFcShort( 0x20 ),	/* 32 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* Offset= 0 (726) */
/* 728 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 730 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 732 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 734 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (272) */
/* 738 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 740 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 744 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 750 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 752 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 754 */	NdrFcShort( 0x4 ),	/* 4 */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	0x13, 0x0,	/* FC_OP */
/* 766 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (720) */
/* 768 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 772 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x6 ),	/* Offset= 6 (784) */
/* 780 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 782 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 784 */	
			0x11, 0x0,	/* FC_RP */
/* 786 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (740) */
/* 788 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 790 */	NdrFcShort( 0x4 ),	/* 4 */
/* 792 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 798 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 800 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	0x13, 0x0,	/* FC_OP */
/* 814 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (622) */
/* 816 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 818 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 820 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x6 ),	/* Offset= 6 (832) */
/* 828 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 830 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 832 */	
			0x11, 0x0,	/* FC_RP */
/* 834 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (788) */
/* 836 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 840 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 842 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 844 */	NdrFcShort( 0x10 ),	/* 16 */
/* 846 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 848 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 850 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (836) */
			0x5b,		/* FC_END */
/* 854 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 856 */	NdrFcShort( 0x18 ),	/* 24 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0xa ),	/* Offset= 10 (870) */
/* 862 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 864 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 866 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (842) */
/* 868 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 870 */	
			0x11, 0x0,	/* FC_RP */
/* 872 */	NdrFcShort( 0xfd4a ),	/* Offset= -694 (178) */
/* 874 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 878 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 884 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 886 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 890 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 894 */	NdrFcShort( 0x4 ),	/* 4 */
/* 896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 898 */	0x13, 0x0,	/* FC_OP */
/* 900 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (874) */
/* 902 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 904 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 906 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 908 */	NdrFcShort( 0x2 ),	/* 2 */
/* 910 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 916 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 918 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 922 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 924 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 926 */	NdrFcShort( 0x4 ),	/* 4 */
/* 928 */	NdrFcShort( 0x4 ),	/* 4 */
/* 930 */	0x13, 0x0,	/* FC_OP */
/* 932 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (906) */
/* 934 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 936 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 938 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 940 */	NdrFcShort( 0x4 ),	/* 4 */
/* 942 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 948 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 950 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 958 */	NdrFcShort( 0x4 ),	/* 4 */
/* 960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 962 */	0x13, 0x0,	/* FC_OP */
/* 964 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (938) */
/* 966 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 968 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 970 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 980 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 982 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 986 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 988 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 990 */	NdrFcShort( 0x4 ),	/* 4 */
/* 992 */	NdrFcShort( 0x4 ),	/* 4 */
/* 994 */	0x13, 0x0,	/* FC_OP */
/* 996 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (970) */
/* 998 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1000 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1002 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1008 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1010 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1014 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1016 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1018 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1020 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1022 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1002) */
/* 1024 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1026 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1028 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1030 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1010) */
/* 1032 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1032) */
/* 1034 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1036 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1038 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1040 */	NdrFcShort( 0xfc14 ),	/* Offset= -1004 (36) */
/* 1042 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1044 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0xfc00 ),	/* Offset= -1024 (28) */
/* 1054 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1056 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1062) */
/* 1058 */	
			0x13, 0x0,	/* FC_OP */
/* 1060 */	NdrFcShort( 0xfeac ),	/* Offset= -340 (720) */
/* 1062 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1064 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1066 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1058) */
/* 1072 */	
			0x12, 0x0,	/* FC_UP */
/* 1074 */	NdrFcShort( 0xfe9e ),	/* Offset= -354 (720) */
/* 1076 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1080 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1072) */
/* 1086 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1088 */	NdrFcShort( 0xfbc2 ),	/* Offset= -1086 (2) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMagickImage, ver. 0.0,
   GUID={0x7F670536,0x00AE,0x4EDF,{0xB0,0x6F,0x13,0xBD,0x22,0xB2,0x56,0x24}} */

#pragma code_seg(".orpc")
static const unsigned short IMagickImage_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    66,
    102,
    144,
    180,
    222,
    264,
    306,
    348,
    390,
    432,
    474,
    516,
    552,
    594
    };

static const MIDL_STUBLESS_PROXY_INFO IMagickImage_ProxyInfo =
    {
    &Object_StubDesc,
    vc140__MIDL_ProcFormatString.Format,
    &IMagickImage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMagickImage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    vc140__MIDL_ProcFormatString.Format,
    &IMagickImage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IMagickImageProxyVtbl = 
{
    &IMagickImage_ProxyInfo,
    &IID_IMagickImage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::OnStartPage */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::OnEndPage */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::get_Count */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Add */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Remove */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Compare */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Composite */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Convert */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Identify */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Mogrify */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Montage */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::Stream */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::TestHarness */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::get_Item */ ,
    (void *) (INT_PTR) -1 /* IMagickImage::get_Messages */
};


static const PRPC_STUB_FUNCTION IMagickImage_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMagickImageStubVtbl =
{
    &IID_IMagickImage,
    &IMagickImage_ServerInfo,
    23,
    &IMagickImage_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    vc140__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _vc140_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IMagickImageProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _vc140_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IMagickImageStubVtbl,
    0
};

PCInterfaceName const _vc140_InterfaceNamesList[] = 
{
    "IMagickImage",
    0
};

const IID *  const _vc140_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _vc140_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _vc140, pIID, n)

int __stdcall _vc140_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_vc140_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo vc140_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _vc140_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _vc140_StubVtblList,
    (const PCInterfaceName * ) & _vc140_InterfaceNamesList,
    (const IID ** ) & _vc140_BaseIIDList,
    & _vc140_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

