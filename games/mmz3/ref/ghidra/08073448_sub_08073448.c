// sub_08073448 at 0x08073448 (thumb)

undefined4 sub_08073448(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = 0;
  uVar5 = 0xf6000000;
  iVar4 = 0;
  do {
    iVar1 = sub_080070D8(DAT_020305e8);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x18;
      *(undefined *)(iVar1 + 9) = 0x13;
      *(undefined4 *)(iVar1 + 0x14) = 0x8073609;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined *)(iVar1 + 0x10) = 1;
      *(char *)(iVar1 + 0x11) = (char)iVar3;
      *(undefined4 *)(iVar1 + 0x54) = param_1;
      *(undefined4 *)(iVar1 + 0x58) = param_2;
      iVar2 = (short)(&DAT_080fe64c)[uVar5 >> 0x18] * 0x180;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(iVar1 + 0x5c) = iVar2 >> 8;
      iVar2 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar4 + -0x4a) * 0x1000000) >> 0x17)) * 0x180
      ;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(iVar1 + 0x60) = -(iVar2 >> 8);
    }
    uVar5 = uVar5 + 0xa000000;
    iVar4 = iVar4 + 10;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return in_lr;
}

