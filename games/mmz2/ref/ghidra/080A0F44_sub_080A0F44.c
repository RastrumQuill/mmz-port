// sub_080A0F44 at 0x080A0F44 (thumb)

undefined4 sub_080A0F44(int *param_1,byte param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B50(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1105;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(int *)(iVar1 + 0x54) = *param_1 + *(short *)(&DAT_08344594 + (uint)param_2 * 4) * 0x100;
    *(int *)(iVar1 + 0x58) = param_1[1] + *(short *)(&DAT_08344596 + (uint)param_2 * 4) * 0x100;
    *(byte *)(iVar1 + 0x11) = param_2;
  }
  return in_lr;
}

