// sub_080337B8 at 0x080337B8 (thumb)

undefined4 sub_080337B8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x14);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x100;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    if (*(char *)(param_1 + 0xd0) != '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0xffffff00;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082ad494);
    sub_08001EAC(0x8d);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  sub_080297C0(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  piVar3 = (int *)(param_1 + 0xe0);
  iVar2 = sub_08015D94(*piVar3);
  if (iVar2 != 0) {
    *piVar3 = 0;
  }
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar2 < *(int *)(param_1 + 0x50)) {
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    if (*piVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 0x2d;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  return in_lr;
}

