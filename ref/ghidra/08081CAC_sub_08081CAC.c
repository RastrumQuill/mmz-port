// sub_08081CAC at 0x08081CAC (thumb)

undefined4 sub_08081CAC(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x8081dfd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fb8;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ffc;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined *)(iVar1 + 0x12) = param_2;
  }
  return in_lr;
}

