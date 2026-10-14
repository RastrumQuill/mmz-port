// sub_08083038 at 0x08083038 (thumb)

undefined4 sub_08083038(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar3 = bVar1 & 1;
    sub_08012580(param_1);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    sub_080127E4(param_1,0x6e01);
    sub_08006E08(param_1 + 0x74,&DAT_083410e8);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (((bVar1 & 7) == 0) &&
     (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
     (uVar3 * 2 >> 0x11 & 1) == 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = -0xc00;
    }
    else {
      iVar2 = 0xc00;
    }
    sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar2,*(undefined4 *)(param_1 + 0x58),0);
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) == '\0') {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar3 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      sub_080127E4(param_1,0x6e00);
      *(undefined *)(param_1 + 0x12) = 4;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      sub_080128D4(param_1);
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

