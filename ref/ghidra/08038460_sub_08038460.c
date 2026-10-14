// sub_08038460 at 0x08038460 (thumb)

undefined4 sub_08038460(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800561C(param_1 + 0x74,&DAT_082ad86c);
        *(undefined *)(param_1 + 0x12) = 0x18;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined2 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082ad86c);
    bVar1 = *(byte *)(param_1 + 10);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    iVar4 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10,
                         ((*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) + -0x1800) *
                         0x100 >> 0x10);
    uVar5 = sub_080C8C38(((uint)(iVar4 << 0x10) >> 0x18) + 10 & 0xff,0x14);
    uVar5 = (uVar5 & 0xff) * 0x14000000 >> 0x18;
    if ((bVar1 >> 4 & 1) == 0) {
      iVar4 = uVar5 - 0x40;
      if ((0x40 < iVar4) && (uVar5 = 0x40, iVar4 < 0xa0)) {
        uVar5 = 0x80;
      }
      cVar3 = (char)uVar5 + -0x10;
    }
    else {
      uVar6 = uVar5;
      if ((0x40 < uVar5) && (uVar6 = 0, uVar5 < 0xa0)) {
        uVar6 = 0x40;
      }
      cVar3 = (char)uVar6 + '\x10';
    }
    *(char *)(param_1 + 0xcc) = cVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    cVar3 = *(char *)(param_1 + 0xcc);
    local_18 = *(undefined4 *)(param_1 + 0x4c);
    local_14 = *(int *)(param_1 + 0x50) + -0x1000;
    sub_0807F314(&local_18,0x300,cVar3,1);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      cVar2 = '\x10';
    }
    else {
      cVar2 = -0x10;
    }
    *(char *)(param_1 + 0xcc) = cVar3 + cVar2;
    if (*(char *)(param_1 + 0x13) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

