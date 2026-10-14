// sub_08037518 at 0x08037518 (thumb)

undefined4 sub_08037518(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)iVar1;
  iVar2 = *(int *)(param_1 + 0xbc);
  iVar1 = sub_080C8AD0(iVar1 * (*(int *)(param_1 + 0xc0) - iVar2),*(undefined *)(param_1 + 0xbb));
  *(int *)(param_1 + 0x4c) = iVar2 + iVar1;
  sub_08038BAC(param_1);
  if ((0 < *(int *)(param_1 + 0x58)) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x50) + -0x80 <= *(int *)(param_1 + 0x50))) {
    *(undefined2 *)(param_1 + 0xe) = 4;
    sub_08037564(param_1);
  }
  return in_lr;
}

