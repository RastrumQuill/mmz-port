// sub_0803835C at 0x0803835C (thumb)

undefined4 sub_0803835C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad86c);
    do {
      while( true ) {
        iVar5 = *(int *)(param_1 + 0xd8);
        *(int *)(param_1 + 0x4c) = iVar5;
        uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar3 & 0x7fffffff;
        iVar4 = sub_080C8CB0(uVar3 * 2 >> 0x11,*(undefined4 *)(param_1 + 0xe0));
        iVar5 = iVar5 + iVar4;
        *(int *)(param_1 + 0x4c) = iVar5;
        iVar4 = *(int *)(DAT_0202286c + 0x4c) - iVar5;
        if (iVar4 < 0) break;
        if (0x33ff < iVar4) goto LAB_080383c0;
      }
    } while (iVar5 - *(int *)(DAT_0202286c + 0x4c) < 0x3400);
LAB_080383c0:
    iVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar4 + -0x3000;
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x50) =
         iVar4 + -0x3000 + (uint)(byte)(&DAT_082ada1c)[uVar3 * 2 >> 0x11 & 0xf] * -0x2000;
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = *(int *)(DAT_0202286c + 0x4c);
  iVar5 = iVar4 - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = 0 < iVar5;
  if (iVar4 == *(int *)(param_1 + 0x4c) || iVar5 < 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

