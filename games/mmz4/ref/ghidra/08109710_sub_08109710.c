// sub_08109710 at 0x08109710 (thumb)

undefined4 sub_08109710(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  bVar7 = *(byte *)(iVar1 + 10) >> 4 & 1;
  sub_0801CD28(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x22) = 1;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  sub_0801CF00(param_1,0x902);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  if (*(char *)(iVar1 + 0xd) == '\x02') {
    if (CONCAT11(*(undefined *)(iVar1 + 0x1e),*(undefined *)(iVar1 + 0x70)) == 0x500) {
      if ('\x02' < *(char *)(iVar1 + 0x71)) {
        bVar7 = bVar7 ^ 1;
      }
    }
    else {
      bVar7 = bVar7 ^ 1;
    }
  }
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar5 = param_1 + 0x74;
  iVar6 = param_1 + 0x54;
  sub_08005760(iVar5,&DAT_08869428,iVar6,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(iVar1 + 0xf5) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(iVar5,&DAT_08869548,iVar6,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    if (*(char *)(iVar1 + 0xf5) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar3 = &DAT_08869518;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar3 = &DAT_088694e8;
    }
    sub_08005760(iVar5,puVar3,iVar6,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if (bVar7 == 0) {
    uVar4 = 0xfffffc00;
  }
  else {
    uVar4 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
  *(undefined *)(param_1 + 0x12) = 0xb4;
  return in_lr;
}

