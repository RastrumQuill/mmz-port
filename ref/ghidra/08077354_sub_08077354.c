// sub_08077354 at 0x08077354 (thumb)

undefined4 sub_08077354(undefined4 *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 0x8077441;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f88;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe4;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    *(undefined *)(iVar1 + 0x10) = 1;
  }
  return in_lr;
}

