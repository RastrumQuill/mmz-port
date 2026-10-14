// sub_080952E0 at 0x080952E0 (thumb)

undefined4 sub_080952E0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x35;
    *(undefined4 *)(iVar1 + 0x14) = 0x8095385;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202307a;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230f5;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    iVar2 = param_3 * (short)(&DAT_080c8e24)[(param_4 & 0xff) + 0x40];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(iVar1 + 0x54) = iVar2 >> 8;
    param_3 = param_3 * (short)(&DAT_080c8e24)[param_4 & 0xff];
    if (param_3 < 0) {
      param_3 = param_3 + 0xff;
    }
    *(int *)(iVar1 + 0x58) = param_3 >> 8;
    uVar3 = sub_0807F4B4(iVar1);
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
  }
  return in_lr;
}

