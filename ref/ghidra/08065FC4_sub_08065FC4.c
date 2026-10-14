// sub_08065FC4 at 0x08065FC4 (thumb)

undefined4 sub_08065FC4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
LAB_080660b4:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08066104(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar1 = *(int *)(param_1 + 0x20);
    if (*(byte *)(iVar1 + 0xc) < 2) {
      if (*(int *)(iVar1 + 0xc4) != 0) {
        return in_lr;
      }
      iVar1 = sub_08048BE8(iVar1);
      if (iVar1 != 0) {
        return in_lr;
      }
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0a9c + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    goto LAB_080660b4;
  }
  if ((*(char *)(param_1 + 0xc1) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc))) {
    *(char *)(param_1 + 0xc1) = '\x01';
  }
  piVar2 = (int *)(param_1 + 0xc4);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar2 != 0) goto LAB_0806604e;
    iVar1 = sub_08015A64(0,param_1,&DAT_082b0b50);
    *piVar2 = iVar1;
    if (iVar1 == 0) goto LAB_0806608c;
    sub_0800561C(param_1 + 0x74,&DAT_082b0b34);
  }
  if (*piVar2 == 0) {
LAB_0806608c:
    iVar1 = sub_08048BE8(param_1);
    if (iVar1 != 0) {
      return in_lr;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0a74 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
LAB_0806604e:
  iVar1 = sub_08015D94(*piVar2);
  if (iVar1 == 0) {
    return in_lr;
  }
  *piVar2 = 0;
  if (*(char *)(param_1 + 0xd) == '\t') {
    sub_0800561C(param_1 + 0x74,&DAT_082b0ae0);
    return in_lr;
  }
  sub_0800561C(param_1 + 0x74,&DAT_082b0ac4);
  return in_lr;
}

