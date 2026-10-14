// sub_08085B34 at 0x08085B34 (thumb)

undefined4 sub_08085B34(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08085BE0(param_1);
    return in_lr;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364ccc + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080862A0(param_1);
  piVar2 = (int *)(param_1 + 0xbc);
  if (*piVar2 == 0) {
    iVar1 = sub_08063614(param_1);
    if (iVar1 != 0) {
      return in_lr;
    }
    if (*piVar2 == 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364ce4 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
  }
  iVar1 = sub_08025794(*piVar2);
  if (iVar1 == 0) {
    sub_08007390(param_1 + 0x74,&DAT_08364d2c);
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_08364d14);
    *piVar2 = 0;
  }
  return in_lr;
}

