// sub_080B2E18 at 0x080B2E18 (thumb)

undefined4 sub_080B2E18(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  char acStack_10 [4];
  
  sub_08128B5C(acStack_10,&DAT_08129738,4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar1 = *(int *)(param_1 + 0x54) + -0x1600;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + 0x1600;
    }
    *(int *)(param_1 + 0xb8) = iVar1;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x11) = 0;
    *(undefined *)(param_1 + 0x13) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x12) == -1)) {
    sub_080B33FC(param_1);
  }
  *(char *)(param_1 + 0x12) =
       acStack_10[(uint)*(byte *)(param_1 + 0xf) * 2] + *(char *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080B3298(param_1);
  }
  else {
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + -1;
  }
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xb8) +
            *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)
                      ) * -0x16;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb8) +
            *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)
                      ) * 0x16;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xbc) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 0x16;
  return in_lr;
}

