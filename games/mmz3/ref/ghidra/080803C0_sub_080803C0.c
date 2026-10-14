// sub_080803C0 at 0x080803C0 (thumb)

undefined4 sub_080803C0(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_080BEF58(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000,1);
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xcb);
  *pcVar1 = *pcVar1 + -1;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

