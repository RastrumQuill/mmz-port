// sub_080546F4 at 0x080546F4 (thumb)

undefined4 sub_080546F4(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  short local_24 [4];
  int local_1c;
  int local_18;
  
  sub_08128B5C(local_24,&DAT_08128ea4,8);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x57);
    sub_0801CF00(param_1,0x2c00);
    sub_08055178(param_1,0xc,0);
    *(undefined4 *)(param_1 + 0xcc) = 0x1e0;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x2c00) &&
     (*(char *)(param_1 + 0x12) == '\0')) {
    sub_0801CF00(param_1,0x2c06);
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_08054FBC(param_1);
  }
  else {
    iVar4 = sub_08055194(param_1,*(undefined4 *)(param_1 + 0xb8));
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined *)(param_1 + 0xb7) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x2c06) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    piVar5 = (int *)(param_1 + 0xcc);
    if (*piVar5 == 0) {
      *(undefined *)(param_1 + 0xe) = 4;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      iVar4 = sub_08128954(*piVar5,0x18);
      if (iVar4 == 0) {
        sub_08002B10(0x13a);
        if (*piVar5 == 0x1e0) {
          *(char *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
        }
        cVar2 = FUN_081288bc(0x1e0 - *piVar5,0x18);
        bVar3 = sub_08128A9C(cVar2 + *(char *)(param_1 + 0xb4) * '\n',0x14);
        bVar1 = 9 < bVar3;
        if (bVar1) {
          bVar3 = bVar3 - 10;
        }
        uVar6 = (uint)bVar1;
        local_1c = *(int *)(param_1 + 0x54) + (int)local_24[uVar6 * 2];
        local_18 = *(int *)(param_1 + 0x58) + (int)local_24[uVar6 * 2 + 1];
        sub_080BF740(param_1,&local_1c,bVar3);
      }
      *piVar5 = *piVar5 + -1;
    }
  }
  return in_lr;
}

