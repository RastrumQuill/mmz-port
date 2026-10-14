// sub_080A38C8 at 0x080A38C8 (thumb)

undefined4 sub_080A38C8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A3970(param_1);
    return in_lr;
  }
  piVar1 = (int *)(param_1 + 0xc0);
  if (*piVar1 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar2 = sub_0802AD94(0,param_1,&DAT_0885ea84);
      *piVar1 = iVar2;
      if (iVar2 == 0) goto LAB_080a3944;
      sub_08005784(param_1 + 0x74,&DAT_0885ea00);
    }
    if (*piVar1 == 0) goto LAB_080a3944;
  }
  iVar2 = sub_0802B3CC(*piVar1);
  if (iVar2 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_0885e9e8);
    *piVar1 = 0;
  }
LAB_080a3944:
  sub_0801CFF0(param_1);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885e9d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

