// sub_080E713C at 0x080E713C (thumb)

undefined4 sub_080E713C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x10) < 3) || (*(byte *)(param_1 + 0x10) == 5)) {
    if (((*(byte *)(iVar1 + 0xe0b) & 0xfc) == 0) && (*(char *)(iVar1 + 3) != '\0'))
    goto LAB_080e719c;
  }
  else if (*(char *)(iVar1 + 0xdd9) == '\0') {
LAB_080e719c:
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e8fc + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_080177F4(param_1);
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

