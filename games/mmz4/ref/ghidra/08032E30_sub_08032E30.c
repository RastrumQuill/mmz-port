// sub_08032E30 at 0x08032E30 (thumb)

undefined4 sub_08032E30(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x174) = 4;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fab4 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

