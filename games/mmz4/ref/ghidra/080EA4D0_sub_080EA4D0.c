// sub_080EA4D0 at 0x080EA4D0 (thumb)

undefined4 sub_080EA4D0(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 0xba);
  if (sVar1 != 0) {
    *(short *)(param_1 + 0xba) = sVar1 + -1;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08866078 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

