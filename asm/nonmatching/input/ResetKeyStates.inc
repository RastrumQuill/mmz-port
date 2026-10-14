	push {r4, r5, r6, lr}
	ldr r1, _08000EE0 @ =0x02004CA0
	movs r0, #0
	stm r1!, {r0}
	adds r4, r1, #0
	movs r6, #0x18
	movs r5, #1
_08000EC6:
	adds r0, r4, #0
	bl ResetKeyState
	strb r6, [r4, #0x14]
	movs r0, #4
	strb r0, [r4, #0x15]
	adds r4, #0x18
	subs r5, #1
	cmp r5, #0
	bge _08000EC6
	pop {r4, r5, r6}
	pop {r0}
	bx r0
	.align 2, 0
_08000EE0: .4byte 0x02004CA0
