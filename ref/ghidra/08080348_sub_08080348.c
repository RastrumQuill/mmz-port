// sub_08080348 at 0x08080348 (thumb)

undefined4 sub_08080348(undefined4 param_1,undefined4 *param_2)

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
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return in_lr;
}

