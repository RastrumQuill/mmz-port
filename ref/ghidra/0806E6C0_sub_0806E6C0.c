// sub_0806E6C0 at 0x0806E6C0 (thumb)

undefined4 sub_0806E6C0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xc0);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar3 != 0) goto LAB_0806e72c;
    iVar1 = sub_08015A64(0,param_1,&DAT_082b1130);
    *piVar3 = iVar1;
    if (iVar1 == 0) goto LAB_0806e794;
    puVar2 = &DAT_082b10c0;
    if (1 < *(byte *)(param_1 + 0x10)) {
      puVar2 = &DAT_082b10dc;
    }
    sub_0800561C(param_1 + 0x74,puVar2);
  }
  if (*piVar3 == 0) {
LAB_0806e794:
    iVar1 = sub_08048BE8(param_1);
    if (iVar1 != 0) {
      return in_lr;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b1074 + (uint)*(byte *)(param_1 + 0x10) * 4));
    return in_lr;
  }
LAB_0806e72c:
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar1 = sub_08015D94(*piVar3);
  if (iVar1 != 0) {
    *piVar3 = 0;
    puVar2 = &DAT_082b1088;
    if (1 < *(byte *)(param_1 + 0x10)) {
      puVar2 = &DAT_082b10a4;
    }
    sub_0800561C(param_1 + 0x74,puVar2);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

