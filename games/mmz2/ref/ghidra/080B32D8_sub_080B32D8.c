// sub_080B32D8 at 0x080B32D8 (thumb)

undefined4 sub_080B32D8(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08346aec + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

