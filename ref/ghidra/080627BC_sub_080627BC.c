// sub_080627BC at 0x080627BC (thumb)

undefined4 sub_080627BC(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) != '\x02') {
    iVar2 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x4c);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xb8);
    }
    if (0x1e000 < iVar2) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_08062948(param_1);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xc0);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar3 != 0) goto LAB_0806287c;
    iVar2 = sub_08015A64(0,param_1,&DAT_082b06b8);
    *piVar3 = iVar2;
    if (iVar2 == 0) goto LAB_08062924;
    sub_0800561C(param_1 + 0x74,&DAT_082b069c);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*piVar3 == 0) {
LAB_08062924:
    iVar2 = sub_08048BE8(param_1);
    if (iVar2 != 0) {
      return in_lr;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0648 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
LAB_0806287c:
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
  if (((uVar1 & 0xf) == 0) ||
     (uVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800),
     (uVar1 & 0xf0) != 0)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
  }
  iVar2 = sub_08015D94(*piVar3);
  if (iVar2 != 0) {
    *piVar3 = 0;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b0680);
  }
  return in_lr;
}

