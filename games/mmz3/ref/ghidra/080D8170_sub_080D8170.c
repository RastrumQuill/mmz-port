// sub_080D8170 at 0x080D8170 (thumb)

undefined4 sub_080D8170(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\b') &&
     (uVar1 = DAT_02030104 & 0x10, (DAT_02030104 & 0x10) == 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar1;
    *(uint *)(param_1 + 0x90) = uVar1;
    *(char *)(param_1 + 0x94) = (char)uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_0801749C(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar2 = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x54) = iVar2;
  iVar2 = sub_0800A104(iVar2,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar2 + 0x100;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080D8230(param_1);
  return in_lr;
}

