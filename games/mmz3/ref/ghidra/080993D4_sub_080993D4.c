// sub_080993D4 at 0x080993D4 (thumb)

undefined4 sub_080993D4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xd50c);
    sub_08007390(param_1 + 0x74,&DAT_08366ca0);
    *(undefined *)(param_1 + 0x12) = 0x18;
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      uVar3 = 0x60;
    }
    else {
      uVar3 = 0xffffffa0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0x10 >> 8);
  *(int *)(param_1 + 0x5c) = iVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar4 = *(int *)(param_1 + 0x54);
    iVar6 = 0xa00;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54);
    iVar6 = -0xa00;
  }
  iVar4 = sub_08009B28(iVar4 + iVar6);
  if (iVar4 != 0) {
    *(char *)(param_1 + 0xbb) = *(char *)(param_1 + 0xbb) + '\x01';
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) == 0) {
    if (*(int *)(DAT_0202f5c0 + 0x54) <= *(int *)(param_1 + 0x54)) goto LAB_080994ee;
    uVar5 = 1;
    *(byte *)(param_1 + 10) = bVar1 | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    if (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_080994ee;
    uVar5 = 0;
    *(byte *)(param_1 + 10) = bVar1 & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  *(byte *)(param_1 + 0x4a) = bVar1;
  *(undefined *)(param_1 + 0xb8) = uVar5;
LAB_080994ee:
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

