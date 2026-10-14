// sub_080BCAFC at 0x080BCAFC (thumb)

undefined4 sub_080BCAFC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4) + -0x12c00) ||
     (*(char *)(param_1 + 0xbd) != '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_0801CFF0(param_1);
    if (DAT_020303f0 == 0) {
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if ((0 < iVar1) && (*(int *)(param_1 + 0xb8) < iVar2)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar1 = FUN_081288bc(iVar1 * 4,6);
      }
      else {
        iVar1 = iVar1 / 2;
      }
      *(int *)(param_1 + 0x60) = -iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080BCBF4(param_1);
  }
  return in_lr;
}

