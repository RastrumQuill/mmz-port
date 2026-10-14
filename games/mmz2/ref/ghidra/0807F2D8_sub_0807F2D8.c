// sub_0807F2D8 at 0x0807F2D8 (thumb)

undefined4 sub_0807F2D8(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5f0a);
    sub_080801DC(param_1,2);
    uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar6 & 0x7fffffff;
    uVar6 = ((uVar6 * 2 >> 0x11 & 7) + 0xf) * ((uint)*(byte *)(param_1 + 0x11) * 2 + -1) + 0xc0 &
            0xff;
    iVar3 = (short)(&DAT_080ef450)[uVar6 + 0x40 & 0xff] * 0x380;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar4 = (short)(&DAT_080ef450)[uVar6] * 0x380;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar4 >> 8;
    bVar1 = 0 < iVar3 >> 8;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    iVar3 = sub_080EF150(0x70,*(int *)(param_1 + 0x60) >> 8);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *(char *)(param_1 + 0x12) = (char)iVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (iVar3 < *(int *)(param_1 + 0xbc) + -0x5000) {
    if (DAT_0202ed54 + -0x4000 < iVar3) {
      cVar5 = *(char *)(param_1 + 0x12);
      if (cVar5 != '\0') {
        return in_lr;
      }
    }
    else {
      cVar5 = '\0';
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(char *)(param_1 + 0xe) = cVar5;
  }
  return in_lr;
}

