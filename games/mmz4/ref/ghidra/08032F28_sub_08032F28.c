// sub_08032F28 at 0x08032F28 (thumb)

undefined4 sub_08032F28(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x174) = 5;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fabc + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

