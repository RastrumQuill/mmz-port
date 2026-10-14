// sub_08098554 at 0x08098554 (thumb)

undefined4 sub_08098554(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 3 | 0xe4;
  *(undefined *)(param_1 + 0x1e) = 0xe;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  *(char *)(param_1 + 0x44) = (char)uVar2;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_080033F0(param_1 + 0x6c,7);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080985EC(param_1);
  return in_lr;
}

