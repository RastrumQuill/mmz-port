// sub_080962FC at 0x080962FC (thumb)

undefined4 sub_080962FC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_08096372;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined *)(param_1 + 0x13) = 6;
    *(undefined *)(param_1 + 0xbd) = 0;
    uVar3 = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 100) = 0x10;
    uVar3 = 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xfffffff0;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x5c) < 0) {
    sub_08017700(param_1,0xdb0f);
  }
  else {
    sub_08017700(param_1,0xdb05);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08096372:
  if (*(char *)(param_1 + 0x12) == '\0') {
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0x13) = 6;
      pcVar4 = (char *)(param_1 + 0xbd);
      cVar2 = *pcVar4;
      *pcVar4 = cVar2 + '\x01';
      if ((char)(cVar2 + '\x01') == '\x03') {
        *pcVar4 = '\0';
        *(undefined *)(param_1 + 0x12) = 0x3c;
      }
      uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
      local_14 = uVar7 * 0x1800 + *(int *)(param_1 + 0x54) + -0xc00;
      local_10 = *(int *)(param_1 + 0x58) + -0xa00;
      sub_0800471C(0x2c);
      sub_0809C41C(&local_14,0xfffffd00,uVar7 * 0x80 - 0x80 & 0xff);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = -iVar5;
  }
  if (iVar6 < 0x140) {
    *(int *)(param_1 + 0x5c) = iVar5 + *(int *)(param_1 + 100);
  }
  cVar2 = sub_08095910(param_1);
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

