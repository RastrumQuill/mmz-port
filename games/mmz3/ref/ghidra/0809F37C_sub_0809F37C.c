// sub_0809F37C at 0x0809F37C (thumb)

undefined4 sub_0809F37C(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0xd;
    *(undefined4 *)(iVar1 + 0x14) = 0x809f575;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(int *)(iVar1 + 0x5c) =
         (int)*(short *)((int)&DAT_080fe64c + (((param_3 & 0xff) + 0x40) * 0x1000000 >> 0x17)) << 1;
    *(int *)(iVar1 + 0x60) = (short)(&DAT_080fe64c)[param_3 & 0xff] * -2;
  }
  return in_lr;
}

