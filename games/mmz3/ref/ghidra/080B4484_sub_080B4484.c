// sub_080B4484 at 0x080B4484 (thumb)

undefined4 sub_080B4484(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    if (*(short *)(param_1 + 0x78) == 0x100) {
      sub_0801749C(param_1);
      goto LAB_080b44b8;
    }
  }
  sub_080175BC(param_1);
LAB_080b44b8:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08017700(param_1,0xb);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = *(byte *)(param_1 + 0x11) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x74);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x78);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B453C(param_1);
  return in_lr;
}

