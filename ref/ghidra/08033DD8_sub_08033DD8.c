// sub_08033DD8 at 0x08033DD8 (thumb)

undefined4 sub_08033DD8(int param_1)

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
    sub_08033EB0(param_1);
    return in_lr;
  }
  sub_08035530(param_1);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(bool *)(param_1 + 0xd0) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    piVar2 = (int *)(param_1 + 0xe0);
    if (*piVar2 == 0) {
      iVar1 = sub_08015A64(7,param_1,&DAT_082ad680);
      *piVar2 = iVar1;
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 0xd) = 0xd;
        *(undefined *)(param_1 + 0xe) = 1;
        if (*piVar2 != 0) goto LAB_08033e8c;
      }
      if (5 < (byte)(*(char *)(param_1 + 0xd) - 0xdU)) {
        *(undefined *)(param_1 + 0xd) = 0xd;
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
  }
LAB_08033e8c:
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad578 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

