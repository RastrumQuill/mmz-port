// sub_080B4118 at 0x080B4118 (thumb)

undefined4 sub_080B4118(int param_1)

{
  undefined4 in_lr;
  
  sub_080175BC();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08017700(param_1,0xe);
  sub_080177F4(param_1);
  *(undefined2 *)(param_1 + 0x50) = 0x80;
  *(undefined2 *)(param_1 + 0x52) = 0x80;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0x80;
  *(undefined2 *)(param_1 + 0x76) = 0x80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B3F64(param_1);
  return in_lr;
}

