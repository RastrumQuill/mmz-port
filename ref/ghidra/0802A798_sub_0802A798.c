// sub_0802A798 at 0x0802A798 (thumb)

undefined4 sub_0802A798(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) != 0) || (*(short *)(param_1 + 0x8c) == 0)) &&
     ((DAT_02022b64 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0802A844(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xcc);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar2 != 0) goto LAB_0802a812;
    iVar1 = sub_08015A64(2,param_1,&DAT_082acd5c);
    *piVar2 = iVar1;
  }
  if (*piVar2 == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082acd04 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
LAB_0802a812:
  iVar1 = sub_08015D94(*piVar2);
  if (iVar1 != 0) {
    *piVar2 = 0;
  }
  return in_lr;
}

