// sub_08076710 at 0x08076710 (thumb)

undefined8 sub_08076710(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80767a5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f80;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe0;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    uVar2 = (param_3 & 0xff) + 0x80 & 0xff;
    *(int *)(iVar1 + 0xb8) = param_2;
    iVar3 = param_2 * (short)(&DAT_080c8e24)[uVar2 + 0x40];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar1 + 0x54) = iVar3 >> 8;
    param_2 = param_2 * (short)(&DAT_080c8e24)[uVar2];
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar1 + 0x58) = param_2 >> 8;
  }
  return CONCAT44(in_lr,iVar1);
}

