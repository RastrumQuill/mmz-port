// sub_080B8FC0 at 0x080B8FC0 (thumb)

undefined4 sub_080B8FC0(undefined4 *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x2e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b9239;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(undefined *)(iVar1 + 0x10) = 6;
  }
  return in_lr;
}

