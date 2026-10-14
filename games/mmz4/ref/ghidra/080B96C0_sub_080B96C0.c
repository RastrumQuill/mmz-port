// sub_080B96C0 at 0x080B96C0 (thumb)

undefined4 sub_080B96C0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  sub_08128B5C(abStack_10,&DAT_081298fc,4);
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
    *(undefined *)(param_1 + 0x13) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x12) == -1)) {
    sub_080B99E8(param_1);
  }
  iVar1 = (uint)abStack_10[(uint)*(byte *)(param_1 + 0xf) * 2] + (uint)*(byte *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = (char)iVar1;
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xb8) +
            *(short *)((int)&DAT_08128c10 + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x17)) * -0x16;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb8) +
            *(short *)((int)&DAT_08128c10 + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x17)) * 0x16;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xbc) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 0x16;
  return in_lr;
}

