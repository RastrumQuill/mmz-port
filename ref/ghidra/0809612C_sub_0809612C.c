// sub_0809612C at 0x0809612C (thumb)

undefined4 sub_0809612C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,0);
  *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x12) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080960F4(param_1);
  return in_lr;
}

