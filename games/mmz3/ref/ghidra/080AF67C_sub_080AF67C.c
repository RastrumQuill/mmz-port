// sub_080AF67C at 0x080AF67C (thumb)

undefined8 sub_080AF67C(undefined4 *param_1,int param_2,byte param_3,undefined param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x28;
    *(undefined4 *)(iVar1 + 0x14) = 0x80aeb7d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
    iVar2 = param_2 * *(short *)((int)&DAT_080fe64c + ((param_3 + 0x40) * 0x1000000 >> 0x17));
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar2 >> 8;
    param_2 = param_2 * (short)(&DAT_080fe64c)[param_3];
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = param_2 >> 8;
    *(byte *)(iVar1 + 0x12) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

