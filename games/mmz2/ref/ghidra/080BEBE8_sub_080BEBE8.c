// sub_080BEBE8 at 0x080BEBE8 (thumb)

undefined4 sub_080BEBE8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0x13) = (&DAT_083485a8)[(uint)*(byte *)(param_1 + 0x10) * 3];
  sub_080BEC08();
  return in_lr;
}

