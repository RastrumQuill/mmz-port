// sub_080B5E68 at 0x080B5E68 (thumb)

undefined4 sub_080B5E68(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)iVar1 + (char)(iVar1 >> 5) * -0x20;
  piVar2 = (int *)(param_1 + 0xbc);
  iVar3 = *(int *)(param_1 + 0xc4) - *piVar2;
  iVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc0);
  if (((iVar3 + 0x200U < 0x401) && (iVar1 + 0x200U < 0x401)) &&
     (iVar3 * iVar3 + iVar1 * iVar1 < 0x40001)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *piVar2 = *(int *)(param_1 + 0xc4);
    iVar1 = *(int *)(param_1 + 200);
  }
  else {
    iVar1 = sub_08025930(iVar3,iVar1);
    *piVar2 = *piVar2 + (short)(&DAT_080c8e24)[iVar1 + 0x40] * 2;
    iVar1 = *(int *)(param_1 + 0xc0) + (short)(&DAT_080c8e24)[iVar1] * 2;
  }
  *(int *)(param_1 + 0xc0) = iVar1;
  return in_lr;
}

