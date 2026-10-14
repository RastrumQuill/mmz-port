// sub_0808A9E4 at 0x0808A9E4 (thumb)

undefined4 sub_0808A9E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885bfb0 + (uint)*(byte *)(param_1 + 0xc0) * 0x18);
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xc0) | 0x2000);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0808aa80;
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    iVar1 = sub_08007DB4(*(int *)(param_1 + 0x54) + -0x700,iVar1 + -0x100);
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    }
    iVar1 = sub_08007DB4(*(int *)(param_1 + 0x54) + 0x700,*(int *)(param_1 + 0x58) + -0x100);
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    }
  }
LAB_0808aa80:
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885bfb0 + (uint)*(byte *)(param_1 + 0xc0) * 0x18);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

