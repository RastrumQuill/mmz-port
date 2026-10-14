// sub_0806D628 at 0x0806D628 (thumb)

undefined4 sub_0806D628(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1700);
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 0x20;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    if ((uVar5 * 2 >> 0x11 & 0xf) < 10) {
      uVar4 = 3;
    }
    else {
      uVar4 = 5;
    }
    *(undefined *)(param_1 + 0xd) = uVar4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

