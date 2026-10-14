// sub_08085480 at 0x08085480 (thumb)

undefined4 sub_08085480(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08085538(param_1);
    return in_lr;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364c20 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08085910(param_1);
  piVar1 = (int *)(param_1 + 0xbc);
  if (*piVar1 == 0) {
    iVar2 = sub_08063614(param_1);
    if (iVar2 != 0) {
      return in_lr;
    }
    if (*piVar1 == 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364c38 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
  }
  iVar2 = sub_08025794(*piVar1);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0xd) == '\x02') {
      sub_08007390(param_1 + 0x74,&DAT_08364c80);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08364c50);
    }
    *piVar1 = 0;
  }
  return in_lr;
}

