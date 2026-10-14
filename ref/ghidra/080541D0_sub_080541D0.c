// sub_080541D0 at 0x080541D0 (thumb)

undefined4 sub_080541D0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    goto LAB_08054288;
  }
  piVar2 = (int *)(param_1 + 0xc0);
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
LAB_08054226:
    if (*piVar2 == 0) {
LAB_080542dc:
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af770 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
  }
  else if (*piVar2 == 0) {
    iVar1 = sub_08015A64(0,param_1,&DAT_082af7c0);
    *piVar2 = iVar1;
    if (iVar1 == 0) goto LAB_080542dc;
    sub_0800561C(param_1 + 0x74,&DAT_082af7a4);
    *(undefined4 *)(param_1 + 0x58) = 0;
    goto LAB_08054226;
  }
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
    iVar1 = sub_08015D94(*piVar2);
    if (iVar1 == 0) {
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082af788);
    *piVar2 = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0805B5F8(param_1,param_1 + 0x4c);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 1;
LAB_08054288:
  sub_080542F8(param_1);
  return in_lr;
}

