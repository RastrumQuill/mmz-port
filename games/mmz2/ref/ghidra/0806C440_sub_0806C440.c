// sub_0806C440 at 0x0806C440 (thumb)

undefined4 sub_0806C440(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 0x200) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb4) = 1;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0806C518(param_1);
    return in_lr;
  }
  iVar1 = sub_08065A24(param_1);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xbc) == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0xbc) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833e53c);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xbc);
  if ((*puVar3 & 1) == 0) {
LAB_0806c4e6:
    if (*piVar2 == 0) goto LAB_0806c4fa;
  }
  else if (*piVar2 == 0) {
    iVar1 = sub_0801E11C(0,param_1,&DAT_0833e534);
    *piVar2 = iVar1;
    if (iVar1 == 0) goto LAB_0806c4fa;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    goto LAB_0806c4e6;
  }
  iVar1 = sub_0801E4D8(*piVar2);
  if (iVar1 != 0) {
    *piVar2 = 0;
  }
LAB_0806c4fa:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833e524 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

