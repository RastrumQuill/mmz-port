	.include "asm/macros.inc"
	.syntax unified
	.text

	thumb_func_start sub_080002DC
sub_080002DC: @ 0x080002DC
	push {r4, r5, r6, r7, lr}
	mov r4, r8
	mov r5, sb
	mov r6, sl
	mov r7, fp
	push {r4, r5, r6, r7}
	mov r4, sp
	str r4, [r3]
	mov lr, r1
	mov sp, r2
	pop {r4, r5, r6, r7}
	mov fp, r7
	mov sl, r6
	mov sb, r5
	mov r8, r4
	pop {r4, r5, r6, r7}
	bx lr
	.align 2, 0

	thumb_func_start sub_08000300
sub_08000300: @ 0x08000300
	push {r4, r5, r6, r7}
	mov r4, r8
	mov r5, sb
	mov r6, sl
	mov r7, fp
	push {r4, r5, r6, r7}
	mov r3, lr
	str r3, [r0]
	mov r3, sp
	str r3, [r1]
	mov sp, r2
	pop {r4, r5, r6, r7}
	mov fp, r7
	mov sl, r6
	mov sb, r5
	mov r8, r4
	pop {r4, r5, r6, r7}
	pop {r3}
	mov lr, r3
	bx lr

	thumb_func_start sub_08000328
sub_08000328: @ 0x08000328
	mov sp, r0
	pop {r4, r5, r6, r7}
	mov fp, r7
	mov sl, r6
	mov sb, r5
	mov r8, r4
	pop {r4, r5, r6, r7}
	pop {r3}
	mov lr, r3
	bx lr

	thumb_func_start AgbMain
AgbMain: @ 0x0800033C
	push {r4, lr}
	bl sub_080005BC
	bl sub_08000750
	bl sub_08000C1C
	bl sub_08000E98
	bl InitInput
	bl sub_08000FE8
	movs r1, #0x80
	lsls r1, r1, #0x13
	movs r0, #0x80
	strh r0, [r1]
	bl sub_08001434
	bl sub_0800162C
	bl sub_080018C8
	bl sub_08001AF8
	bl sub_08001BCC
	bl sub_08001C8C
	bl sub_08001CB8
	bl sub_08001D1C
	bl sub_08001D3C
	ldr r4, _080003F0 @ =0x020236EC
	movs r2, #0xb0
	lsls r2, r2, #3
	movs r3, #0xf0
	lsls r3, r3, #2
	adds r0, r4, #0
	movs r1, #0
	bl sub_080015D4
	adds r0, r4, #0
	bl sub_080BBE08
	ldr r2, _080003F4 @ =0x03000380
	ldr r0, _080003F8 @ =0x00000165
	adds r1, r2, r0
	ldrb r0, [r1]
	movs r0, #1
	strb r0, [r1]
	movs r3, #0xae
	lsls r3, r3, #1
	adds r1, r2, r3
	ldr r0, _080003FC @ =sub_080005A4
	str r0, [r1]
	ldr r0, _08000400 @ =0x04000006
	ldrh r0, [r0]
	movs r0, #0
	adds r3, #0xa
	adds r1, r2, r3
	strb r0, [r1]
	movs r0, #0xac
	lsls r0, r0, #1
	adds r1, r2, r0
	ldr r0, _08000404 @ =sub_080005B0
	str r0, [r1]
	ldr r0, _08000408 @ =0x02023680
	movs r1, #0
	bl sub_080BD390
	movs r0, #1
	bl sub_08000C28
	ldr r1, _0800040C @ =sub_08000414
	movs r0, #0
	bl sub_08000D10
	ldr r1, _08000410 @ =sub_080004B8
	movs r0, #2
	bl sub_08000D10
	bl sub_08000C54
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_080003F0: .4byte 0x020236EC
_080003F4: .4byte 0x03000380
_080003F8: .4byte 0x00000165
_080003FC: .4byte sub_080005A4
_08000400: .4byte 0x04000006
_08000404: .4byte sub_080005B0
_08000408: .4byte 0x02023680
_0800040C: .4byte sub_08000414
_08000410: .4byte sub_080004B8

	thumb_func_start sub_08000414
sub_08000414: @ 0x08000414
	push {r4, lr}
	ldr r0, _0800048C @ =0x03000380
	ldr r2, _08000490 @ =0x00000165
	adds r1, r0, r2
	ldrb r0, [r1]
	movs r4, #0
	movs r0, #1
	strb r0, [r1]
	bl sub_08000E9C
	bl ResetKeyStates
	ldr r2, _08000494 @ =0x030017A0
	ldr r3, _08000498 @ =0x00000402
	adds r0, r2, r3
	movs r1, #0x20
	strb r1, [r0]
	subs r3, #1
	adds r0, r2, r3
	strb r1, [r0]
	subs r3, #1
	adds r0, r2, r3
	strb r1, [r0]
	ldr r0, _0800049C @ =0x02004F70
	strh r4, [r0]
	ldr r1, _080004A0 @ =0x02004F80
	strh r4, [r1]
	movs r0, #0xff
	strb r0, [r1, #0xe]
	ldr r0, _080004A4 @ =0x02004F90
	strh r4, [r0]
	strh r4, [r2]
	bl sub_08001D6C
	bl sub_080BBE2C
	bl sub_080BBEB8
	ldr r2, _080004A8 @ =0x02004F30
	ldr r0, _080004AC @ =0x0000FFF8
	ldrh r1, [r2]
	ands r0, r1
	ldr r1, _080004B0 @ =0x0000F0FF
	ands r0, r1
	movs r3, #0x80
	lsls r3, r3, #1
	adds r1, r3, #0
	orrs r0, r1
	strh r0, [r2]
	str r4, [r2, #0xc]
	movs r0, #1
	bl sub_08000D3C
	ldr r0, _080004B4 @ =sub_080BD360
	bl sub_08000DFC
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800048C: .4byte 0x03000380
_08000490: .4byte 0x00000165
_08000494: .4byte 0x030017A0
_08000498: .4byte 0x00000402
_0800049C: .4byte 0x02004F70
_080004A0: .4byte 0x02004F80
_080004A4: .4byte 0x02004F90
_080004A8: .4byte 0x02004F30
_080004AC: .4byte 0x0000FFF8
_080004B0: .4byte 0x0000F0FF
_080004B4: .4byte sub_080BD360

	thumb_func_start sub_080004B8
sub_080004B8: @ 0x080004B8
	push {r4, r5, r6, r7, lr}
	mov r7, r8
	push {r7}
	mov r8, r0
	ldr r7, _08000584 @ =0x02004C70
	ldr r5, _08000588 @ =0x030004E5
	adds r6, r7, #2
	subs r4, r5, #1
_080004C8:
	bl sub_080BBEE4
	bl sub_080018F4
	bl sub_08000EA0
	movs r1, #0
	ldrh r0, [r6]
	cmp r0, #0
	bne _080004DE
	movs r1, #1
_080004DE:
	movs r0, #0
	strh r1, [r6]
	strh r0, [r7]
	bl sub_08000FF8
_080004E8:
	ldrb r1, [r4]
	ldrb r0, [r5]
	cmp r1, r0
	blo _080004E8
	ldr r0, _0800058C @ =0x04000006
	ldrh r0, [r0]
	cmp r0, #0xa1
	bne _080004E8
	ldrb r0, [r4]
	movs r0, #0
	strb r0, [r4]
	bl sub_08000EA4
	bl PollKeyInput
	bl sub_080BBF70
	movs r2, #0x80
	lsls r2, r2, #0x13
	ldrh r0, [r2]
	ldr r3, _08000590 @ =0x0000FF7F
	adds r1, r3, #0
	ands r0, r1
	strh r0, [r2]
	bl sub_08001680
	bl sub_08001B68
	bl sub_08001C14
	bl sub_08001C98
	bl sub_08001CC8
	bl sub_08001D28
	bl sub_0800146C
	bl sub_08000840
	ldr r0, _08000594 @ =0x02004CE0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08000578
	ldr r0, _08000598 @ =0x02004CA0
	ldrh r1, [r0, #4]
	movs r0, #0xc
	ands r0, r1
	cmp r0, #0xc
	bne _08000578
	movs r0, #1
	ands r0, r1
	cmp r0, #0
	beq _08000578
	movs r0, #2
	ands r0, r1
	cmp r0, #0
	beq _08000578
	movs r0, #0
	bl sub_08000DE0
	movs r0, #1
	bl sub_08000DE0
	ldr r0, _0800059C @ =0x02023680
	movs r1, #1
	bl sub_080BD390
	movs r0, #0
	ldr r1, _080005A0 @ =sub_08000414
	bl sub_08000D10
_08000578:
	mov r0, r8
	movs r1, #1
	bl sub_08000D80
	b _080004C8
	.align 2, 0
_08000584: .4byte 0x02004C70
_08000588: .4byte 0x030004E5
_0800058C: .4byte 0x04000006
_08000590: .4byte 0x0000FF7F
_08000594: .4byte 0x02004CE0
_08000598: .4byte 0x02004CA0
_0800059C: .4byte 0x02023680
_080005A0: .4byte sub_08000414

	thumb_func_start sub_080005A4
sub_080005A4: @ 0x080005A4
	push {lr}
	bl sub_08001D88
	pop {r0}
	bx r0
	.align 2, 0

	thumb_func_start sub_080005B0
sub_080005B0: @ 0x080005B0
	push {lr}
	bl sub_08001DBC
	pop {r0}
	bx r0
	.align 2, 0

	thumb_func_start sub_080005BC
sub_080005BC: @ 0x080005BC
	sub sp, #4
	ldr r1, _08000600 @ =0x04000204
	ldr r2, _08000604 @ =0x000045B7
	adds r0, r2, #0
	strh r0, [r1]
	movs r2, #0
	str r2, [sp]
	ldr r0, _08000608 @ =0x040000D4
	mov r3, sp
	str r3, [r0]
	movs r1, #0xc0
	lsls r1, r1, #0x12
	str r1, [r0, #4]
	ldr r1, _0800060C @ =0x85001F80
	str r1, [r0, #8]
	ldr r1, [r0, #8]
	str r2, [sp]
	str r3, [r0]
	movs r1, #0x80
	lsls r1, r1, #0x12
	str r1, [r0, #4]
	ldr r1, _08000610 @ =0x85010000
	str r1, [r0, #8]
	ldr r0, [r0, #8]
	ldr r0, _08000614 @ =0x02002C70
	ldr r3, _08000618 @ =0x00002002
	adds r1, r0, r3
	strh r2, [r1]
	movs r1, #0x80
	lsls r1, r1, #6
	adds r0, r0, r1
	strh r2, [r0]
	add sp, #4
	bx lr
	.align 2, 0
_08000600: .4byte 0x04000204
_08000604: .4byte 0x000045B7
_08000608: .4byte 0x040000D4
_0800060C: .4byte 0x85001F80
_08000610: .4byte 0x85010000
_08000614: .4byte 0x02002C70
_08000618: .4byte 0x00002002

	thumb_func_start sub_0800061C
	.global sub_0800061C
sub_0800061C: @ 0x0800061C
	push {r4, r5, lr}
	ldr r2, _08000648 @ =0x02002C70
	ldr r3, _0800064C @ =0x00002002
	adds r1, r2, r3
	ldrh r1, [r1]
	lsls r3, r1, #0xc
	movs r1, #0x80
	lsls r1, r1, #6
	adds r5, r2, r1
	ldrh r4, [r5]
	lsls r1, r4, #2
	adds r1, r1, r2
	adds r3, r3, r1
	movs r1, #0x80
	lsls r1, r1, #3
	subs r1, r1, r4
	adds r0, #3
	lsrs r0, r0, #2
	cmp r1, r0
	bhs _08000650
	movs r0, #0
	b _08000656
	.align 2, 0
_08000648: .4byte 0x02002C70
_0800064C: .4byte 0x00002002
_08000650:
	adds r0, r4, r0
	strh r0, [r5]
	adds r0, r3, #0
_08000656:
	pop {r4, r5}
	pop {r1}
	bx r1

	thumb_func_start sub_0800065C
	.global sub_0800065C
sub_0800065C: @ 0x0800065C
	push {r4, r5, r6, r7, lr}
	sub sp, #8
	adds r6, r1, #0
	adds r5, r2, #0
	lsls r0, r0, #0x10
	lsrs r1, r0, #0x10
	adds r7, r1, #0
	movs r0, #2
	rsbs r0, r0, #0
	ands r5, r0
	cmp r5, #0
	beq _080006CA
	ands r6, r0
	movs r0, #2
	ands r0, r6
	cmp r0, #0
	beq _08000688
	strh r1, [r6]
	subs r5, #2
	cmp r5, #0
	beq _080006CA
	adds r6, #2
_08000688:
	cmp r5, #0x20
	bls _080006B6
	lsls r0, r1, #0x10
	orrs r0, r1
	str r0, [sp]
	movs r4, #0x20
	rsbs r4, r4, #0
	ands r4, r5
	lsrs r2, r4, #2
	ldr r0, _080006D4 @ =0x001FFFFF
	ands r2, r0
	movs r0, #0x80
	lsls r0, r0, #0x11
	orrs r2, r0
	mov r0, sp
	adds r1, r6, #0
	bl sub_080C88EC
	adds r6, r6, r4
	movs r0, #0x1f
	ands r5, r0
	cmp r5, #0
	beq _080006CA
_080006B6:
	add r0, sp, #4
	strh r7, [r0]
	lsls r2, r5, #0xa
	lsrs r2, r2, #0xb
	movs r1, #0x80
	lsls r1, r1, #0x11
	orrs r2, r1
	adds r1, r6, #0
	bl sub_080C88F0
_080006CA:
	add sp, #8
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
_080006D4: .4byte 0x001FFFFF

	thumb_func_start sub_080006D8
	.global sub_080006D8
sub_080006D8: @ 0x080006D8
	push {r4, r5, r6, lr}
	adds r5, r0, #0
	adds r6, r1, #0
	adds r4, r2, #0
	movs r0, #2
	rsbs r0, r0, #0
	ands r4, r0
	cmp r4, #0
	beq _08000746
	ands r5, r0
	ands r6, r0
	movs r1, #2
	adds r0, r5, #0
	ands r0, r1
	cmp r0, #0
	bne _08000700
	adds r0, r6, #0
	ands r0, r1
	cmp r0, #0
	beq _0800070E
_08000700:
	lsls r2, r4, #0xa
	lsrs r2, r2, #0xb
	adds r0, r5, #0
	adds r1, r6, #0
	bl sub_080C88F0
	b _08000746
_0800070E:
	cmp r4, #0x20
	bls _0800072E
	movs r2, #0x20
	rsbs r2, r2, #0
	ands r2, r4
	lsrs r2, r2, #2
	ldr r0, _0800074C @ =0x001FFFFF
	ands r2, r0
	adds r0, r5, #0
	adds r1, r6, #0
	bl sub_080C88EC
	movs r0, #0x1f
	ands r0, r4
	cmp r0, #0
	beq _08000746
_0800072E:
	movs r0, #0x20
	rsbs r0, r0, #0
	ands r0, r4
	adds r5, r5, r0
	adds r6, r6, r0
	movs r2, #0x1f
	ands r2, r4
	lsrs r2, r2, #1
	adds r0, r5, #0
	adds r1, r6, #0
	bl sub_080C88F0
_08000746:
	pop {r4, r5, r6}
	pop {r0}
	bx r0
	.align 2, 0
_0800074C: .4byte 0x001FFFFF

	thumb_func_start sub_08000750
sub_08000750: @ 0x08000750
	push {r4, lr}
	ldr r4, _08000804 @ =0x080001BC
	ldr r0, _08000808 @ =0x030003B8
	mov ip, r0
	ldr r3, _0800080C @ =0x080C90A4
	mov r2, ip
	subs r2, #0x38
	movs r1, #0xd
_08000760:
	ldm r3!, {r0}
	stm r2!, {r0}
	subs r1, #1
	cmp r1, #0
	bge _08000760
	ldr r0, _08000810 @ =0x040000D4
	str r4, [r0]
	mov r1, ip
	str r1, [r0, #4]
	ldr r1, _08000814 @ =0x84000048
	str r1, [r0, #8]
	ldr r0, [r0, #8]
	ldr r0, _08000818 @ =0x03007FFC
	mov r4, ip
	str r4, [r0]
	movs r0, #0x90
	lsls r0, r0, #1
	add r0, ip
	movs r1, #0
	str r1, [r0]
	movs r0, #0x92
	lsls r0, r0, #1
	add r0, ip
	str r1, [r0]
	movs r0, #0x97
	lsls r0, r0, #1
	add r0, ip
	strb r1, [r0]
	ldr r0, _0800081C @ =0x04000208
	movs r3, #1
	strh r3, [r0]
	ldr r2, _08000820 @ =0x04000200
	ldr r4, _08000824 @ =0x00002005
	adds r0, r4, #0
	strh r0, [r2]
	ldr r2, _08000828 @ =0x04000004
	movs r0, #0x28
	strh r0, [r2]
	ldr r2, _0800082C @ =0x0000012D
	add r2, ip
	ldrb r0, [r2]
	strb r3, [r2]
	movs r0, #0x96
	lsls r0, r0, #1
	add r0, ip
	ldrb r2, [r0]
	strb r1, [r0]
	movs r0, #0x94
	lsls r0, r0, #1
	add r0, ip
	str r1, [r0]
	ldr r0, _08000830 @ =0x0000012F
	add r0, ip
	strb r1, [r0]
	movs r2, #0x9c
	lsls r2, r2, #1
	add r2, ip
	movs r0, #0xa2
	lsls r0, r0, #1
	add r0, ip
	str r1, [r0]
	str r1, [r2]
	movs r2, #0xa8
	lsls r2, r2, #1
	add r2, ip
	movs r0, #0xb0
	lsls r0, r0, #1
	add r0, ip
	str r1, [r0]
	str r1, [r2]
	movs r2, #0xb6
	lsls r2, r2, #1
	add r2, ip
	movs r0, #0xbe
	lsls r0, r0, #1
	add r0, ip
	str r1, [r0]
	str r1, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_08000804: .4byte _080001BC
_08000808: .4byte 0x030003B8
_0800080C: .4byte gUnk_080C90A4
_08000810: .4byte 0x040000D4
_08000814: .4byte 0x84000048
_08000818: .4byte 0x03007FFC
_0800081C: .4byte 0x04000208
_08000820: .4byte 0x04000200
_08000824: .4byte 0x00002005
_08000828: .4byte 0x04000004
_0800082C: .4byte 0x0000012D
_08000830: .4byte 0x0000012F
_08000834:
	.byte 0x01, 0x49, 0x01, 0x20, 0x08, 0x80, 0x70, 0x47, 0x08, 0x02, 0x00, 0x04

	thumb_func_start sub_08000840
sub_08000840: @ 0x08000840
	push {r4, r5, lr}
	ldr r5, _08000894 @ =0x03000500
	adds r1, r5, #0
	subs r1, #0x18
	adds r0, r5, #0
	subs r0, #0xc
	ldr r0, [r0]
	str r0, [r1]
	adds r1, #4
	adds r0, r5, #0
	subs r0, #8
	ldr r0, [r0]
	str r0, [r1]
	adds r2, r5, #0
	subs r2, #0x10
	subs r1, r5, #4
	ldr r0, [r1]
	str r0, [r2]
	movs r4, #0
	str r4, [r1]
	bl sub_0800099C
	ldr r0, [r5, #0x10]
	str r0, [r5]
	ldr r0, [r5, #0x14]
	str r0, [r5, #4]
	ldr r0, [r5, #0x18]
	str r0, [r5, #8]
	str r4, [r5, #0x18]
	adds r5, #0x1c
	ldr r0, [r5, #0x10]
	str r0, [r5]
	ldr r0, [r5, #0x14]
	str r0, [r5, #4]
	ldr r0, [r5, #0x18]
	str r0, [r5, #8]
	str r4, [r5, #0x18]
	bl sub_08000A54
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
_08000894: .4byte 0x03000500

	thumb_func_start sub_08000898
sub_08000898: @ 0x08000898
	push {r4, r5, lr}
	ldr r3, _080008EC @ =0x03000380
	ldr r0, _080008F0 @ =0x00000167
	adds r4, r3, r0
	ldrb r1, [r4]
	movs r5, #1
	movs r2, #1
	adds r0, r2, #0
	ands r0, r1
	cmp r0, #0
	bne _080008E4
	adds r0, r5, #0
	orrs r0, r1
	strb r0, [r4]
	ldr r0, _080008F4 @ =0x03007FF8
	strh r2, [r0]
	movs r0, #0xb2
	lsls r0, r0, #1
	adds r1, r3, r0
	ldrb r0, [r1]
	adds r0, #1
	ldrb r2, [r1]
	strb r0, [r1]
	movs r1, #0xac
	lsls r1, r1, #1
	adds r0, r3, r1
	ldr r0, [r0]
	cmp r0, #0
	beq _080008D6
	bl sub_080C8A94
_080008D6:
	bl sub_0800099C
	bl sub_08000A54
	ldrb r0, [r4]
	eors r0, r5
	strb r0, [r4]
_080008E4:
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
_080008EC: .4byte 0x03000380
_080008F0: .4byte 0x00000167
_080008F4: .4byte 0x03007FF8

	thumb_func_start sub_080008F8
sub_080008F8: @ 0x080008F8
	push {lr}
	sub sp, #4
	mov r1, sp
	ldr r0, _08000968 @ =0x04000006
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r2, _0800096C @ =0x03000380
	ldr r0, _08000970 @ =0x00000167
	adds r3, r2, r0
	ldrb r1, [r3]
	movs r0, #2
	ands r0, r1
	cmp r0, #0
	bne _0800098A
	movs r0, #2
	orrs r0, r1
	strb r0, [r3]
	mov r0, sp
	ldrh r0, [r0]
	cmp r0, #0
	bne _0800092E
	movs r3, #0xb0
	lsls r3, r3, #1
	adds r1, r2, r3
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
_0800092E:
	mov r0, sp
	movs r3, #0xb3
	lsls r3, r3, #1
	adds r1, r2, r3
	ldrh r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0800094E
	movs r1, #0xae
	lsls r1, r1, #1
	adds r0, r2, r1
	ldr r0, [r0]
	cmp r0, #0
	beq _0800094E
	bl sub_080C8A94
_0800094E:
	mov r0, sp
	ldr r1, _0800096C @ =0x03000380
	movs r3, #0xb3
	lsls r3, r3, #1
	adds r2, r1, r3
	ldrb r2, [r2]
	ldrh r0, [r0]
	adds r3, r1, #0
	cmp r0, r2
	bhs _08000978
	ldr r0, _08000974 @ =0x04000005
	strb r2, [r0]
	b _0800097E
	.align 2, 0
_08000968: .4byte 0x04000006
_0800096C: .4byte 0x03000380
_08000970: .4byte 0x00000167
_08000974: .4byte 0x04000005
_08000978:
	ldr r1, _08000990 @ =0x04000005
	movs r0, #0
	strb r0, [r1]
_0800097E:
	ldr r0, _08000994 @ =0x00000167
	adds r1, r3, r0
	movs r0, #2
	ldrb r2, [r1]
	eors r0, r2
	strb r0, [r1]
_0800098A:
	add sp, #4
	pop {r0}
	bx r0
	.align 2, 0
_08000990: .4byte 0x04000005
_08000994: .4byte 0x00000167

	thumb_func_start sub_08000998
sub_08000998: @ 0x08000998
	bx lr
	.align 2, 0

	thumb_func_start sub_0800099C
sub_0800099C: @ 0x0800099C
	push {r4, r5, lr}
	ldr r2, _080009E4 @ =0x040000B8
	movs r0, #0
	str r0, [r2]
	ldr r1, _080009E8 @ =0x03000380
	movs r3, #0xb8
	lsls r3, r3, #1
	adds r0, r1, r3
	ldr r3, [r0]
	cmp r3, #0
	beq _08000A48
	movs r4, #0xb4
	lsls r4, r4, #1
	adds r0, r1, r4
	ldr r5, [r0]
	adds r4, #4
	adds r0, r1, r4
	ldr r4, [r0]
	ldr r0, _080009EC @ =0x040000B0
	str r5, [r0]
	adds r0, #4
	str r4, [r0]
	ldr r0, _080009F0 @ =0xCDFFFFFF
	ands r0, r3
	str r0, [r2]
	ldr r0, [r2]
	ldr r2, _080009F4 @ =0x0000FFFF
	ands r2, r3
	movs r0, #0x80
	lsls r0, r0, #0x13
	ands r0, r3
	cmp r0, #0
	beq _080009F8
	lsls r2, r2, #2
	b _080009FA
	.align 2, 0
_080009E4: .4byte 0x040000B8
_080009E8: .4byte 0x03000380
_080009EC: .4byte 0x040000B0
_080009F0: .4byte 0xCDFFFFFF
_080009F4: .4byte 0x0000FFFF
_080009F8:
	lsls r2, r2, #1
_080009FA:
	movs r1, #0xc0
	lsls r1, r1, #0xf
	ands r1, r3
	cmp r1, #0
	bne _08000A06
	adds r4, r4, r2
_08000A06:
	movs r0, #0x80
	lsls r0, r0, #0xe
	cmp r1, r0
	bne _08000A10
	subs r4, r4, r2
_08000A10:
	movs r1, #0xc0
	lsls r1, r1, #0x11
	ands r1, r3
	cmp r1, #0
	bne _08000A1C
	adds r5, r5, r2
_08000A1C:
	movs r0, #0x80
	lsls r0, r0, #0x10
	cmp r1, r0
	bne _08000A26
	subs r5, r5, r2
_08000A26:
	ldr r2, _08000A50 @ =0x040000B0
	ldr r0, [r2]
	movs r1, #0x80
	lsls r1, r1, #0x18
	cmp r0, #0
	bge _08000A3A
_08000A32:
	ldr r0, [r2]
	ands r0, r1
	cmp r0, #0
	bne _08000A32
_08000A3A:
	ldr r0, _08000A50 @ =0x040000B0
	str r5, [r0]
	adds r0, #4
	str r4, [r0]
	adds r0, #4
	str r3, [r0]
	ldr r0, [r0]
_08000A48:
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
_08000A50: .4byte 0x040000B0

	thumb_func_start sub_08000A54
sub_08000A54: @ 0x08000A54
	push {r4, r5, lr}
	movs r5, #0
	ldr r4, _08000AC0 @ =0x03000500
	ldr r0, [r4, #8]
	cmp r0, #0
	beq _08000A6C
	ldr r0, [r4]
	str r0, [r4, #0xc]
	adds r0, r4, #0
	bl sub_08000BE8
	movs r5, #1
_08000A6C:
	adds r1, r4, #0
	adds r1, #0x1c
	ldr r0, [r1, #8]
	cmp r0, #0
	beq _08000A8A
	ldr r0, [r4, #0x1c]
	str r0, [r1, #0xc]
	adds r0, r1, #0
	bl sub_08000BE8
	lsls r0, r5, #0x10
	movs r1, #0x80
	lsls r1, r1, #0xa
	adds r0, r0, r1
	lsrs r5, r0, #0x10
_08000A8A:
	lsls r0, r5, #0x10
	asrs r3, r0, #0x10
	cmp r3, #0
	beq _08000AB8
	ldr r2, _08000AC4 @ =0x04000004
	ldrh r0, [r2]
	movs r1, #0x10
	orrs r0, r1
	strh r0, [r2]
	ldrh r0, [r2]
	ldr r0, _08000AC8 @ =0xFFFFFE80
	adds r2, r4, r0
	ldr r1, _08000ACC @ =0x08290BC4
	lsls r0, r3, #2
	adds r0, r0, r1
	ldr r0, [r0]
	str r0, [r2, #4]
	ldr r2, _08000AD0 @ =0x04000200
	ldrh r0, [r2]
	movs r1, #2
	orrs r0, r1
	strh r0, [r2]
	ldrh r0, [r2]
_08000AB8:
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
_08000AC0: .4byte 0x03000500
_08000AC4: .4byte 0x04000004
_08000AC8: .4byte 0xFFFFFE80
_08000ACC: .4byte gUnk_08290BC4
_08000AD0: .4byte 0x04000200

	thumb_func_start sub_08000AD4
sub_08000AD4: @ 0x08000AD4
	push {lr}
	sub sp, #4
	mov r1, sp
	ldr r0, _08000B14 @ =0x04000006
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, sp
	ldrh r0, [r0]
	cmp r0, #0x9f
	bhi _08000B0E
	ldr r0, _08000B18 @ =0x03000500
	bl sub_08000BE8
	mov r0, sp
	ldrh r0, [r0]
	cmp r0, #0x9f
	bne _08000B0E
	ldr r1, _08000B1C @ =0x04000004
	ldrh r2, [r1]
	ldr r0, _08000B20 @ =0x0000FFEF
	ands r0, r2
	strh r0, [r1]
	ldrh r0, [r1]
	ldr r1, _08000B24 @ =0x04000200
	ldrh r2, [r1]
	ldr r0, _08000B28 @ =0x0000FFFD
	ands r0, r2
	strh r0, [r1]
	ldrh r0, [r1]
_08000B0E:
	add sp, #4
	pop {r0}
	bx r0
	.align 2, 0
_08000B14: .4byte 0x04000006
_08000B18: .4byte 0x03000500
_08000B1C: .4byte 0x04000004
_08000B20: .4byte 0x0000FFEF
_08000B24: .4byte 0x04000200
_08000B28: .4byte 0x0000FFFD

	thumb_func_start sub_08000B2C
sub_08000B2C: @ 0x08000B2C
	push {lr}
	sub sp, #4
	mov r1, sp
	ldr r0, _08000B6C @ =0x04000006
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, sp
	ldrh r0, [r0]
	cmp r0, #0x9f
	bhi _08000B66
	ldr r0, _08000B70 @ =0x0300051C
	bl sub_08000BE8
	mov r0, sp
	ldrh r0, [r0]
	cmp r0, #0x9f
	bne _08000B66
	ldr r1, _08000B74 @ =0x04000004
	ldrh r2, [r1]
	ldr r0, _08000B78 @ =0x0000FFEF
	ands r0, r2
	strh r0, [r1]
	ldrh r0, [r1]
	ldr r1, _08000B7C @ =0x04000200
	ldrh r2, [r1]
	ldr r0, _08000B80 @ =0x0000FFFD
	ands r0, r2
	strh r0, [r1]
	ldrh r0, [r1]
_08000B66:
	add sp, #4
	pop {r0}
	bx r0
	.align 2, 0
_08000B6C: .4byte 0x04000006
_08000B70: .4byte 0x0300051C
_08000B74: .4byte 0x04000004
_08000B78: .4byte 0x0000FFEF
_08000B7C: .4byte 0x04000200
_08000B80: .4byte 0x0000FFFD

	thumb_func_start sub_08000B84
sub_08000B84: @ 0x08000B84
	push {r4, lr}
	sub sp, #4
	mov r1, sp
	ldr r0, _08000BD0 @ =0x04000006
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, sp
	ldrh r0, [r0]
	cmp r0, #0x9f
	bhi _08000BC8
	ldr r4, _08000BD4 @ =0x03000500
	adds r0, r4, #0
	bl sub_08000BE8
	adds r4, #0x1c
	adds r0, r4, #0
	bl sub_08000BE8
	mov r0, sp
	ldrh r0, [r0]
	cmp r0, #0x9f
	bne _08000BC8
	ldr r1, _08000BD8 @ =0x04000004
	ldrh r2, [r1]
	ldr r0, _08000BDC @ =0x0000FFEF
	ands r0, r2
	strh r0, [r1]
	ldrh r0, [r1]
	ldr r1, _08000BE0 @ =0x04000200
	ldrh r2, [r1]
	ldr r0, _08000BE4 @ =0x0000FFFD
	ands r0, r2
	strh r0, [r1]
	ldrh r0, [r1]
_08000BC8:
	add sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_08000BD0: .4byte 0x04000006
_08000BD4: .4byte 0x03000500
_08000BD8: .4byte 0x04000004
_08000BDC: .4byte 0x0000FFEF
_08000BE0: .4byte 0x04000200
_08000BE4: .4byte 0x0000FFFD

	thumb_func_start sub_08000BE8
sub_08000BE8: @ 0x08000BE8
	push {r4, r5, r6, lr}
	adds r4, r0, #0
	ldr r2, [r4, #0xc]
	ldr r3, [r4, #4]
	ldrb r5, [r4, #0xb]
	ldrb r0, [r4, #0xa]
	ldrh r1, [r4, #8]
	cmp r1, #0
	beq _08000C14
	lsls r0, r0, #0x18
	asrs r6, r0, #0x17
	lsls r0, r5, #0x18
	asrs r5, r0, #0x17
_08000C02:
	ldrh r0, [r2]
	strh r0, [r3]
	adds r3, r3, r6
	adds r2, r2, r5
	subs r0, r1, #1
	lsls r0, r0, #0x10
	lsrs r1, r0, #0x10
	cmp r1, #0
	bne _08000C02
_08000C14:
	str r2, [r4, #0xc]
	pop {r4, r5, r6}
	pop {r0}
	bx r0

	thumb_func_start sub_08000C1C
sub_08000C1C: @ 0x08000C1C
	ldr r1, _08000C24 @ =0x02004C74
	movs r0, #0
	str r0, [r1]
	bx lr
	.align 2, 0
_08000C24: .4byte 0x02004C74

	thumb_func_start sub_08000C28
sub_08000C28: @ 0x08000C28
	ldr r3, _08000C4C @ =0x03001748
	adds r1, r3, #0
	subs r1, #8
	movs r2, #0
	str r2, [r1]
	subs r1, r3, #4
	str r0, [r1]
	ldr r0, _08000C50 @ =0x02000000
	str r2, [r0]
	movs r1, #1
	movs r0, #2
_08000C3E:
	strb r1, [r3]
	subs r0, #1
	adds r3, #0x18
	cmp r0, #0
	bge _08000C3E
	bx lr
	.align 2, 0
_08000C4C: .4byte 0x03001748
_08000C50: .4byte 0x02000000

	thumb_func_start sub_08000C54
sub_08000C54: @ 0x08000C54
	push {r4, r5, r6, r7, lr}
	ldr r6, _08000CD8 @ =0x03000540
	ldr r0, _08000CDC @ =0x00001250
	adds r5, r6, r0
	ldr r1, _08000CE0 @ =0x00001204
	adds r7, r6, r1
_08000C60:
	movs r0, #0
	str r0, [r5]
	ldr r2, _08000CE4 @ =0x00001208
	adds r4, r6, r2
_08000C68:
	ldrb r1, [r4]
	movs r0, #9
	ands r0, r1
	cmp r0, #0
	bne _08000CB2
	movs r0, #4
	ands r0, r1
	cmp r0, #0
	beq _08000C92
	ldrh r1, [r4, #2]
	movs r2, #2
	ldrsh r0, [r4, r2]
	cmp r0, #0
	beq _08000C8E
	subs r0, r1, #1
	strh r0, [r4, #2]
	lsls r0, r0, #0x10
	cmp r0, #0
	bne _08000C92
_08000C8E:
	movs r0, #2
	strb r0, [r4]
_08000C92:
	ldrb r0, [r4]
	cmp r0, #2
	bne _08000CB2
	ldrb r0, [r4, #1]
	cmp r0, #0
	beq _08000CA6
	ldr r0, [r5]
	ldr r1, [r4, #4]
	bl sub_08000D10
_08000CA6:
	ldr r1, [r4, #4]
	ldr r2, [r4, #8]
	adds r0, r4, #0
	ldr r3, _08000CE8 @ =0x02000000
	bl sub_080002DC
_08000CB2:
	ldr r0, [r5]
	adds r0, #1
	str r0, [r5]
	adds r4, #0x18
	cmp r0, #2
	bls _08000C68
	movs r1, #0x90
	lsls r1, r1, #5
	adds r0, r6, r1
	ldr r1, [r0]
	adds r1, #1
	str r1, [r0]
	ldr r0, [r7]
	cmp r0, #0
	bne _08000C60
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
_08000CD8: .4byte 0x03000540
_08000CDC: .4byte 0x00001250
_08000CE0: .4byte 0x00001204
_08000CE4: .4byte 0x00001208
_08000CE8: .4byte 0x02000000

	thumb_func_start sub_08000CEC
sub_08000CEC: @ 0x08000CEC
	push {r4, r5, lr}
	ldr r5, _08000D0C @ =0x03001748
	movs r4, #0
_08000CF2:
	ldrb r0, [r5]
	cmp r0, #1
	beq _08000CFE
	adds r0, r4, #0
	bl sub_08000DE0
_08000CFE:
	adds r4, #1
	adds r5, #0x18
	cmp r4, #2
	ble _08000CF2
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
_08000D0C: .4byte 0x03001748

	thumb_func_start sub_08000D10
	.global sub_08000D10
sub_08000D10: @ 0x08000D10
	lsls r2, r0, #1
	adds r2, r2, r0
	lsls r3, r2, #3
	ldr r0, _08000D34 @ =0x03001748
	adds r3, r3, r0
	str r1, [r3, #4]
	lsls r2, r2, #9
	ldr r1, _08000D38 @ =0xFFFFF3D8
	adds r0, r0, r1
	adds r2, r2, r0
	str r2, [r3, #8]
	movs r1, #0
	movs r0, #0
	strh r0, [r3, #2]
	strb r1, [r3, #1]
	movs r0, #2
	strb r0, [r3]
	bx lr
	.align 2, 0
_08000D34: .4byte 0x03001748
_08000D38: .4byte 0xFFFFF3D8

	thumb_func_start sub_08000D3C
	.global sub_08000D3C
sub_08000D3C: @ 0x08000D3C
	push {lr}
	adds r3, r0, #0
	ldr r2, _08000D70 @ =0x03000540
	ldr r1, _08000D74 @ =0x00001250
	adds r0, r2, r1
	ldr r1, [r0]
	lsls r0, r1, #1
	adds r0, r0, r1
	lsls r0, r0, #3
	ldr r1, _08000D78 @ =0x00001208
	adds r2, r2, r1
	adds r1, r0, r2
	cmp r3, #0
	beq _08000D6A
	strh r3, [r1, #2]
	movs r0, #4
	strb r0, [r1]
	adds r0, r1, #4
	adds r1, #8
	ldr r2, _08000D7C @ =0x02000000
	ldr r2, [r2]
	bl sub_08000300
_08000D6A:
	pop {r0}
	bx r0
	.align 2, 0
_08000D70: .4byte 0x03000540
_08000D74: .4byte 0x00001250
_08000D78: .4byte 0x00001208
_08000D7C: .4byte 0x02000000

	thumb_func_start sub_08000D80
sub_08000D80: @ 0x08000D80
	push {lr}
	adds r2, r0, #0
	cmp r1, #0
	beq _08000D9C
	strh r1, [r2, #2]
	movs r0, #4
	strb r0, [r2]
	adds r0, r2, #4
	adds r1, r2, #0
	adds r1, #8
	ldr r2, _08000DA0 @ =0x02000000
	ldr r2, [r2]
	bl sub_08000300
_08000D9C:
	pop {r0}
	bx r0
	.align 2, 0
_08000DA0: .4byte 0x02000000

	thumb_func_start sub_08000DA4
	.global sub_08000DA4
sub_08000DA4: @ 0x08000DA4
	push {lr}
	ldr r2, _08000DD0 @ =0x03000540
	ldr r1, _08000DD4 @ =0x00001250
	adds r0, r2, r1
	ldr r0, [r0]
	lsls r1, r0, #1
	adds r1, r1, r0
	lsls r1, r1, #3
	ldr r0, _08000DD8 @ =0x00001208
	adds r2, r2, r0
	adds r1, r1, r2
	movs r0, #1
	strb r0, [r1]
	adds r0, r1, #4
	adds r1, #8
	ldr r2, _08000DDC @ =0x02000000
	ldr r2, [r2]
	bl sub_08000300
	pop {r0}
	bx r0
	.align 2, 0
_08000DD0: .4byte 0x03000540
_08000DD4: .4byte 0x00001250
_08000DD8: .4byte 0x00001208
_08000DDC: .4byte 0x02000000

	thumb_func_start sub_08000DE0
sub_08000DE0: @ 0x08000DE0
	lsls r1, r0, #1
	adds r1, r1, r0
	lsls r1, r1, #3
	ldr r0, _08000DF8 @ =0x03001748
	adds r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #1
	beq _08000DF4
	movs r0, #1
	strb r0, [r1]
_08000DF4:
	bx lr
	.align 2, 0
_08000DF8: .4byte 0x03001748

	thumb_func_start sub_08000DFC
sub_08000DFC: @ 0x08000DFC
	push {lr}
	ldr r3, _08000E24 @ =0x03000540
	ldr r2, _08000E28 @ =0x00001250
	adds r1, r3, r2
	ldr r2, [r1]
	lsls r1, r2, #1
	adds r1, r1, r2
	lsls r1, r1, #3
	ldr r2, _08000E2C @ =0x00001208
	adds r3, r3, r2
	adds r1, r1, r3
	movs r2, #1
	strb r2, [r1, #1]
	str r0, [r1, #4]
	ldr r0, _08000E30 @ =0x02000000
	ldr r0, [r0]
	bl sub_08000328
	pop {r0}
	bx r0
	.align 2, 0
_08000E24: .4byte 0x03000540
_08000E28: .4byte 0x00001250
_08000E2C: .4byte 0x00001208
_08000E30: .4byte 0x02000000
_08000E34:
	.byte 0x41, 0x00, 0x09, 0x18, 0xC9, 0x00, 0x04, 0x48, 0x09, 0x18, 0x0A, 0x78
	.byte 0x01, 0x2A, 0x02, 0xD0, 0x08, 0x20, 0x10, 0x43, 0x08, 0x70, 0x70, 0x47, 0x48, 0x17, 0x00, 0x03
	.byte 0x41, 0x00, 0x09, 0x18, 0xC9, 0x00, 0x06, 0x48, 0x09, 0x18, 0x0A, 0x78, 0x01, 0x2A, 0x06, 0xD0
	.byte 0x08, 0x20, 0x10, 0x40, 0x00, 0x28, 0x02, 0xD0, 0xF7, 0x20, 0x10, 0x40, 0x08, 0x70, 0x70, 0x47
	.byte 0x48, 0x17, 0x00, 0x03

	thumb_func_start sub_08000E74
	.global sub_08000E74
sub_08000E74: @ 0x08000E74
	push {r4, lr}
	movs r2, #0
	adds r4, r0, #0
	adds r4, #0xc
	movs r3, #0
	adds r1, r0, #0
	adds r1, #0x10
_08000E82:
	adds r0, r4, r2
	strb r3, [r0]
	strh r3, [r1]
	adds r1, #2
	adds r2, #1
	cmp r2, #3
	ble _08000E82
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0

	thumb_func_start sub_08000E98
sub_08000E98: @ 0x08000E98
	bx lr
	.align 2, 0

	thumb_func_start sub_08000E9C
sub_08000E9C: @ 0x08000E9C
	bx lr
	.align 2, 0

	thumb_func_start sub_08000EA0
sub_08000EA0: @ 0x08000EA0
	bx lr
	.align 2, 0

	thumb_func_start sub_08000EA4
sub_08000EA4: @ 0x08000EA4
	bx lr
	.align 2, 0

