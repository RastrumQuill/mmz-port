// sub_0802951C at 0x0802951C (thumb)

undefined8 sub_0802951C(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e90);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x1e) = 1;
    *(undefined *)(iVar1 + 9) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 0x80293b9;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(int *)(iVar1 + 0x54) = (int)(short)(&DAT_080c8e24)[(param_3 & 0xff) + 0x40] << 2;
    *(int *)(iVar1 + 0x58) = (int)(short)(&DAT_080c8e24)[param_3 & 0xff] << 2;
  }
  return CONCAT44(in_lr,iVar1);
}

