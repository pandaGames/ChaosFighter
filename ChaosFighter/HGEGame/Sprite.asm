﻿; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.30319.01 

	TITLE	D:\MyCodes\ChaosFighter\trunk\ChaosFighter\HGEGame\HGEFramework\Sprite.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	??1hgeSprite@@QAE@XZ				; hgeSprite::~hgeSprite
PUBLIC	?GetHotSpot@hgeSprite@@QBEXPAM0@Z		; hgeSprite::GetHotSpot
PUBLIC	__real@3f800000
PUBLIC	__real@00000000
PUBLIC	??0hgeRect@@QAE@XZ				; hgeRect::hgeRect
PUBLIC	??0D3DXVECTOR3@@QAE@XZ				; D3DXVECTOR3::D3DXVECTOR3
PUBLIC	??_7CSprite@@6B@				; CSprite::`vftable'
PUBLIC	??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z		; CSprite::CSprite
PUBLIC	??_R4CSprite@@6B@				; CSprite::`RTTI Complete Object Locator'
PUBLIC	??_R0?AVCSprite@@@8				; CSprite `RTTI Type Descriptor'
PUBLIC	??_R3CSprite@@8					; CSprite::`RTTI Class Hierarchy Descriptor'
PUBLIC	??_R2CSprite@@8					; CSprite::`RTTI Base Class Array'
PUBLIC	??_R1A@?0A@EA@CSprite@@8			; CSprite::`RTTI Base Class Descriptor at (0,-1,0,64)'
PUBLIC	??_R13?0A@EA@hgeSprite@@8			; hgeSprite::`RTTI Base Class Descriptor at (4,-1,0,64)'
PUBLIC	??_R0?AVhgeSprite@@@8				; hgeSprite `RTTI Type Descriptor'
PUBLIC	??_R3hgeSprite@@8				; hgeSprite::`RTTI Class Hierarchy Descriptor'
PUBLIC	??_R2hgeSprite@@8				; hgeSprite::`RTTI Base Class Array'
PUBLIC	??_R1A@?0A@EA@hgeSprite@@8			; hgeSprite::`RTTI Base Class Descriptor at (0,-1,0,64)'
PUBLIC	?RenderFunc@CSprite@@UAEXXZ			; CSprite::RenderFunc
PUBLIC	?UpdateFunc@CSprite@@UAEXM@Z			; CSprite::UpdateFunc
EXTRN	?GetBoundingBoxEx@hgeSprite@@QBEPAVhgeRect@@MMMMMPAV2@@Z:PROC ; hgeSprite::GetBoundingBoxEx
EXTRN	??0hgeSprite@@QAE@KMMMM@Z:PROC			; hgeSprite::hgeSprite
EXTRN	___security_cookie:DWORD
EXTRN	___CxxFrameHandler3:PROC
EXTRN	@__security_check_cookie@4:PROC
EXTRN	__fltused:DWORD
EXTRN	__RTC_CheckEsp:PROC
EXTRN	@_RTC_CheckStackVars@8:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
EXTRN	??_7type_info@@6B@:QWORD			; type_info::`vftable'
;	COMDAT ??_R1A@?0A@EA@hgeSprite@@8
; File d:\mycodes\chaosfighter\trunk\chaosfighter\hgegame\hgeframework\sprite.cpp
rdata$r	SEGMENT
??_R1A@?0A@EA@hgeSprite@@8 DD FLAT:??_R0?AVhgeSprite@@@8 ; hgeSprite::`RTTI Base Class Descriptor at (0,-1,0,64)'
	DD	00H
	DD	00H
	DD	0ffffffffH
	DD	00H
	DD	040H
	DD	FLAT:??_R3hgeSprite@@8
rdata$r	ENDS
;	COMDAT ??_R2hgeSprite@@8
rdata$r	SEGMENT
??_R2hgeSprite@@8 DD FLAT:??_R1A@?0A@EA@hgeSprite@@8	; hgeSprite::`RTTI Base Class Array'
rdata$r	ENDS
;	COMDAT ??_R3hgeSprite@@8
rdata$r	SEGMENT
??_R3hgeSprite@@8 DD 00H				; hgeSprite::`RTTI Class Hierarchy Descriptor'
	DD	00H
	DD	01H
	DD	FLAT:??_R2hgeSprite@@8
rdata$r	ENDS
;	COMDAT ??_R0?AVhgeSprite@@@8
_DATA	SEGMENT
??_R0?AVhgeSprite@@@8 DD FLAT:??_7type_info@@6B@	; hgeSprite `RTTI Type Descriptor'
	DD	00H
	DB	'.?AVhgeSprite@@', 00H
_DATA	ENDS
;	COMDAT ??_R13?0A@EA@hgeSprite@@8
rdata$r	SEGMENT
??_R13?0A@EA@hgeSprite@@8 DD FLAT:??_R0?AVhgeSprite@@@8	; hgeSprite::`RTTI Base Class Descriptor at (4,-1,0,64)'
	DD	00H
	DD	04H
	DD	0ffffffffH
	DD	00H
	DD	040H
	DD	FLAT:??_R3hgeSprite@@8
rdata$r	ENDS
;	COMDAT ??_R1A@?0A@EA@CSprite@@8
rdata$r	SEGMENT
??_R1A@?0A@EA@CSprite@@8 DD FLAT:??_R0?AVCSprite@@@8	; CSprite::`RTTI Base Class Descriptor at (0,-1,0,64)'
	DD	01H
	DD	00H
	DD	0ffffffffH
	DD	00H
	DD	040H
	DD	FLAT:??_R3CSprite@@8
rdata$r	ENDS
;	COMDAT ??_R2CSprite@@8
rdata$r	SEGMENT
??_R2CSprite@@8 DD FLAT:??_R1A@?0A@EA@CSprite@@8	; CSprite::`RTTI Base Class Array'
	DD	FLAT:??_R13?0A@EA@hgeSprite@@8
rdata$r	ENDS
;	COMDAT ??_R3CSprite@@8
rdata$r	SEGMENT
??_R3CSprite@@8 DD 00H					; CSprite::`RTTI Class Hierarchy Descriptor'
	DD	00H
	DD	02H
	DD	FLAT:??_R2CSprite@@8
rdata$r	ENDS
;	COMDAT ??_R0?AVCSprite@@@8
_DATA	SEGMENT
??_R0?AVCSprite@@@8 DD FLAT:??_7type_info@@6B@		; CSprite `RTTI Type Descriptor'
	DD	00H
	DB	'.?AVCSprite@@', 00H
_DATA	ENDS
;	COMDAT ??_R4CSprite@@6B@
rdata$r	SEGMENT
??_R4CSprite@@6B@ DD 00H				; CSprite::`RTTI Complete Object Locator'
	DD	00H
	DD	00H
	DD	FLAT:??_R0?AVCSprite@@@8
	DD	FLAT:??_R3CSprite@@8
rdata$r	ENDS
;	COMDAT __real@3f800000
CONST	SEGMENT
__real@3f800000 DD 03f800000r			; 1
CONST	ENDS
;	COMDAT __real@00000000
CONST	SEGMENT
__real@00000000 DD 000000000r			; 0
CONST	ENDS
;	COMDAT ??_7CSprite@@6B@
CONST	SEGMENT
??_7CSprite@@6B@ DD FLAT:??_R4CSprite@@6B@		; CSprite::`vftable'
	DD	FLAT:?RenderFunc@CSprite@@UAEXXZ
	DD	FLAT:?UpdateFunc@CSprite@@UAEXM@Z
CONST	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__unwindtable$??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z DD 0ffffffffH
	DD	FLAT:__unwindfunclet$??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z$0
__ehfuncinfo$??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z DD 019930522H
	DD	01H
	DD	FLAT:__unwindtable$??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z
	DD	2 DUP(00H)
	DD	2 DUP(00H)
	DD	00H
	DD	01H
xdata$x	ENDS
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu /ZI
rtc$IMZ	ENDS
;	COMDAT ??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z
_TEXT	SEGMENT
_this$ = -20						; size = 4
__$EHRec$ = -12						; size = 12
_vPos$ = 8						; size = 12
_tex$ = 20						; size = 4
_x$ = 24						; size = 4
_y$ = 28						; size = 4
_w$ = 32						; size = 4
_h$ = 36						; size = 4
??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z PROC		; CSprite::CSprite, COMDAT
; _this$ = ecx
; Line 5
	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z
	mov	eax, DWORD PTR fs:0
	push	eax
	sub	esp, 216				; 000000d8H
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-228]
	mov	ecx, 54					; 00000036H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, eax
	mov	DWORD PTR _this$[ebp], ecx
	push	ecx
	fld	DWORD PTR _h$[ebp]
	fstp	DWORD PTR [esp]
	push	ecx
	fld	DWORD PTR _w$[ebp]
	fstp	DWORD PTR [esp]
	push	ecx
	fld	DWORD PTR _y$[ebp]
	fstp	DWORD PTR [esp]
	push	ecx
	fld	DWORD PTR _x$[ebp]
	fstp	DWORD PTR [esp]
	mov	eax, DWORD PTR _tex$[ebp]
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	??0hgeSprite@@QAE@KMMMM@Z		; hgeSprite::hgeSprite
	mov	DWORD PTR __$EHRec$[ebp+8], 0
	mov	eax, DWORD PTR _this$[ebp]
	mov	DWORD PTR [eax], OFFSET ??_7CSprite@@6B@
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 144				; 00000090H
	call	??0D3DXVECTOR3@@QAE@XZ			; D3DXVECTOR3::D3DXVECTOR3
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 156				; 0000009cH
	call	??0D3DXVECTOR3@@QAE@XZ			; D3DXVECTOR3::D3DXVECTOR3
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 168				; 000000a8H
	call	??0D3DXVECTOR3@@QAE@XZ			; D3DXVECTOR3::D3DXVECTOR3
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 192				; 000000c0H
	call	??0hgeRect@@QAE@XZ			; hgeRect::hgeRect
; Line 6
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 144				; 00000090H
	mov	ecx, DWORD PTR _vPos$[ebp]
	mov	DWORD PTR [eax], ecx
	mov	edx, DWORD PTR _vPos$[ebp+4]
	mov	DWORD PTR [eax+4], edx
	mov	ecx, DWORD PTR _vPos$[ebp+8]
	mov	DWORD PTR [eax+8], ecx
; Line 7
	mov	eax, DWORD PTR _this$[ebp]
	fldz
	fstp	DWORD PTR [eax+188]
; Line 8
	mov	eax, DWORD PTR _this$[ebp]
	mov	BYTE PTR [eax+180], 1
; Line 9
	mov	eax, DWORD PTR _this$[ebp]
	mov	BYTE PTR [eax+181], 0
; Line 10
	mov	eax, DWORD PTR _this$[ebp]
	mov	BYTE PTR [eax+182], 0
; Line 11
	mov	eax, DWORD PTR _this$[ebp]
	fld1
	fstp	DWORD PTR [eax+184]
; Line 12
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 160				; 000000a0H
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 156				; 0000009cH
	push	ecx
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?GetHotSpot@hgeSprite@@QBEXPAM0@Z	; hgeSprite::GetHotSpot
; Line 13
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 172				; 000000acH
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 168				; 000000a8H
	push	ecx
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?GetHotSpot@hgeSprite@@QBEXPAM0@Z	; hgeSprite::GetHotSpot
; Line 14
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 192				; 000000c0H
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [ecx+184]
	fstp	DWORD PTR [esp]
	mov	edx, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [edx+184]
	fstp	DWORD PTR [esp]
	mov	eax, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [eax+188]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [ecx+148]
	fstp	DWORD PTR [esp]
	mov	edx, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [edx+144]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?GetBoundingBoxEx@hgeSprite@@QBEPAVhgeRect@@MMMMMPAV2@@Z ; hgeSprite::GetBoundingBoxEx
; Line 15
	mov	DWORD PTR __$EHRec$[ebp+8], -1
	mov	eax, DWORD PTR _this$[ebp]
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN7@CSprite
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	mov	ecx, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 228				; 000000e4H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	32					; 00000020H
	npad	1
$LN7@CSprite:
	DD	1
	DD	$LN6@CSprite
$LN6@CSprite:
	DD	-32					; ffffffe0H
	DD	4
	DD	$LN4@CSprite
$LN4@CSprite:
	DB	95					; 0000005fH
	DB	36					; 00000024H
	DB	65					; 00000041H
	DB	114					; 00000072H
	DB	114					; 00000072H
	DB	97					; 00000061H
	DB	121					; 00000079H
	DB	80					; 00000050H
	DB	97					; 00000061H
	DB	100					; 00000064H
	DB	0
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__unwindfunclet$??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z$0:
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	jmp	??1hgeSprite@@QAE@XZ			; hgeSprite::~hgeSprite
__ehhandler$??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-232]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z
	jmp	___CxxFrameHandler3
text$x	ENDS
??0CSprite@@QAE@UD3DXVECTOR3@@KMMMM@Z ENDP		; CSprite::CSprite
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??0D3DXVECTOR3@@QAE@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
??0D3DXVECTOR3@@QAE@XZ PROC				; D3DXVECTOR3::D3DXVECTOR3, COMDAT
; _this$ = ecx
; File d:\program files\microsoft directx sdk (june 2010)\include\d3dx9math.h
; Line 165
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _this$[ebp]
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
??0D3DXVECTOR3@@QAE@XZ ENDP				; D3DXVECTOR3::D3DXVECTOR3
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ??0hgeRect@@QAE@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
??0hgeRect@@QAE@XZ PROC					; hgeRect::hgeRect, COMDAT
; _this$ = ecx
; File d:\mycodes\chaosfighter\trunk\chaosfighter\hge gameengine lite version\include\hgerect.h
; Line 20
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _this$[ebp]
	mov	BYTE PTR [eax+16], 1
	mov	eax, DWORD PTR _this$[ebp]
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
??0hgeRect@@QAE@XZ ENDP					; hgeRect::hgeRect
_TEXT	ENDS
EXTRN	?hge@hgeSprite@@1PAVHGE@@A:DWORD		; hgeSprite::hge
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??1hgeSprite@@QAE@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
??1hgeSprite@@QAE@XZ PROC				; hgeSprite::~hgeSprite, COMDAT
; _this$ = ecx
; File d:\mycodes\chaosfighter\trunk\chaosfighter\hge gameengine lite version\include\hgesprite.h
; Line 26
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR ?hge@hgeSprite@@1PAVHGE@@A ; hgeSprite::hge
	mov	ecx, DWORD PTR [eax]
	mov	esi, esp
	mov	edx, DWORD PTR ?hge@hgeSprite@@1PAVHGE@@A ; hgeSprite::hge
	push	edx
	mov	eax, DWORD PTR [ecx]
	call	eax
	cmp	esi, esp
	call	__RTC_CheckEsp
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
??1hgeSprite@@QAE@XZ ENDP				; hgeSprite::~hgeSprite
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?GetHotSpot@hgeSprite@@QBEXPAM0@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_x$ = 8							; size = 4
_y$ = 12						; size = 4
?GetHotSpot@hgeSprite@@QBEXPAM0@Z PROC			; hgeSprite::GetHotSpot, COMDAT
; _this$ = ecx
; Line 47
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _x$[ebp]
	mov	ecx, DWORD PTR _this$[ebp]
	fld	DWORD PTR [ecx+128]
	fstp	DWORD PTR [eax]
	mov	eax, DWORD PTR _y$[ebp]
	mov	ecx, DWORD PTR _this$[ebp]
	fld	DWORD PTR [ecx+132]
	fstp	DWORD PTR [eax]
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	8
?GetHotSpot@hgeSprite@@QBEXPAM0@Z ENDP			; hgeSprite::GetHotSpot
_TEXT	ENDS
PUBLIC	??1CSprite@@QAE@XZ				; CSprite::~CSprite
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??1CSprite@@QAE@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
??1CSprite@@QAE@XZ PROC					; CSprite::~CSprite, COMDAT
; _this$ = ecx
; File d:\mycodes\chaosfighter\trunk\chaosfighter\hgegame\hgeframework\sprite.cpp
; Line 19
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _this$[ebp]
	mov	DWORD PTR [eax], OFFSET ??_7CSprite@@6B@
; Line 20
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	??1hgeSprite@@QAE@XZ			; hgeSprite::~hgeSprite
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
??1CSprite@@QAE@XZ ENDP					; CSprite::~CSprite
_TEXT	ENDS
EXTRN	?RenderEx@hgeSprite@@QAEXMMMMM@Z:PROC		; hgeSprite::RenderEx
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?RenderFunc@CSprite@@UAEXXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?RenderFunc@CSprite@@UAEXXZ PROC			; CSprite::RenderFunc, COMDAT
; _this$ = ecx
; Line 23
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 24
	mov	eax, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [eax+184]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [ecx+184]
	fstp	DWORD PTR [esp]
	mov	edx, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [edx+188]
	fstp	DWORD PTR [esp]
	mov	eax, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [eax+148]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [ecx+144]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?RenderEx@hgeSprite@@QAEXMMMMM@Z	; hgeSprite::RenderEx
; Line 25
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?RenderFunc@CSprite@@UAEXXZ ENDP			; CSprite::RenderFunc
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?UpdateFunc@CSprite@@UAEXM@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_fDeltaTime$ = 8					; size = 4
?UpdateFunc@CSprite@@UAEXM@Z PROC			; CSprite::UpdateFunc, COMDAT
; _this$ = ecx
; Line 28
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 30
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?UpdateFunc@CSprite@@UAEXM@Z ENDP			; CSprite::UpdateFunc
_TEXT	ENDS
PUBLIC	?SetPos@CSprite@@QAEXUD3DXVECTOR3@@@Z		; CSprite::SetPos
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?SetPos@CSprite@@QAEXUD3DXVECTOR3@@@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_vPos$ = 8						; size = 12
?SetPos@CSprite@@QAEXUD3DXVECTOR3@@@Z PROC		; CSprite::SetPos, COMDAT
; _this$ = ecx
; Line 33
	push	ebp
	mov	ebp, esp
	sub	esp, 216				; 000000d8H
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-216]
	mov	ecx, 54					; 00000036H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 34
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 144				; 00000090H
	mov	ecx, DWORD PTR _vPos$[ebp]
	mov	DWORD PTR [eax], ecx
	mov	edx, DWORD PTR _vPos$[ebp+4]
	mov	DWORD PTR [eax+4], edx
	mov	ecx, DWORD PTR _vPos$[ebp+8]
	mov	DWORD PTR [eax+8], ecx
; Line 35
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN5@SetPos
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	12					; 0000000cH
	npad	2
$LN5@SetPos:
	DD	1
	DD	$LN4@SetPos
$LN4@SetPos:
	DD	-20					; ffffffecH
	DD	4
	DD	$LN3@SetPos
$LN3@SetPos:
	DB	95					; 0000005fH
	DB	36					; 00000024H
	DB	65					; 00000041H
	DB	114					; 00000072H
	DB	114					; 00000072H
	DB	97					; 00000061H
	DB	121					; 00000079H
	DB	80					; 00000050H
	DB	97					; 00000061H
	DB	100					; 00000064H
	DB	0
?SetPos@CSprite@@QAEXUD3DXVECTOR3@@@Z ENDP		; CSprite::SetPos
_TEXT	ENDS
PUBLIC	?SetHotSpot@hgeSprite@@QAEXMM@Z			; hgeSprite::SetHotSpot
PUBLIC	?SetHotPos@CSprite@@QAEXUD3DXVECTOR3@@@Z	; CSprite::SetHotPos
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?SetHotPos@CSprite@@QAEXUD3DXVECTOR3@@@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_vHotPos$ = 8						; size = 12
?SetHotPos@CSprite@@QAEXUD3DXVECTOR3@@@Z PROC		; CSprite::SetHotPos, COMDAT
; _this$ = ecx
; Line 37
	push	ebp
	mov	ebp, esp
	sub	esp, 216				; 000000d8H
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-216]
	mov	ecx, 54					; 00000036H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 38
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 156				; 0000009cH
	mov	ecx, DWORD PTR _vHotPos$[ebp]
	mov	DWORD PTR [eax], ecx
	mov	edx, DWORD PTR _vHotPos$[ebp+4]
	mov	DWORD PTR [eax+4], edx
	mov	ecx, DWORD PTR _vHotPos$[ebp+8]
	mov	DWORD PTR [eax+8], ecx
; Line 39
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 168				; 000000a8H
	mov	ecx, DWORD PTR _vHotPos$[ebp]
	mov	DWORD PTR [eax], ecx
	mov	edx, DWORD PTR _vHotPos$[ebp+4]
	mov	DWORD PTR [eax+4], edx
	mov	ecx, DWORD PTR _vHotPos$[ebp+8]
	mov	DWORD PTR [eax+8], ecx
; Line 40
	mov	eax, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [eax+160]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	push	ecx
	fld	DWORD PTR [ecx+156]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?SetHotSpot@hgeSprite@@QAEXMM@Z		; hgeSprite::SetHotSpot
; Line 41
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN5@SetHotPos
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 216				; 000000d8H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	12					; 0000000cH
	npad	3
$LN5@SetHotPos:
	DD	1
	DD	$LN4@SetHotPos
$LN4@SetHotPos:
	DD	-20					; ffffffecH
	DD	4
	DD	$LN3@SetHotPos
$LN3@SetHotPos:
	DB	95					; 0000005fH
	DB	36					; 00000024H
	DB	65					; 00000041H
	DB	114					; 00000072H
	DB	114					; 00000072H
	DB	97					; 00000061H
	DB	121					; 00000079H
	DB	80					; 00000050H
	DB	97					; 00000061H
	DB	100					; 00000064H
	DB	0
?SetHotPos@CSprite@@QAEXUD3DXVECTOR3@@@Z ENDP		; CSprite::SetHotPos
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?SetHotSpot@hgeSprite@@QAEXMM@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_x$ = 8							; size = 4
_y$ = 12						; size = 4
?SetHotSpot@hgeSprite@@QAEXMM@Z PROC			; hgeSprite::SetHotSpot, COMDAT
; _this$ = ecx
; File d:\mycodes\chaosfighter\trunk\chaosfighter\hge gameengine lite version\include\hgesprite.h
; Line 39
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _x$[ebp]
	fstp	DWORD PTR [eax+128]
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _y$[ebp]
	fstp	DWORD PTR [eax+132]
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	8
?SetHotSpot@hgeSprite@@QAEXMM@Z ENDP			; hgeSprite::SetHotSpot
_TEXT	ENDS
PUBLIC	?SetVisible@CSprite@@QAEX_N@Z			; CSprite::SetVisible
EXTRN	?SetColor@hgeSprite@@QAEXKH@Z:PROC		; hgeSprite::SetColor
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?SetVisible@CSprite@@QAEX_N@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_bVisible$ = 8						; size = 1
?SetVisible@CSprite@@QAEX_N@Z PROC			; CSprite::SetVisible, COMDAT
; _this$ = ecx
; File d:\mycodes\chaosfighter\trunk\chaosfighter\hgegame\hgeframework\sprite.cpp
; Line 43
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 44
	mov	eax, DWORD PTR _this$[ebp]
	mov	cl, BYTE PTR _bVisible$[ebp]
	mov	BYTE PTR [eax+180], cl
; Line 45
	mov	eax, DWORD PTR _this$[ebp]
	movzx	ecx, BYTE PTR [eax+180]
	test	ecx, ecx
	je	SHORT $LN2@SetVisible
; Line 47
	push	-1
	push	-1
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?SetColor@hgeSprite@@QAEXKH@Z		; hgeSprite::SetColor
; Line 49
	jmp	SHORT $LN3@SetVisible
$LN2@SetVisible:
; Line 51
	push	-1
	push	16777215				; 00ffffffH
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?SetColor@hgeSprite@@QAEXKH@Z		; hgeSprite::SetColor
$LN3@SetVisible:
; Line 53
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	4
?SetVisible@CSprite@@QAEX_N@Z ENDP			; CSprite::SetVisible
_TEXT	ENDS
PUBLIC	?SetAngle@CSprite@@QAEXM@Z			; CSprite::SetAngle
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?SetAngle@CSprite@@QAEXM@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_fAngle$ = 8						; size = 4
?SetAngle@CSprite@@QAEXM@Z PROC				; CSprite::SetAngle, COMDAT
; _this$ = ecx
; Line 55
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 56
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _fAngle$[ebp]
	fstp	DWORD PTR [eax+188]
; Line 57
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?SetAngle@CSprite@@QAEXM@Z ENDP				; CSprite::SetAngle
_TEXT	ENDS
PUBLIC	?SetScale@CSprite@@QAEXM@Z			; CSprite::SetScale
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?SetScale@CSprite@@QAEXM@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_fScale$ = 8						; size = 4
?SetScale@CSprite@@QAEXM@Z PROC				; CSprite::SetScale, COMDAT
; _this$ = ecx
; Line 59
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 60
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _fScale$[ebp]
	fstp	DWORD PTR [eax+184]
; Line 61
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?SetScale@CSprite@@QAEXM@Z ENDP				; CSprite::SetScale
_TEXT	ENDS
PUBLIC	?GetHeight@hgeSprite@@QBEMXZ			; hgeSprite::GetHeight
PUBLIC	?GetWidth@hgeSprite@@QBEMXZ			; hgeSprite::GetWidth
PUBLIC	__$ArrayPad$
PUBLIC	?SetFlip@CSprite@@QAEX_N00@Z			; CSprite::SetFlip
EXTRN	?SetFlip@hgeSprite@@QAEX_N00@Z:PROC		; hgeSprite::SetFlip
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?SetFlip@CSprite@@QAEX_N00@Z
_TEXT	SEGMENT
_vHotPos$ = -32						; size = 12
_this$ = -12						; size = 4
__$ArrayPad$ = -4					; size = 4
_bX$ = 8						; size = 1
_bY$ = 12						; size = 1
_bHotSpot$ = 16						; size = 1
?SetFlip@CSprite@@QAEX_N00@Z PROC			; CSprite::SetFlip, COMDAT
; _this$ = ecx
; Line 63
	push	ebp
	mov	ebp, esp
	sub	esp, 228				; 000000e4H
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-228]
	mov	ecx, 57					; 00000039H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	mov	DWORD PTR __$ArrayPad$[ebp], eax
	mov	DWORD PTR _this$[ebp], ecx
; Line 64
	movzx	eax, BYTE PTR _bHotSpot$[ebp]
	push	eax
	movzx	ecx, BYTE PTR _bY$[ebp]
	push	ecx
	movzx	edx, BYTE PTR _bX$[ebp]
	push	edx
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?SetFlip@hgeSprite@@QAEX_N00@Z		; hgeSprite::SetFlip
; Line 65
	lea	ecx, DWORD PTR _vHotPos$[ebp]
	call	??0D3DXVECTOR3@@QAE@XZ			; D3DXVECTOR3::D3DXVECTOR3
; Line 66
	movzx	eax, BYTE PTR _bHotSpot$[ebp]
	test	eax, eax
	je	$LN4@SetFlip
; Line 68
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 168				; 000000a8H
	mov	ecx, DWORD PTR [eax]
	mov	DWORD PTR _vHotPos$[ebp], ecx
	mov	edx, DWORD PTR [eax+4]
	mov	DWORD PTR _vHotPos$[ebp+4], edx
	mov	eax, DWORD PTR [eax+8]
	mov	DWORD PTR _vHotPos$[ebp+8], eax
; Line 69
	movzx	eax, BYTE PTR _bX$[ebp]
	test	eax, eax
	je	SHORT $LN3@SetFlip
; Line 71
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?GetWidth@hgeSprite@@QBEMXZ		; hgeSprite::GetWidth
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+168]
	fadd	ST(0), ST(0)
	fsubp	ST(1), ST(0)
	mov	ecx, DWORD PTR _this$[ebp]
	fadd	DWORD PTR [ecx+168]
	fstp	DWORD PTR _vHotPos$[ebp]
$LN3@SetFlip:
; Line 73
	movzx	eax, BYTE PTR _bY$[ebp]
	test	eax, eax
	je	SHORT $LN2@SetFlip
; Line 75
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?GetHeight@hgeSprite@@QBEMXZ		; hgeSprite::GetHeight
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+172]
	fadd	ST(0), ST(0)
	fsubp	ST(1), ST(0)
	mov	ecx, DWORD PTR _this$[ebp]
	fadd	DWORD PTR [ecx+172]
	fstp	DWORD PTR _vHotPos$[ebp+4]
$LN2@SetFlip:
; Line 77
	push	ecx
	fld	DWORD PTR _vHotPos$[ebp+4]
	fstp	DWORD PTR [esp]
	push	ecx
	fld	DWORD PTR _vHotPos$[ebp]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?SetHotSpot@hgeSprite@@QAEXMM@Z		; hgeSprite::SetHotSpot
; Line 79
	jmp	SHORT $LN1@SetFlip
$LN4@SetFlip:
; Line 81
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 168				; 000000a8H
	mov	ecx, DWORD PTR [eax]
	mov	DWORD PTR _vHotPos$[ebp], ecx
	mov	edx, DWORD PTR [eax+4]
	mov	DWORD PTR _vHotPos$[ebp+4], edx
	mov	eax, DWORD PTR [eax+8]
	mov	DWORD PTR _vHotPos$[ebp+8], eax
; Line 82
	push	ecx
	fld	DWORD PTR _vHotPos$[ebp+4]
	fstp	DWORD PTR [esp]
	push	ecx
	fld	DWORD PTR _vHotPos$[ebp]
	fstp	DWORD PTR [esp]
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?SetHotSpot@hgeSprite@@QAEXMM@Z		; hgeSprite::SetHotSpot
$LN1@SetFlip:
; Line 84
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN9@SetFlip
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	mov	ecx, DWORD PTR __$ArrayPad$[ebp]
	xor	ecx, ebp
	call	@__security_check_cookie@4
	add	esp, 228				; 000000e4H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	12					; 0000000cH
	npad	2
$LN9@SetFlip:
	DD	1
	DD	$LN8@SetFlip
$LN8@SetFlip:
	DD	-32					; ffffffe0H
	DD	12					; 0000000cH
	DD	$LN7@SetFlip
$LN7@SetFlip:
	DB	118					; 00000076H
	DB	72					; 00000048H
	DB	111					; 0000006fH
	DB	116					; 00000074H
	DB	80					; 00000050H
	DB	111					; 0000006fH
	DB	115					; 00000073H
	DB	0
?SetFlip@CSprite@@QAEX_N00@Z ENDP			; CSprite::SetFlip
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?GetWidth@hgeSprite@@QBEMXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?GetWidth@hgeSprite@@QBEMXZ PROC			; hgeSprite::GetWidth, COMDAT
; _this$ = ecx
; File d:\mycodes\chaosfighter\trunk\chaosfighter\hge gameengine lite version\include\hgesprite.h
; Line 50
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+112]
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?GetWidth@hgeSprite@@QBEMXZ ENDP			; hgeSprite::GetWidth
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT ?GetHeight@hgeSprite@@QBEMXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?GetHeight@hgeSprite@@QBEMXZ PROC			; hgeSprite::GetHeight, COMDAT
; _this$ = ecx
; Line 51
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+116]
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?GetHeight@hgeSprite@@QBEMXZ ENDP			; hgeSprite::GetHeight
_TEXT	ENDS
PUBLIC	?GetPos@CSprite@@QAE?AUD3DXVECTOR3@@XZ		; CSprite::GetPos
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?GetPos@CSprite@@QAE?AUD3DXVECTOR3@@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
___$ReturnUdt$ = 8					; size = 4
?GetPos@CSprite@@QAE?AUD3DXVECTOR3@@XZ PROC		; CSprite::GetPos, COMDAT
; _this$ = ecx
; File d:\mycodes\chaosfighter\trunk\chaosfighter\hgegame\hgeframework\sprite.cpp
; Line 86
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 87
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 144				; 00000090H
	mov	ecx, DWORD PTR ___$ReturnUdt$[ebp]
	mov	edx, DWORD PTR [eax]
	mov	DWORD PTR [ecx], edx
	mov	edx, DWORD PTR [eax+4]
	mov	DWORD PTR [ecx+4], edx
	mov	eax, DWORD PTR [eax+8]
	mov	DWORD PTR [ecx+8], eax
	mov	eax, DWORD PTR ___$ReturnUdt$[ebp]
; Line 88
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?GetPos@CSprite@@QAE?AUD3DXVECTOR3@@XZ ENDP		; CSprite::GetPos
_TEXT	ENDS
PUBLIC	?GetHotPos@CSprite@@QAE?AUD3DXVECTOR3@@XZ	; CSprite::GetHotPos
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?GetHotPos@CSprite@@QAE?AUD3DXVECTOR3@@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
___$ReturnUdt$ = 8					; size = 4
?GetHotPos@CSprite@@QAE?AUD3DXVECTOR3@@XZ PROC		; CSprite::GetHotPos, COMDAT
; _this$ = ecx
; Line 90
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 91
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 160				; 000000a0H
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 156				; 0000009cH
	push	ecx
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 4
	call	?GetHotSpot@hgeSprite@@QBEXPAM0@Z	; hgeSprite::GetHotSpot
; Line 92
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 156				; 0000009cH
	mov	ecx, DWORD PTR ___$ReturnUdt$[ebp]
	mov	edx, DWORD PTR [eax]
	mov	DWORD PTR [ecx], edx
	mov	edx, DWORD PTR [eax+4]
	mov	DWORD PTR [ecx+4], edx
	mov	eax, DWORD PTR [eax+8]
	mov	DWORD PTR [ecx+8], eax
	mov	eax, DWORD PTR ___$ReturnUdt$[ebp]
; Line 93
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	4
?GetHotPos@CSprite@@QAE?AUD3DXVECTOR3@@XZ ENDP		; CSprite::GetHotPos
_TEXT	ENDS
PUBLIC	?GetVisible@CSprite@@QAE_NXZ			; CSprite::GetVisible
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?GetVisible@CSprite@@QAE_NXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?GetVisible@CSprite@@QAE_NXZ PROC			; CSprite::GetVisible, COMDAT
; _this$ = ecx
; Line 95
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 96
	mov	eax, DWORD PTR _this$[ebp]
	mov	al, BYTE PTR [eax+180]
; Line 97
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?GetVisible@CSprite@@QAE_NXZ ENDP			; CSprite::GetVisible
_TEXT	ENDS
PUBLIC	?GetAngle@CSprite@@QAEMXZ			; CSprite::GetAngle
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?GetAngle@CSprite@@QAEMXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?GetAngle@CSprite@@QAEMXZ PROC				; CSprite::GetAngle, COMDAT
; _this$ = ecx
; Line 99
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 100
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+188]
; Line 101
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?GetAngle@CSprite@@QAEMXZ ENDP				; CSprite::GetAngle
_TEXT	ENDS
PUBLIC	?GetScale@CSprite@@QAEMXZ			; CSprite::GetScale
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?GetScale@CSprite@@QAEMXZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
?GetScale@CSprite@@QAEMXZ PROC				; CSprite::GetScale, COMDAT
; _this$ = ecx
; Line 103
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 104
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+184]
; Line 105
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?GetScale@CSprite@@QAEMXZ ENDP				; CSprite::GetScale
_TEXT	ENDS
END