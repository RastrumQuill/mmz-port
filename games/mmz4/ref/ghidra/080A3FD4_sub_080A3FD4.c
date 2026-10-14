// sub_080A3FD4 at 0x080A3FD4 (thumb)

undefined4 sub_080A3FD4(int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x8718);
    sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xd01);
    if (sVar3 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0xf) = 2;
    }
    else {
      if (*(char *)(param_1 + 0xbc) == '\0') {
        uVar4 = 0xfffffff0;
      }
      else {
        uVar4 = 0x10;
      }
      *(undefined4 *)(param_1 + 100) = uVar4;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
      *(undefined *)(param_1 + 0xf) = 1;
    }
    sub_080E1864(param_1 + 0x54,*(char *)(param_1 + 0xf) + -1,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined *)(param_1 + 0xbc),*(undefined *)(param_1 + 0x25));
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  sub_0801CFF0(param_1);
  bVar1 = false;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) goto LAB_080a40ae;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar7;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar7 + 0xd00);
    if (sVar3 != 0) {
      bVar1 = true;
    }
  }
  if (!bVar1) {
    return in_lr;
  }
LAB_080a40ae:
  iVar7 = param_1 + 0x54;
  sub_0802AB70(0,0x2b,iVar7);
  bVar6 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar6 = bVar6 | 0x10;
  }
  sub_080D4898(iVar7,&DAT_0885ea68,0,bVar6);
  uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + (8 - (uVar5 * 2 >> 0x11 & 0xf)) * 0x100;
  uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar5 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + (8 - (uVar5 * 2 >> 0x11 & 0xf)) * 0x100;
  sub_080D0894(1,&local_24);
  sub_08002B10(0x2a);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,iVar7);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

