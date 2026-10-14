// sub_080CC724 at 0x080CC724 (thumb)

undefined4 sub_080CC724(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CE54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CF00(param_1,0x940d);
  *(undefined2 *)(param_1 + 0x50) = 0x40;
  *(undefined2 *)(param_1 + 0x52) = 0x40;
  *(undefined *)(param_1 + 0x12) = 1;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

