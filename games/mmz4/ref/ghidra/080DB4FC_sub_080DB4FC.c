// sub_080DB4FC at 0x080DB4FC (thumb)

undefined4 sub_080DB4FC(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x74);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x400d);
    *(undefined *)(param_1 + 0x12) = 0x1c;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DB7B0(param_1);
  }
  else if (*(char *)(param_1 + 0x13) == '\0') {
    iVar5 = (int)*(short *)((int)&DAT_08128c10 +
                           ((*(byte *)(param_1 + 0x12) - 0xc) * 0x4000000 >> 0x17));
    iVar4 = (uint)bVar1 * 2 + -1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + iVar4 * -0x400 + iVar5 * iVar4 * 4;
    iVar4 = iVar5 * -0x400;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (iVar4 >> 8) + 0x400;
    if (iVar5 < 1) {
      *(undefined *)(param_1 + 0x13) = 1;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar4 + -0x1800);
    if (sVar3 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080DB7B0(param_1);
    }
  }
  return in_lr;
}

