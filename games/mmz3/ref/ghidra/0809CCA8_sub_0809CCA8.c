// sub_0809CCA8 at 0x0809CCA8 (thumb)

undefined4 sub_0809CCA8(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 3;
    *(undefined4 *)(iVar1 + 0x14) = 0x809cd2d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    iVar2 = param_2 * *(short *)((int)&DAT_080fe64c +
                                (((param_3 & 0xff) + 0x40) * 0x1000000 >> 0x17));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar2 >> 8;
    param_2 = param_2 * (short)(&DAT_080fe64c)[param_3 & 0xff];
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = param_2 >> 8;
  }
  return in_lr;
}

