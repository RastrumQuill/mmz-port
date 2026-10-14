// sub_08030450 at 0x08030450 (thumb)

undefined4 sub_08030450(int param_1)

{
  undefined4 in_lr;
  
  sub_08036118();
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2c8);
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083343b4 + (uint)*(byte *)(param_1 + 0x178) * 4));
  return in_lr;
}

