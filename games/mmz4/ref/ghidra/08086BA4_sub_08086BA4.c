// sub_08086BA4 at 0x08086BA4 (thumb)

undefined4 sub_08086BA4(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if ((DAT_0202e924 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0xb8);
      if (iVar2 == 0) {
        iVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
        if (iVar2 != 0) {
          return in_lr;
        }
        uVar1 = sub_0807F8F0(param_1,7);
        if (*(byte *)(param_1 + 0xb4) <= uVar1) {
          return in_lr;
        }
        local_14 = *(int *)(param_1 + 0x54) + 0x800;
        local_10 = *(int *)(param_1 + 0x58) + 0x800;
        sub_08085E74(param_1,&local_14,1,*(undefined *)(param_1 + 0x10));
        iVar2 = 0xf0;
      }
      else {
        iVar2 = iVar2 + -1;
      }
      *(int *)(param_1 + 0xb8) = iVar2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08086C48(param_1);
  }
  return in_lr;
}

