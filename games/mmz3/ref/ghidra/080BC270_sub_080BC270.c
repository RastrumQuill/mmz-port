// sub_080BC270 at 0x080BC270 (thumb)

undefined4
sub_080BC270(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined param_5)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x25;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bc315;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 6;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    iVar2 = param_3 * *(short *)((int)&DAT_080fe64c +
                                (((param_4 & 0xff) + 0x40) * 0x1000000 >> 0x17));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar2 >> 8;
    param_3 = param_3 * (short)(&DAT_080fe64c)[param_4 & 0xff];
    if (param_3 < 0) {
      param_3 = param_3 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = -(param_3 >> 8);
    *(undefined *)(iVar1 + 0x12) = param_5;
  }
  return in_lr;
}

