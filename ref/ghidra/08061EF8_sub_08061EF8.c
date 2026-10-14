// sub_08061EF8 at 0x08061EF8 (thumb)

undefined4 sub_08061EF8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((1 < *(byte *)(iVar2 + 0xc)) || (*(char *)(iVar2 + 0xd) == '\x0f')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(char *)(iVar2 + 0xc0) = *(char *)(iVar2 + 0xc0) + -1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xf) = 1;
LAB_08061f6a:
    sub_0806209C(param_1);
    return in_lr;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(char *)(iVar2 + 0xc0) = *(char *)(iVar2 + 0xc0) + -1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08001EAC(0xec);
    goto LAB_08061f6a;
  }
  if ((*(int *)(param_1 + 0x4c) < *(int *)(iVar2 + 0xb8) + -0x2000) ||
     (*(int *)(iVar2 + 0xb8) + 0x11000 < *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    *(char *)(iVar2 + 0xc0) = *(char *)(iVar2 + 0xc0) + -1;
    return in_lr;
  }
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) + 1 & 0x3ff;
  piVar3 = (int *)(param_1 + 0xc0);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar3 != 0) goto LAB_08061ffc;
    iVar2 = sub_08015A64(0,param_1,&DAT_082b062c);
    *piVar3 = iVar2;
    if (iVar2 == 0) goto LAB_08062082;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b05d8);
  }
  if (*piVar3 == 0) {
LAB_08062082:
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b05c0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
LAB_08061ffc:
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x50) < iVar2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
  }
  else {
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
  }
  iVar2 = sub_08015D94(*piVar3);
  if (iVar2 == 0) {
    return in_lr;
  }
  *piVar3 = 0;
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

