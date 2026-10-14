// sub_08040D70 at 0x08040D70 (thumb)

undefined4 sub_08040D70(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbe) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885213c + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

