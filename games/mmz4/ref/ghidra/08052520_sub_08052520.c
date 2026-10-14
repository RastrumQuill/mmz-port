// sub_08052520 at 0x08052520 (thumb)

undefined4 sub_08052520(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  cVar2 = *(char *)(param_1 + 0xe);
  if (cVar2 == '\0') {
    sub_0801CF00(param_1,0xa119);
    if (*(char *)(param_1 + 0xe2) == '\0') {
      sub_08002B10(0xe9);
    }
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      uVar3 = 0x2c0;
    }
    else {
      uVar3 = 0xfffffd40;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x15;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
LAB_080525ac:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (cVar2 == '\x01') {
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      puVar5 = &DAT_08854b28;
LAB_080525a8:
      sub_08005784(param_1 + 0x74,puVar5);
      goto LAB_080525ac;
    }
  }
  else if ((cVar2 == '\x02') && ('\x04' < *(char *)(param_1 + 0x71))) {
    puVar5 = &DAT_08854a98;
    goto LAB_080525a8;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) < '\n') {
      return in_lr;
    }
    sub_08002B10(0xeb);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    iVar7 = *(int *)(param_1 + 0x54);
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    local_24 = iVar7 + 0x1000 + (uVar4 * 2 >> 0x11 & 0x1f) * -0x100;
    if ((*(byte *)(param_1 + 0x13) & 3) == 1) {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_20 = sub_08008534(iVar7,*(undefined4 *)(param_1 + 0x58));
        puVar5 = &DAT_08854c44;
      }
      else {
        local_20 = sub_08008748(iVar7,*(undefined4 *)(param_1 + 0x58));
        puVar5 = &DAT_08854c7c;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_20 = sub_08008534(iVar7,*(undefined4 *)(param_1 + 0x58));
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        sub_080D4898(&local_24,&DAT_08854c28,0,(uVar4 * 2 >> 0x11 & 1) << 4);
        goto LAB_080526c2;
      }
      local_20 = sub_08008748(iVar7,*(undefined4 *)(param_1 + 0x58));
      puVar5 = &DAT_08854c60;
    }
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    sub_080D4898(&local_24,puVar5,0,(uVar4 * 2 >> 0x11 & 1) << 4);
  }
LAB_080526c2:
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 3) < 2) {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar6 = 0x100;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar6 = -0x100;
  }
  *(int *)(param_1 + 0x54) = iVar7 + iVar6;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

