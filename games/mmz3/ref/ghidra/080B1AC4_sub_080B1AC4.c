// sub_080B1AC4 at 0x080B1AC4 (thumb)

undefined4 sub_080B1AC4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(short *)(*(int *)(param_1 + 0x28) + 4) == 2) {
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if ((*(char *)(param_1 + 0xbc) == '\x01') && (*(char *)(param_1 + 0xe) != '\x02')) {
    *(short *)(*(int *)(param_1 + 0x28) + 0xe) = *(short *)(*(int *)(param_1 + 0x28) + 0xe) + 1;
    sub_0800471C(0x137);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xe) = 2;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        sub_0800471C(0x22);
      }
      if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\x01') {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x3c000;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836a04c,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80b1c85;
    sub_08017700(param_1,0xaa04);
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x3c000;
  }
  sub_080177F4(param_1);
  sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  return in_lr;
}

