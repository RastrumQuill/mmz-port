// sub_080634E0 at 0x080634E0 (thumb)

undefined4 sub_080634E0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_08063368(param_1);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xc0);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar3 != 0) goto LAB_0806357c;
    iVar1 = sub_08015A64(0,param_1,&DAT_082b079c);
    *piVar3 = iVar1;
    if (iVar1 == 0) goto LAB_0806360c;
    sub_080033F0(param_1 + 0x6c,0);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    sub_0800561C(param_1 + 0x74,&DAT_082b0780);
  }
  if (*piVar3 == 0) {
LAB_0806360c:
    iVar1 = sub_08048BE8(param_1);
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 8;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b06ec + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
LAB_0806357c:
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x50) < iVar1) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
  }
  else {
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  iVar1 = sub_08015D94(*piVar3);
  if (iVar1 != 0) {
    *piVar3 = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082b0710);
  }
  return in_lr;
}

