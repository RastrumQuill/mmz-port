// sub_080A25F4 at 0x080A25F4 (thumb)

undefined4 sub_080A25F4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c [2];
  
  local_1c[0] = -0x4000;
  local_1c[1] = 0xffffe800;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08005784(param_1 + 0x74,&DAT_0885e7bc);
    sub_0801CF00(param_1,0x8401);
    iVar3 = uVar4 * 2 + -1;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + iVar3 * 0x4000;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + local_1c[bVar1];
    *(int *)(param_1 + 0x5c) = iVar3 * 0x180;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar3 = uVar4 * 2 + -1;
  if (-1 < iVar3 * (iVar2 - *(int *)(param_1 + 100))) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
  }
  iVar3 = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar3 >> 8) << 0x18) >> 0x17)) *
          local_1c[bVar1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - (iVar3 >> 8);
  if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 100)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

