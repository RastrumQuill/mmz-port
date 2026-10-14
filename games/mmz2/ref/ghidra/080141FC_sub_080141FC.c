// sub_080141FC at 0x080141FC (thumb)

undefined4 sub_080141FC(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(char *)(DAT_0202ebf0 + 0x10) = *(char *)(DAT_0202ebf0 + 0x10) + '\x01';
  iVar2 = DAT_0202ebf0;
  *(uint *)(DAT_0202ebf0 + 0x14) = *(uint *)(DAT_0202ebf0 + 0x14) | 1 << DAT_0202ebf4;
  *(byte *)(iVar2 + 0x13) = DAT_0202ebf4;
  DAT_0202ec06 = DAT_0202ebf7;
  *(char *)(DAT_0202ebf0 + 0x11) = *(char *)(DAT_0202ebf0 + 0x11) + '\x01';
  *(uint *)(DAT_0202ebf0 + 0x18) = *(uint *)(DAT_0202ebf0 + 0x18) | 1 << (uint)DAT_0202ebf4;
  iVar2 = sub_080EF2B8(DAT_0202ebf8,0x3c);
  iVar2 = iVar2 - *(int *)(&DAT_08325dc0 + (uint)DAT_0202ebf4 * 4);
  if (iVar2 < 1) {
    DAT_0202ec07 = '\x14';
  }
  else if (iVar2 < 200) {
    cVar1 = sub_080EF150(iVar2 + 9,10);
    DAT_0202ec07 = '\x14' - cVar1;
  }
  else {
    DAT_0202ec07 = '\0';
  }
  iVar2 = sub_080EF150(DAT_0202ebfc,DAT_0202ec04 + 1);
  if (iVar2 == 0) {
    DAT_0202ec08 = '\0';
  }
  else {
    iVar2 = sub_080EF150(*(int *)(&DAT_08325e04 + (uint)DAT_0202ebf4 * 4) * 10,iVar2);
    if (iVar2 < 0xb) {
      DAT_0202ec08 = '\x0f';
    }
    else if (iVar2 < 0x19) {
      DAT_0202ec08 = '\x19' - (char)iVar2;
    }
    else {
      DAT_0202ec08 = '\0';
    }
  }
  uVar4 = (uint)DAT_0202ebfe;
  if (uVar4 == 0) {
    DAT_0202ec09 = '\x0f';
  }
  else if (uVar4 < 0x4c) {
    cVar1 = sub_080EF150(uVar4 - 1,5);
    DAT_0202ec09 = '\x0f' - cVar1;
  }
  else {
    DAT_0202ec09 = '\0';
  }
  if (DAT_0202ec04 == 0) {
    DAT_0202ec0a = '\x0f';
  }
  else if (DAT_0202ec04 < 5) {
    DAT_0202ec0a = (char)DAT_0202ec04 * -3 + '\x0f';
  }
  else {
    DAT_0202ec0a = '\0';
  }
  if (0xf - DAT_0202ec00 < -100) {
    DAT_0202ec0b = -100;
  }
  else {
    DAT_0202ec0b = (char)(0xf - DAT_0202ec00);
  }
  DAT_0202ebf5 = DAT_0202ec0a + DAT_0202ec08 + DAT_0202ec07 + DAT_0202ec06 + DAT_0202ec09 +
                 DAT_0202ec0b;
  *(short *)(DAT_0202ebf0 + 10) = (short)DAT_0202ebf5 + *(short *)(DAT_0202ebf0 + 10);
  iVar2 = sub_080EF150((int)*(short *)(DAT_0202ebf0 + 10),*(undefined *)(DAT_0202ebf0 + 0x10));
  cVar1 = '\0';
  for (piVar3 = &DAT_08325e48; *piVar3 <= iVar2; piVar3 = piVar3 + 1) {
    cVar1 = cVar1 + '\x01';
  }
  *(char *)(DAT_0202ebf0 + 1) = cVar1;
  sub_08014384();
  return in_lr;
}

