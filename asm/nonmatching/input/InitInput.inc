	push {lr}
	bl ResetKeyStates
	bl PollKeyInput
	pop {r0}
	bx r0
	.align 2, 0
