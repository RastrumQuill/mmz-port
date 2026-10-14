// sub_080802EC at 0x080802EC (thumb)

undefined4 sub_080802EC(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x19;
    *(undefined4 *)(iVar1 + 0x14) = 0x808045d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fb2;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ff9;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_3;
    *(undefined4 *)(iVar1 + 0x58) = param_3[1];
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

