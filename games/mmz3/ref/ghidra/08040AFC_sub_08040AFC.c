// sub_08040AFC at 0x08040AFC (thumb)

undefined4 sub_08040AFC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(char *)(param_1 + 0x12) != '\0') {
          *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
          uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
          if (uVar4 == 0) {
            bVar1 = *(byte *)(param_1 + 10) & 0xef;
          }
          else {
            bVar1 = *(byte *)(param_1 + 10) | 0x10;
          }
          *(byte *)(param_1 + 10) = bVar1;
        }
        sub_08007390(param_1 + 0x74,&DAT_0835e68c);
        *(undefined *)(param_1 + 0x12) = 0x20;
        sub_08017700(param_1,0xa400);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (((cVar2 == '\0') && ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0)) &&
         (*(short *)(DAT_0202f5c0 + 0xa4) != 0)) {
        sub_0804063C(param_1);
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
    sub_08007390(param_1 + 0x74,&DAT_0835e68c);
    *(undefined *)(param_1 + 0x12) = 0;
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar5 < 0) goto LAB_08040b58;
    }
    else if (-1 < iVar5) {
LAB_08040b58:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x02';
      return in_lr;
    }
    sub_0800471C(0x67);
    sub_08017700(param_1,0xa408);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar5 = *(int *)(param_1 + 0xc0) - iVar3;
  if (iVar5 < 0) {
    *(int *)(param_1 + 0x58) = iVar3 + iVar5;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

