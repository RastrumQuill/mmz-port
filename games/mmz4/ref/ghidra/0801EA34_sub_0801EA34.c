// sub_0801EA34 at 0x0801EA34 (thumb)

undefined4 sub_0801EA34(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(char *)(DAT_0202e8e0 + 0x14) = *(char *)(DAT_0202e8e0 + 0x14) + '\x01';
  iVar2 = DAT_0202e8e0;
  *(uint *)(DAT_0202e8e0 + 0x10) = *(uint *)(DAT_0202e8e0 + 0x10) | 1 << DAT_0202e8e4;
  *(byte *)(iVar2 + 0x15) = DAT_0202e8e4;
  DAT_0202e8f4 = DAT_0202e8e7;
  iVar2 = sub_08128A24(DAT_0202e8e8,0x3c);
  iVar2 = iVar2 - *(int *)(&DAT_0883f2b4 + (uint)DAT_0202e8e4 * 4);
  if (iVar2 < 1) {
    DAT_0202e8f5 = '\x14';
  }
  else if (iVar2 < 200) {
    cVar1 = FUN_081288bc(iVar2 + 9,10);
    DAT_0202e8f5 = '\x14' - cVar1;
  }
  else {
    DAT_0202e8f5 = '\0';
  }
  iVar2 = FUN_081288bc(DAT_0202e8ec,DAT_0202e8f2 + 1);
  if (iVar2 == 0) {
    DAT_0202e8f6 = '\0';
  }
  else {
    iVar2 = FUN_081288bc(*(int *)(&DAT_0883f2f8 + (uint)DAT_0202e8e4 * 4) * 10,iVar2);
    if (iVar2 < 0xb) {
      DAT_0202e8f6 = '\x0f';
    }
    else if (iVar2 < 0x19) {
      DAT_0202e8f6 = '\x19' - (char)iVar2;
    }
    else {
      DAT_0202e8f6 = '\0';
    }
  }
  uVar4 = (uint)DAT_0202e8ee;
  if (uVar4 == 0) {
    DAT_0202e8f7 = '\x14';
  }
  else if (uVar4 < 0x79) {
    cVar1 = FUN_081288bc(uVar4 - 1,6);
    DAT_0202e8f7 = '\x14' - cVar1;
  }
  else {
    DAT_0202e8f7 = '\0';
  }
  if (DAT_0202e8f2 == 0) {
    DAT_0202e8f8 = '\x0f';
  }
  else if (DAT_0202e8f2 < 5) {
    DAT_0202e8f8 = (char)DAT_0202e8f2 * -3 + '\x0f';
  }
  else {
    DAT_0202e8f8 = '\0';
  }
  DAT_0202e8f9 = DAT_0202cac0 & 0x10;
  if ((DAT_0202cac0 & 0x10) != 0) {
    DAT_0202e8f9 = 10;
  }
  DAT_0202e8fa = (char)((uint)DAT_0202e8f1 - (uint)DAT_0202e8f0);
  if (0 < (int)(((uint)DAT_0202e8f1 - (uint)DAT_0202e8f0) * 0x1000000)) {
    DAT_0202e8fa = '\0';
  }
  DAT_0202e8e5 = DAT_0202e8fa +
                 DAT_0202e8f8 + DAT_0202e8f6 + DAT_0202e8f5 + DAT_0202e8f4 + DAT_0202e8f7 +
                 DAT_0202e8f9;
  *(short *)(DAT_0202e8e0 + 0xc) = (short)DAT_0202e8e5 + *(short *)(DAT_0202e8e0 + 0xc);
  iVar2 = FUN_081288bc((int)*(short *)(DAT_0202e8e0 + 0xc),*(undefined *)(DAT_0202e8e0 + 0x14));
  cVar1 = '\0';
  for (piVar3 = &DAT_0883f33c; *piVar3 <= iVar2; piVar3 = piVar3 + 1) {
    cVar1 = cVar1 + '\x01';
  }
  *(char *)(DAT_0202e8e0 + 1) = cVar1;
  sub_0801EBF4();
  if (DAT_0202e8fe != 0) {
    DAT_0202e8c4 = DAT_0202e8c4 & 0xef;
  }
  if (DAT_0202e8fc != 0) {
    DAT_0202e8c4 = DAT_0202e8c4 & 0xdf;
  }
  return in_lr;
}

