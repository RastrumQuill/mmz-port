// sub_0802B810 at 0x0802B810 (thumb)

undefined4 sub_0802B810(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x11a) = 0;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ac9c + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

