// sub_080BA570 at 0x080BA570 (thumb)

undefined4 sub_080BA570(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836b3ec + (uint)*(byte *)(param_1 + 0x11) * 4));
  sub_080BA848(param_1);
  return in_lr;
}

