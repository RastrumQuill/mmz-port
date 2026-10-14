// sub_0807BCC8 at 0x0807BCC8 (thumb)

undefined4 sub_0807BCC8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364200 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_0807C250(param_1);
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364210 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      piVar2 = (int *)(param_1 + 0xbc);
      if (*piVar2 == 0) {
        *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        iVar1 = sub_08025794(*piVar2);
        if (iVar1 != 0) {
          *piVar2 = 0;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807BD5C(param_1);
  }
  return in_lr;
}

