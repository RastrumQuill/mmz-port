// sub_080AD638 at 0x080AD638 (thumb)

undefined4 sub_080AD638(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(DAT_0202dbf0 + 0xec) == 0) {
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffb0;
      *(char *)(param_1 + 0xb9) = '\0';
    }
  }
  else {
    iVar1 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0x30) {
      iVar1 = *(int *)(DAT_0202dbf0 + 0x58) - (*(int *)(param_1 + 0x58) + 0xf00) >> 8;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < 0x30) {
        iVar2 = sub_080AD7DC(param_1);
        iVar1 = (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17));
        *(int *)(param_1 + 0x5c) = iVar1;
        iVar2 = (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar2 << 0x18) >> 0x17));
        *(int *)(param_1 + 0x60) = iVar2;
        if (*(int *)(DAT_0202dbf0 + 0xec) * (*(int *)(param_1 + 0xb4) + -2) < 0) {
          iVar1 = iVar1 * -0x100;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 0xff;
          }
          *(int *)(param_1 + 0x5c) = iVar1 >> 8;
          iVar2 = iVar2 * -0x100;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xff;
          }
          *(int *)(param_1 + 0x60) = iVar2 >> 8;
        }
        *(undefined *)(param_1 + 0xb9) = 1;
        return in_lr;
      }
    }
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffb0;
    }
    *(char *)(param_1 + 0xb9) = '\0';
  }
  return in_lr;
}

