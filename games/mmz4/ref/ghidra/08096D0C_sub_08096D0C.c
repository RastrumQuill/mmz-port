// sub_08096D0C at 0x08096D0C (thumb)

undefined4 sub_08096D0C(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_08096E28(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08096FD4(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xc0);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar3 = sub_0802AD94(0,param_1,&DAT_0885d568);
      *piVar2 = iVar3;
      if (iVar3 == 0) goto LAB_08096dd6;
      sub_08005784(param_1 + 0x74,&DAT_0885d478);
    }
    if (*piVar2 == 0) goto LAB_08096dd6;
  }
  iVar3 = sub_0802B3CC(*piVar2);
  if (iVar3 == 0) {
    sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    sub_0801CFC8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
    sub_0801CFF0(param_1);
    return in_lr;
  }
  sub_08005784(param_1 + 0x74,&DAT_0885d460);
  *piVar2 = 0;
LAB_08096dd6:
  if (((*(char *)(param_1 + 0xd) != '\x02') && (*(char *)(param_1 + 0xd) != '\x05')) &&
     ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) !=
      *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54))) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885d41c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

