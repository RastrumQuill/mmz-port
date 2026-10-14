// sub_080B2ED0 at 0x080B2ED0 (thumb)

undefined4 sub_080B2ED0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar1 = *(int *)(param_1 + 100) + 0x40;
    *(int *)(param_1 + 100) = iVar1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + iVar1;
  }
  piVar2 = (int *)(param_1 + 0x80);
  if (*piVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x68) + 0x40;
    *(int *)(param_1 + 0x68) = iVar1;
    *piVar2 = *piVar2 + iVar1;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0xd);
  iVar1 = param_1 + 0x74;
  if (*(int *)(iVar1 + (uVar3 + 2) * 4) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + uVar3 * 4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + (uVar3 + 2) * 4);
    if (0x600 < *(int *)(uVar3 * 4 + param_1 + 100)) {
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
        sub_080B2AD0(param_1);
      }
    }
  }
  sub_080128D4(param_1);
  *(byte *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + 1U & 1;
  return in_lr;
}

