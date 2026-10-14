// sub_080CA91C at 0x080CA91C (thumb)

undefined4 sub_080CA91C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = (int)*(short *)(param_1 + 0xbe);
    if (iVar1 != -1) {
      sub_08003338(iVar1);
      *(short *)(param_1 + 0xbe) = -1;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

