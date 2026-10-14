// sub_080BC178 at 0x080BC178 (thumb)

undefined4 sub_080BC178(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

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
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
    iVar2 = param_4 * *(short *)((int)&DAT_080fe64c +
                                (((param_5 & 0xff) + 0x40) * 0x1000000 >> 0x17));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar2 >> 8;
    param_4 = param_4 * (short)(&DAT_080fe64c)[param_5 & 0xff];
    if (param_4 < 0) {
      param_4 = param_4 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = -(param_4 >> 8);
    *(int *)(iVar1 + 0x28) = param_1;
    *(char *)(param_1 + 0xcf) = *(char *)(param_1 + 0xcf) + '\x01';
  }
  return in_lr;
}

