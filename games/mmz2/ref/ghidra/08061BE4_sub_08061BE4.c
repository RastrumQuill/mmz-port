// sub_08061BE4 at 0x08061BE4 (thumb)

undefined4 sub_08061BE4(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_08061c74;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080032EC(0xde);
    *(undefined *)(param_1 + 0x12) = 0xf;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined2 *)(param_1 + 0xbc) = 0x2d;
  do {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 3;
  } while (((int)(uint)*(byte *)(param_1 + 0x12) >> uVar3 & 1U) == 0);
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & ~(byte)(1 << uVar3);
  sub_080032EC(0xf1);
  sub_080B8F50(param_1,param_1 + 0x54,uVar3,0);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08061c74:
  sVar2 = *(short *)(param_1 + 0xbc) + -1;
  *(short *)(param_1 + 0xbc) = sVar2;
  if ((sVar2 == 0) && (*(undefined *)(param_1 + 0xe) = 1, *(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0x12) = 0xf;
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (1 < bVar1) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080128D4(param_1);
  return in_lr;
}

