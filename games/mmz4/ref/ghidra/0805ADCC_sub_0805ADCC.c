// sub_0805ADCC at 0x0805ADCC (thumb)

undefined4 sub_0805ADCC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08001D30(&DAT_08c44564,(DAT_0202e0ca - 0x2b9) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44570,(DAT_0202deca - 7) * 0x20 + 0x200);
    if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xbf) != '\x03')) {
      iVar2 = sub_08095BB0(param_1);
      *(int *)(param_1 + 200) = iVar2;
      cVar6 = -1;
      if (iVar2 != 0) {
        cVar6 = '\x03';
      }
      *(char *)(param_1 + 0xbf) = cVar6;
    }
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    iVar2 = (bVar1 >> 4 & 1) * 2 + -1;
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 0x5c) = iVar2 * 0x100;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 1;
    *(undefined *)(param_1 + 0x13) = 3;
    *(undefined4 *)(param_1 + 0xc0) = 0x94;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((iVar2 != 0) && (iVar2 = iVar2 + -1, *(int *)(param_1 + 0xc0) = iVar2, iVar2 < 1)) {
    sub_08002B10(0xbe);
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar7 = *(int *)(param_1 + 0x60) * (iVar2 - *(int *)(param_1 + 100));
  iVar2 = iVar7;
  if (iVar7 < 0) {
    iVar2 = iVar7 + 0x3fff;
  }
  iVar2 = iVar7 + (iVar2 >> 0xe) * -0x4000;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x3f;
  }
  iVar2 = *(int *)(param_1 + 0x68) +
          *(short *)((int)&DAT_08128c10 + ((iVar2 >> 6) * 0x1000000 + 0x40000000U >> 0x17)) * 0x2c +
          -0x2c00;
  *(int *)(param_1 + 0x58) = iVar2;
  if (*(byte *)(param_1 + 0x13) != 0) {
    iVar3 = 3 - (uint)*(byte *)(param_1 + 0x13);
    iVar4 = iVar3 * 0x4000;
    if (iVar7 + iVar3 * -0x4000 < 0 == SBORROW4(iVar7,iVar4)) {
      local_1c = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x60) * iVar4;
      piVar5 = (int *)(param_1 + 200);
      iVar3 = *piVar5;
      local_18 = iVar2;
      if ((((iVar3 != 0) && (*(char *)(param_1 + 0xbf) == '\x03')) &&
          (*(char *)(iVar3 + 0xb5) == '\0')) &&
         (iVar2 = sub_08095C14(iVar3,&local_1c,*(undefined *)(iVar3 + 0xb4)), iVar2 != 0)) {
        *(char *)(*piVar5 + 0xb4) = *(char *)(*piVar5 + 0xb4) + '\x01';
      }
      cVar6 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar6;
      if (((cVar6 == '\0') && (*piVar5 != 0)) && (*(char *)(param_1 + 0xbf) == '\x03')) {
        *(undefined *)(*piVar5 + 0xb5) = 1;
      }
    }
    if ((*(char *)(param_1 + 0x12) != '\0') && (0x1fff < iVar7)) {
      sub_08002B10(0xbd);
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  iVar2 = sub_0805C370(param_1);
  if (0x1e000 < (iVar2 - *(int *)(param_1 + 0x54)) + 0x16800U) {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

