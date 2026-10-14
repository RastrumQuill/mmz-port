// sub_0800F3E8 at 0x0800F3E8 (thumb)

undefined4 sub_0800F3E8(undefined *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  DAT_02023634 = &DAT_082b9634;
  iVar1 = 0x13;
  param_1 = param_1 + 0x2f;
  do {
    *param_1 = 0;
    param_1 = param_1 + -1;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return in_lr;
}

