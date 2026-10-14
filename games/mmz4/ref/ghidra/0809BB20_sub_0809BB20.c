// sub_0809BB20 at 0x0809BB20 (thumb)

undefined4 sub_0809BB20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_28 [4];
  byte abStack_18 [4];
  
  local_28[0] = 0xa70b;
  local_28[1] = 0xa70b;
  local_28[2] = 0xa710;
  local_28[3] = 0xa710;
  sub_08128B5C(abStack_18,&DAT_0812959c,4);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(local_28 + uVar3));
    *(undefined *)(param_1 + 0x12) = 6;
    iVar1 = *(int *)(&DAT_0885de34 + uVar3 * 8);
    *(int *)(param_1 + 0x5c) = iVar1;
    iVar2 = *(int *)(&DAT_0885de38 + uVar3 * 8);
    *(int *)(param_1 + 0x60) = iVar2;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + iVar1 * 5;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + iVar2 * 5;
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + (&DAT_0885de08)[abStack_18[uVar3]]));
  uVar3 = (uint)(*(byte *)(param_1 + 0x12) >> 1);
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) - uVar3 * *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - uVar3 * *(int *)(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    sub_08066468(param_1 + 0x54,0,0);
  }
  if (((*(char *)(param_1 + 0x12) == '\0') || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) ||
     (iVar1 = sub_0809C0CC(param_1), iVar1 != 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

