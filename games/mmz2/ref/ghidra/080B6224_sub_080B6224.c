// sub_080B6224 at 0x080B6224 (thumb)

undefined4 sub_080B6224(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080127E4(param_1,3);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x7c) = 0x200;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_08012580(param_1);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 1;
    if (uVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    sub_080127E4(param_1,0x3703);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    *(char *)(param_1 + 0x12) = (char)(uVar2 * 2 >> 0x11);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
    *(undefined2 *)(param_1 + 0x7e) = 0xb4;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080B633C(param_1);
  return in_lr;
}

