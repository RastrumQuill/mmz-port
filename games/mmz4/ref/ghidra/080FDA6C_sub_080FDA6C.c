// sub_080FDA6C at 0x080FDA6C (thumb)

undefined4 sub_080FDA6C(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x12) = (*(byte *)(param_1 + 0x11) & 3) + 6;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080FD9F8();
  return in_lr;
}

