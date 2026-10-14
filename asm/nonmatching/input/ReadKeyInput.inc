	push {r4, r5, r6, r7, lr}
	adds r3, r0, #0
	ldrh r0, [r3]
	strh r0, [r3, #2]
	ldr r0, _08000F28 @ =0x02004CA0
	ldr r0, [r0]
	cmp r0, #1
	bne _08000F3E
	ldr r0, _08000F2C @ =0x02004C80
	ldrh r2, [r0]
	adds r4, r0, #0
	cmp r2, #1
	bne _08000F3E
	ldrb r0, [r4, #2]
	cmp r0, r1
	bne _08000F30
	strh r2, [r3, #8]
	b _08000F34
	.align 2, 0
_08000F28: .4byte 0x02004CA0
_08000F2C: .4byte 0x02004C80
_08000F30:
	movs r0, #2
	strh r0, [r3, #8]
_08000F34:
	lsls r0, r1, #1
	adds r1, r4, #0
	adds r1, #0xc
	adds r0, r0, r1
	b _08000F4E
_08000F3E:
	cmp r1, #0
	beq _08000F48
	movs r0, #0
	strh r0, [r3, #8]
	b _08000FC0
_08000F48:
	movs r0, #1
	strh r0, [r3, #8]
	ldr r0, _08000F9C @ =0x04000130
_08000F4E:
	ldrh r0, [r0]
	mvns r0, r0
	strh r0, [r3]
	ldrh r0, [r3]
	ldrh r1, [r3, #2]
	eors r0, r1
	ldrh r7, [r3]
	ands r0, r7
	movs r1, #0
	strh r0, [r3, #4]
	strh r1, [r3, #6]
	movs r6, #1
	adds r5, r3, #0
	adds r5, #0xa
_08000F6A:
	lsls r0, r1, #0x10
	asrs r2, r0, #0x10
	ldrh r1, [r3]
	asrs r1, r2
	ands r1, r6
	adds r4, r0, #0
	cmp r1, #0
	beq _08000FAE
	adds r1, r5, r2
	movs r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _08000FA4
	adds r0, r6, #0
	lsls r0, r2
	ldrh r7, [r3, #6]
	orrs r0, r7
	strh r0, [r3, #6]
	ldrh r0, [r3, #4]
	asrs r0, r2
	ands r0, r6
	cmp r0, #0
	beq _08000FA0
	ldrb r0, [r3, #0x14]
	b _08000FA2
	.align 2, 0
_08000F9C: .4byte 0x04000130
_08000FA0:
	ldrb r0, [r3, #0x15]
_08000FA2:
	strb r0, [r1]
_08000FA4:
	asrs r0, r4, #0x10
	adds r0, r5, r0
	ldrb r1, [r0]
	subs r1, #1
	b _08000FB0
_08000FAE:
	adds r0, r5, r2
_08000FB0:
	strb r1, [r0]
	movs r1, #0x80
	lsls r1, r1, #9
	adds r0, r4, r1
	lsrs r1, r0, #0x10
	asrs r0, r0, #0x10
	cmp r0, #9
	ble _08000F6A
_08000FC0:
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
