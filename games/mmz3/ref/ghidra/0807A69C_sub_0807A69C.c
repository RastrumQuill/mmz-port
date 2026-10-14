// sub_0807A69C at 0x0807A69C (thumb)

undefined4 sub_0807A69C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363ed4);
    iVar2 = (int)*(short *)((int)&DAT_080fe64c +
                           (((byte)(&DAT_08363f1c)[(uint)*(byte *)(param_1 + 0x13) * 2] + 0x40) *
                            0x1000000 >> 0x17));
    *(int *)(param_1 + 0x5c) = iVar2 * 3;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(int *)(param_1 + 0x5c) = iVar2 * -3;
    }
    *(int *)(param_1 + 0x60) =
         (short)(&DAT_080fe64c)[(byte)(&DAT_08363f1c)[(uint)*(byte *)(param_1 + 0x13) * 2]] * -3;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08009A3C();
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

