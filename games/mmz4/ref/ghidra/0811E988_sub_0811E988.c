// sub_0811E988 at 0x0811E988 (thumb)

undefined4 sub_0811E988(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x63a8);
  if ((*(char *)(param_1 + 2) == '\0') && ((DAT_02000764 & 2) != 0)) {
    *(undefined *)(param_1 + 1) = 3;
  }
  else {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08886174 + (uint)*(byte *)(param_1 + 2) * 4));
  }
  sub_080025D8(0x41);
  sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*(byte *)(iVar1 + 0xf5) + 0x5a],0x15,1);
  sub_0811BBA0(param_1);
  return in_lr;
}

