// sub_080303CC at 0x080303CC (thumb)

undefined4 sub_080303CC(int param_1)

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
    sub_080301CC(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xe4);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*piVar2 != 0) goto LAB_08030462;
    iVar1 = sub_08015A64(5,param_1,&DAT_082ad3ac);
    *piVar2 = iVar1;
    if (iVar1 == 0) goto LAB_080304a0;
    sub_08029778(param_1,4);
    sub_080297C0(param_1);
    sub_0800561C(param_1 + 0x74,&DAT_082ad374);
  }
  if (*piVar2 == 0) {
LAB_080304a0:
    *(undefined *)(param_1 + 0xc1) = 0;
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad2fc + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
LAB_08030462:
  sub_080297C0(param_1);
  iVar1 = sub_08015D94(*piVar2);
  if (iVar1 != 0) {
    *piVar2 = 0;
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 1;
    iVar1 = *(byte *)(param_1 + 0x8c) - 0xc;
    *(undefined *)(param_1 + 0xd8) = (char)iVar1;
    if (iVar1 * 0x1000000 < 0) {
      *(undefined *)(param_1 + 0xd8) = 0;
    }
  }
  return in_lr;
}

