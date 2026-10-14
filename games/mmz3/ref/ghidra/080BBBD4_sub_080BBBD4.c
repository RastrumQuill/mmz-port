// sub_080BBBD4 at 0x080BBBD4 (thumb)

undefined4 sub_080BBBD4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080176EC(param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    uVar1 = 0x80;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    uVar1 = 0xffffff80;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080BBC94(param_1);
  return in_lr;
}

