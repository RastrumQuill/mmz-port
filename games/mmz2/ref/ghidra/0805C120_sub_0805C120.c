// sub_0805C120 at 0x0805C120 (thumb)

undefined4 sub_0805C120(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xfffffe00;
    }
    else {
      uVar2 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  if (((((*(uint *)(param_1 + 0x8c) & 0x800) != 0) &&
       (iVar5 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c), *(char *)(iVar5 + 8) == '\0')) &&
      ((*(uint *)(iVar5 + 0x8c) & 0x200) == 0)) && (*(short *)(iVar5 + 0xa4) != 0)) {
    *(int *)(param_1 + 0xd0) = iVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = 0x400;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = -0x400;
    }
    *(int *)(iVar5 + 0x54) = iVar3 + iVar4;
    *(int *)(iVar5 + 0x58) = *(int *)(param_1 + 0x58) + -0xa00;
    sub_0802311C(iVar5,0,~(*(byte *)(param_1 + 10) >> 4) & 1,0);
  }
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    sub_08006E08(param_1 + 0x74,&DAT_0833cd54);
    uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54);
      iVar5 = -0x1800;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar5 = 0x1800;
    }
    local_10 = local_10 + iVar5;
    local_c = *(undefined4 *)(param_1 + 0x58);
    sub_080A35FC(&local_10,3,0,0);
    *(undefined *)(param_1 + 0xd) = 0x22;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

