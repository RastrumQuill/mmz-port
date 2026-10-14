// sub_080B99F0 at 0x080B99F0 (thumb)

undefined4 sub_080B99F0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_0801749C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 & 0xef | 3;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 0x13;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = 0xffffff40;
  }
  else {
    uVar2 = 0xc0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 7) + 0x7f;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080B9AD8(param_1);
  return in_lr;
}

