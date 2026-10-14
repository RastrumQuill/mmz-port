	push {r4, r5, lr}
	movs r4, #0
	ldr r5, _08000F00 @ =0x02004CA4
_08000EEA:
	adds r0, r5, #0
	adds r1, r4, #0
	bl ReadKeyInput
	adds r5, #0x18
	adds r4, #1
	cmp r4, #1
	ble _08000EEA
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
_08000F00: .4byte 0x02004CA4
