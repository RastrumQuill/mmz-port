// sub_0802B9A8 at 0x0802B9A8 (thumb)

undefined4 sub_0802B9A8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x11a) = 0;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835aca4 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

