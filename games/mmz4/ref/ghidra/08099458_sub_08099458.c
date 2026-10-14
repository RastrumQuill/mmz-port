// sub_08099458 at 0x08099458 (thumb)

undefined4 sub_08099458(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08099530(param_1);
    return in_lr;
  }
  piVar1 = (int *)(param_1 + 0xc0);
  if (*piVar1 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar2 = sub_0802AD94(0,param_1,&DAT_0885d8f8);
      *piVar1 = iVar2;
      if (iVar2 == 0) goto LAB_08099512;
      sub_0801CF00(param_1,0x6900);
      sub_08005784(param_1 + 0x74,&DAT_0885d840);
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (*piVar1 == 0) goto LAB_08099512;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(int *)(param_1 + 0xb8) < iVar2) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar2 = sub_0802B3CC(*piVar1);
  if (iVar2 == 0) {
    sub_0801CFF0(param_1);
    return in_lr;
  }
  sub_08005784(param_1 + 0x74,&DAT_0885d828);
  *piVar1 = 0;
LAB_08099512:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885d814 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

