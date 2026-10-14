// sub_080CF7CC at 0x080CF7CC (thumb)

undefined4 sub_080CF7CC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = (int)*(short *)(param_1 + 0xbe);
    if (iVar1 != -1) {
      sub_08004768(iVar1);
      *(short *)(param_1 + 0xbe) = -1;
    }
  }
  sub_080C9918(param_1);
  return in_lr;
}

