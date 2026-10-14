// sub_0809A890 at 0x0809A890 (thumb)

undefined4 sub_0809A890(int param_1)

{
  undefined4 in_lr;
  
  sub_08001FA8(param_1 + 0x2c,0x809a965);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  DAT_02004f80 = DAT_02004f80 | 0x4000;
  DAT_02004f8d = 0x35;
  DAT_02004f8e = DAT_02004f8e | 10;
  DAT_030017a0 = 0x7fff;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809A120(param_1);
  return in_lr;
}

