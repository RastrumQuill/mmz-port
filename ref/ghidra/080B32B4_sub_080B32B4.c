// sub_080B32B4 at 0x080B32B4 (thumb)

undefined4 sub_080B32B4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x06') &&
     (uVar1 = (*(byte *)(param_1 + 0x11) & 0x7f) + 0x8b,
     ((int)(uint)(byte)(&DAT_02022ad4)[(int)uVar1 >> 3] >> (uVar1 & 7) & 1U) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  sub_080B3140(param_1);
  sub_080033F0(param_1 + 0x6c,(&DAT_082b6d90)[*(byte *)(param_1 + 0x10)]);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082b6d98,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x80b3595;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined *)(param_1 + 0x12) = 0xf0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 4);
  sub_080B33B8(param_1);
  return in_lr;
}

