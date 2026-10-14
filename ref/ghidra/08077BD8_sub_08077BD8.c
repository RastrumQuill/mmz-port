// sub_08077BD8 at 0x08077BD8 (thumb)

undefined4 sub_08077BD8(undefined4 param_1,undefined4 *param_2,byte param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 6;
    *(undefined4 *)(iVar1 + 0x14) = 0x8077c35;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f8c;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fe6;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(byte *)(iVar1 + 0x10) = param_3 & 1;
    *(byte *)(iVar1 + 0x11) = param_3 >> 1;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
  }
  return in_lr;
}

