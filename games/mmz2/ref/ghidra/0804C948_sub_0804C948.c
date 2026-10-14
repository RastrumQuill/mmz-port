// sub_0804C948 at 0x0804C948 (thumb)

undefined4 sub_0804C948(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x54);
    sub_08003430(param_1 + 0x34,0x804ccdd);
    *(int *)(param_1 + 0x3c) = param_1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
    sub_08006E08(param_1 + 0x74,&DAT_0833b2f8);
    DAT_02000f90 = DAT_02000f90 | 0x2400;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffff800;
    }
    else {
      uVar3 = 0x800;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x10;
    sub_080032EC(0x65);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((((*(uint *)(param_1 + 0x8c) & 4) != 0) && (iVar5 = *(int *)(param_1 + 0xd8), iVar5 != 0)) &&
      ((*(uint *)(iVar5 + 0x8c) & 0x200) == 0)) && (*(short *)(iVar5 + 0xa4) != 0)) {
    sVar4 = -0x600;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      sVar4 = 0x600;
    }
    sub_08022EA8(iVar5,0,(int)sVar4,0xfffffd80,0,0x40,0x18,0);
  }
  if (*(char *)(param_1 + 0xf) != '\0') {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xd4);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0x27;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  bVar1 = false;
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(DAT_0202e130 + 0x54) <= iVar5) goto LAB_0804ca80;
  }
  else if (iVar5 <= *(int *)(DAT_0202e130 + 0x54)) goto LAB_0804ca80;
  bVar1 = true;
LAB_0804ca80:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    *(int *)(param_1 + 0xd4) = iVar5 >> 3;
    *(undefined *)(param_1 + 0x12) = 7;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}

