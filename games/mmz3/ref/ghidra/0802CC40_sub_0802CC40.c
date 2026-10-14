// sub_0802CC40 at 0x0802CC40 (thumb)

undefined4 sub_0802CC40(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x147) = 5;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ad1c + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

