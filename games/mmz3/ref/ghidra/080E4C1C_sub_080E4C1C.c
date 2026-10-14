// sub_080E4C1C at 0x080E4C1C (thumb)

undefined4 sub_080E4C1C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  sub_080177F4(param_1);
  if (DAT_0202f5d0 == '\0') {
    if (*(char *)(iVar1 + 0x232) == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e5d0 + (uint)*(byte *)(param_1 + 0x10) * 4));
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  return in_lr;
}

