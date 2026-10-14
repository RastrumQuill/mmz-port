// sub_08085730 at 0x08085730 (thumb)

undefined8 sub_08085730(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x23;
    *(undefined4 *)(iVar1 + 0x14) = 0x8085979;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fc6;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023003;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    iVar2 = param_2 * (short)(&DAT_080c8e24)[(param_3 & 0xff) + 0x40];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(iVar1 + 0x54) = iVar2 >> 8;
    param_2 = param_2 * (short)(&DAT_080c8e24)[param_3 & 0xff];
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar1 + 0x58) = param_2 >> 8;
    *(undefined *)(iVar1 + 0x10) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

