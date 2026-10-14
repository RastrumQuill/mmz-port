// sub_080C46F8 at 0x080C46F8 (thumb)

undefined4 sub_080C46F8(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x44;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c479d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    iVar3 = *(short *)((int)&DAT_080fe64c + (((param_4 & 0xff) + 0x40) * 0x1000000 >> 0x17)) *
            param_3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar3 >> 8;
    param_3 = (short)(&DAT_080fe64c)[param_4 & 0xff] * param_3;
    if (param_3 < 0) {
      param_3 = param_3 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = param_3 >> 8;
    uVar2 = sub_080AF824(iVar1);
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  }
  return in_lr;
}

