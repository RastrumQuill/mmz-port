// sub_0806E3D0 at 0x0806E3D0 (thumb)

undefined4 sub_0806E3D0(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088590b8);
    uVar3 = sub_0810CD50(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(DAT_0202dbf0 + 0x54),
                         *(int *)(DAT_0202dbf0 + 0x58) + -0x1000);
    *(undefined *)(param_1 + 0xc4) = uVar3;
    *(undefined4 *)(param_1 + 100) = 0x300;
    iVar6 = sub_0810CD50(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(DAT_0202dbf0 + 0x54),
                         *(int *)(DAT_0202dbf0 + 0x58) + -0x1000);
    iVar6 = (((int)((iVar6 * 0x1000000 + 0xe0000000U >> 0x18) + 0x20) >> 6) * 0x40 + 0x20) *
            0x1000000;
    uVar7 = iVar6 + 0x80000000;
    iVar6 = *(int *)(param_1 + 100) *
            (int)*(short *)((int)&DAT_08128c10 + (iVar6 + 0xc0000000U >> 0x17));
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar6 >> 8;
    iVar6 = *(int *)(param_1 + 100) * (int)(short)(&DAT_08128c10)[uVar7 >> 0x18];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar6 >> 8;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0x13) = (char)(uVar7 >> 0x18);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  bVar1 = 0xa000 < (*(int *)(param_1 + 0xbc) - (iVar6 + -0x6800)) + 0x5000U;
  bVar2 = 0x5000 < (*(int *)(param_1 + 0xb8) - iVar8) - 0x17ffU;
  *(int *)(param_1 + 0x54) = iVar6;
  *(int *)(param_1 + 0x58) = iVar8;
  sub_0806F1B0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    sub_08002B10(0x38);
  }
  if ((char)(bVar1 + bVar2) != '\0') {
    sub_08002B10(0x38);
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 == '\0') {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      cVar4 = *(char *)(param_1 + 0x13) + bVar1 * '\x02' * ('@' - *(char *)(param_1 + 0x13));
      bVar5 = cVar4 + bVar2 * '\x02' * (-0x80 - cVar4);
      iVar6 = *(int *)(param_1 + 100) + 0x40;
      *(int *)(param_1 + 100) = iVar6;
      if (0x700 < iVar6) {
        *(undefined4 *)(param_1 + 100) = 0x700;
      }
      iVar6 = *(int *)(param_1 + 100) *
              (int)*(short *)((int)&DAT_08128c10 + ((bVar5 + 0x40) * 0x1000000 >> 0x17));
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar6 >> 8;
      iVar6 = *(int *)(param_1 + 100) * (int)(short)(&DAT_08128c10)[bVar5];
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar6 >> 8;
      *(byte *)(param_1 + 0x13) = bVar5;
    }
  }
  return in_lr;
}

