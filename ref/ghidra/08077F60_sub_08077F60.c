// sub_08077F60 at 0x08077F60 (thumb)

undefined4 sub_08077F60(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 7;
    *(undefined4 *)(iVar1 + 0x14) = 0x8077fc1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f8e;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe7;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    *(uint *)(iVar1 + 0x54) = (uint)param_2 * 0x800 + -0x400;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(byte *)(iVar1 + 0x13) = param_2;
  }
  return in_lr;
}

