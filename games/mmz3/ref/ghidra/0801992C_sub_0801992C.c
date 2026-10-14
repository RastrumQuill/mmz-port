// sub_0801992C at 0x0801992C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0801992C(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(char *)(DAT_02030160 + 0x10) = *(char *)(DAT_02030160 + 0x10) + '\x01';
  iVar2 = DAT_02030160;
  *(uint *)(DAT_02030160 + 0x14) = *(uint *)(DAT_02030160 + 0x14) | 1 << DAT_02030164;
  *(byte *)(iVar2 + 0x13) = DAT_02030164;
  DAT_02030176 = DAT_02030167;
  *(char *)(DAT_02030160 + 0x11) = *(char *)(DAT_02030160 + 0x11) + '\x01';
  *(uint *)(DAT_02030160 + 0x18) = *(uint *)(DAT_02030160 + 0x18) | 1 << (uint)DAT_02030164;
  iVar2 = sub_080FE460(DAT_02030168,0x3c);
  iVar2 = iVar2 - *(int *)(&DAT_08349114 + (uint)DAT_02030164 * 4);
  if (iVar2 < 1) {
    DAT_02030177 = '\x14';
  }
  else if (iVar2 < 200) {
    cVar1 = FUN_080fe2f8(iVar2 + 9,10);
    DAT_02030177 = '\x14' - cVar1;
  }
  else {
    DAT_02030177 = '\0';
  }
  iVar2 = FUN_080fe2f8(DAT_0203016c,DAT_02030174 + 1);
  if (iVar2 == 0) {
    DAT_02030178 = '\0';
  }
  else {
    iVar2 = FUN_080fe2f8(*(int *)(&DAT_08349158 + (uint)DAT_02030164 * 4) * 10,iVar2);
    if (iVar2 < 0xb) {
      DAT_02030178 = '\x0f';
    }
    else if (iVar2 < 0x19) {
      DAT_02030178 = '\x19' - (char)iVar2;
    }
    else {
      DAT_02030178 = '\0';
    }
  }
  uVar4 = (uint)DAT_0203016e;
  if (uVar4 == 0) {
    DAT_02030179 = '\x0f';
  }
  else if (uVar4 < 0x5b) {
    cVar1 = FUN_080fe2f8(uVar4 - 1,6);
    DAT_02030179 = '\x0f' - cVar1;
  }
  else {
    DAT_02030179 = '\0';
  }
  if (DAT_02030174 == 0) {
    DAT_0203017a = '\x0f';
  }
  else if (DAT_02030174 < 5) {
    DAT_0203017a = (char)DAT_02030174 * -3 + '\x0f';
  }
  else {
    DAT_0203017a = '\0';
  }
  if (0xf - DAT_02030170 < -100) {
    DAT_0203017b = -100;
  }
  else {
    DAT_0203017b = (char)(0xf - DAT_02030170);
  }
  DAT_02030165 = DAT_0203017a + DAT_02030178 + DAT_02030177 + DAT_02030176 + DAT_02030179 +
                 DAT_0203017b;
  *(short *)(DAT_02030160 + 10) = (short)DAT_02030165 + *(short *)(DAT_02030160 + 10);
  iVar2 = FUN_080fe2f8((int)*(short *)(DAT_02030160 + 10),*(undefined *)(DAT_02030160 + 0x10));
  cVar1 = '\0';
  for (piVar3 = &DAT_0834919c; *piVar3 <= iVar2; piVar3 = piVar3 + 1) {
    cVar1 = cVar1 + '\x01';
  }
  *(char *)(DAT_02030160 + 1) = cVar1;
  sub_08019AEC();
  if ((DAT_0203017e != 0) || (_DAT_02030180 != 0)) {
    DAT_0203010a = DAT_0203010a & 0xfb;
  }
  if ((DAT_0203017c != 0) || (_DAT_02030180 != 0)) {
    DAT_0203010a = DAT_0203010a & 0xf7;
  }
  return in_lr;
}

