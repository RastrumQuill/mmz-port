// sub_08096084 at 0x08096084 (thumb)

undefined4 sub_08096084(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x3a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80960dd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023084;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230fa;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    *(undefined *)(iVar1 + 0x12) = param_2;
  }
  return in_lr;
}

