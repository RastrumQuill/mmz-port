// sub_0802CF78 at 0x0802CF78 (thumb)

undefined4 sub_0802CF78(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x147) = 4;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ad38 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

