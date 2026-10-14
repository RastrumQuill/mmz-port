// sub_0802C3AC at 0x0802C3AC (thumb)

undefined4 sub_0802C3AC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x147) = 4;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835acf0 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

