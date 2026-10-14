// sub_0805C10C at 0x0805C10C (thumb)

undefined4 sub_0805C10C(int param_1)

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
      goto LAB_0805c180;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined *)(param_1 + 0x13) = 6;
    *(undefined *)(param_1 + 0xc1) = 0;
    uVar3 = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = 0x10;
    uVar3 = 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0xfffffff0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x54) < 0) {
    sub_080033F0(param_1 + 0x6c,0xf);
  }
  else {
    sub_080033F0(param_1 + 0x6c,5);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805c180:
  if (*(char *)(param_1 + 0x12) == '\0') {
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0x13) = 6;
      pcVar4 = (char *)(param_1 + 0xc1);
      cVar2 = *pcVar4;
      *pcVar4 = cVar2 + '\x01';
      if ((char)(cVar2 + '\x01') == '\x03') {
        *pcVar4 = '\0';
        *(undefined *)(param_1 + 0x12) = 0x3c;
      }
      uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
      local_14 = uVar7 * 0x1800 + *(int *)(param_1 + 0x4c) + -0xc00;
      local_10 = *(int *)(param_1 + 0x50) + -0xa00;
      sub_08001EAC(0xd);
      sub_08076710(&local_14,0xfffffd00,uVar7 * 0x80 - 0x80 & 0xff);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar5 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar5;
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = -iVar5;
  }
  if (iVar6 < 0x140) {
    *(int *)(param_1 + 0x54) = iVar5 + *(int *)(param_1 + 0x5c);
  }
  cVar2 = sub_0805B7C0(param_1);
  if (cVar2 != '\0') {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

