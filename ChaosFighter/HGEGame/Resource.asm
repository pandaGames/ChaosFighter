﻿; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.30319.01 

	TITLE	E:\毕业设计\项目\ChaosFighter\HGEGame\HGEFramework\Resource.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	??$wcscpy_s@$0BAE@@@YAHAAY0BAE@_WPB_W@Z		; wcscpy_s<260>
PUBLIC	??0CResource@@QAE@HPB_W@Z			; CResource::CResource
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT rtc$TMZ
; File e:\毕业设计\项目\chaosfighter\hgegame\hgeframework\resource.cpp
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu /ZI
rtc$IMZ	ENDS
;	COMDAT ??0CResource@@QAE@HPB_W@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_resType$ = 8						; size = 4
_resName$ = 12						; size = 4
??0CResource@@QAE@HPB_W@Z PROC				; CResource::CResource, COMDAT
; _this$ = ecx
; Line 5
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
; Line 6
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _resType$[ebp]
	mov	DWORD PTR [eax+12], ecx
; Line 7
	mov	eax, DWORD PTR _resName$[ebp]
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 16					; 00000010H
	push	ecx
	call	??$wcscpy_s@$0BAE@@@YAHAAY0BAE@_WPB_W@Z	; wcscpy_s<260>
	add	esp, 8
; Line 8
	mov	eax, DWORD PTR _this$[ebp]
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	8
??0CResource@@QAE@HPB_W@Z ENDP				; CResource::CResource
_TEXT	ENDS
PUBLIC	??1CResource@@QAE@XZ				; CResource::~CResource
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??1CResource@@QAE@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
??1CResource@@QAE@XZ PROC				; CResource::~CResource, COMDAT
; _this$ = ecx
; Line 11
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
; Line 12
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
??1CResource@@QAE@XZ ENDP				; CResource::~CResource
_TEXT	ENDS
EXTRN	__imp__wcscpy_s:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??$wcscpy_s@$0BAE@@@YAHAAY0BAE@_WPB_W@Z
_TEXT	SEGMENT
__Dest$ = 8						; size = 4
__Source$ = 12						; size = 4
??$wcscpy_s@$0BAE@@@YAHAAY0BAE@_WPB_W@Z PROC		; wcscpy_s<260>, COMDAT
; File d:\program files\microsoft visual studio 10.0\vc\include\string.h
; Line 282
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	esi, esp
	mov	eax, DWORD PTR __Source$[ebp]
	push	eax
	push	260					; 00000104H
	mov	ecx, DWORD PTR __Dest$[ebp]
	push	ecx
	call	DWORD PTR __imp__wcscpy_s
	add	esp, 12					; 0000000cH
	cmp	esi, esp
	call	__RTC_CheckEsp
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
??$wcscpy_s@$0BAE@@@YAHAAY0BAE@_WPB_W@Z ENDP		; wcscpy_s<260>
_TEXT	ENDS
END
