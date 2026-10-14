// sub_080769C4 at 0x080769C4 (thumb)

undefined8 sub_080769C4(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0x8076a69;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f82;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe1;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    uVar2 = (param_4 & 0xff) + 0x80 & 0xff;
    iVar3 = (short)(&DAT_080c8e24)[uVar2 + 0x40] * param_3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar1 + 0x54) = iVar3 >> 8;
    param_3 = (short)(&DAT_080c8e24)[uVar2] * param_3;
    if (param_3 < 0) {
      param_3 = param_3 + 0xff;
    }
    *(int *)(iVar1 + 0x58) = param_3 >> 8;
    sub_08001EAC(0x78);
  }
  return CONCAT44(in_lr,iVar1);
}

