// sub_0809C41C at 0x0809C41C (thumb)

undefined8 sub_0809C41C(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x809c549;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    uVar2 = (param_3 & 0xff) + 0x80 & 0xff;
    *(int *)(iVar1 + 0xb4) = param_2;
    iVar3 = param_2 * *(short *)((int)&DAT_080fe64c + ((uVar2 + 0x40) * 0x1000000 >> 0x17));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar3 >> 8;
    param_2 = param_2 * (short)(&DAT_080fe64c)[uVar2];
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = param_2 >> 8;
    *(undefined *)(iVar1 + 0x10) = 1;
  }
  return CONCAT44(in_lr,iVar1);
}

