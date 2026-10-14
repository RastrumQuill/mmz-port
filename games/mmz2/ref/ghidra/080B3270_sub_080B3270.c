// sub_080B3270 at 0x080B3270 (thumb)

undefined4 sub_080B3270(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08346acc + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

