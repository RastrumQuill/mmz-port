// sub_080DCE34 at 0x080DCE34 (thumb)

undefined4 sub_080DCE34(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (DAT_020302c0 + -0x9800 <= iVar1) {
      return in_lr;
    }
  }
  else if ((iVar1 < 0x45001) && (iVar1 <= DAT_020302c0 + 0x97ff)) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

