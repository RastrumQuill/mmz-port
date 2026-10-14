// sub_08063CAC at 0x08063CAC (thumb)

undefined4 sub_08063CAC(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x24);
  bVar1 = DAT_02022ae0 & 0x10;
  if ((DAT_02022ae0 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar1;
    sub_08063DE4(param_1);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xc0);
  if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x30)) {
    if (*piVar3 != 0) goto LAB_08063d5a;
    iVar2 = sub_08015A64(0,param_1,&DAT_082b0838);
    *piVar3 = iVar2;
    if (iVar2 == 0) goto LAB_08063dac;
    sub_080033F0(param_1 + 0x6c,8);
    sub_0800561C(param_1 + 0x74,&DAT_082b081c);
  }
  if (*piVar3 == 0) {
LAB_08063dac:
    if ((*(byte *)(param_1 + 0xd) < 4) && (3 < *(byte *)(iVar4 + 0x11))) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    iVar4 = sub_08048BE8(param_1);
    if (iVar4 != 0) {
      return in_lr;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&UNK_082b07b8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
LAB_08063d5a:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar4 = sub_08015D94(*piVar3);
  if (iVar4 != 0) {
    *piVar3 = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b07e4);
  }
  return in_lr;
}

