	adds r1, r0, #0
	movs r0, #0
	strh r0, [r1, #8]
	strh r0, [r1, #6]
	strh r0, [r1, #4]
	strh r0, [r1, #2]
	strh r0, [r1]
	adds r3, r1, #0
	adds r3, #0xa
	adds r2, r1, #0
	adds r2, #0xe
	str r0, [r2]
	str r0, [r3]
	strh r0, [r1, #0x12]
	bx lr
	.align 2, 0
