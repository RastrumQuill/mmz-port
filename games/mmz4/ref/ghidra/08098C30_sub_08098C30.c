// sub_08098C30 at 0x08098C30 (thumb)

undefined4 sub_08098C30(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08098D00(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xc0);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar3 = sub_0802AD94(0,param_1,&DAT_0885d7f0);
      *piVar2 = iVar3;
      if (iVar3 == 0) goto LAB_08098ce2;
      sub_08005784(param_1 + 0x74,&DAT_0885d784);
    }
    if (*piVar2 == 0) goto LAB_08098ce2;
  }
  iVar3 = sub_0802B3CC(*piVar2);
  if (iVar3 == 0) {
    sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    sub_0801CFC8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
    sub_0801CFF0(param_1);
    return in_lr;
  }
  sub_08005784(param_1 + 0x74,&DAT_0885d76c);
  *piVar2 = 0;
LAB_08098ce2:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885d750 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

