// sub_080C54D4 at 0x080C54D4 (thumb)

undefined4 sub_080C54D4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  *(short *)(&DAT_0202b762 + (uint)*(byte *)(param_1 + 0x9eb) * 2) =
       *(short *)(&DAT_0202b762 + (uint)*(byte *)(param_1 + 0x9eb) * 2) +
       *(short *)(param_1 + 0x9ec);
  DAT_0202b79e = DAT_0202b79e - *(short *)(param_1 + 0x9ec);
  *(undefined *)(param_1 + 0x9e8) = 0;
  sub_080C5528();
  return in_lr;
}

