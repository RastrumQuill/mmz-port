// sub_08092154 at 0x08092154 (thumb)

undefined4 sub_08092154(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xbc);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*piVar2 != 0) goto LAB_080921ca;
    iVar1 = sub_0801E11C(0,param_1,&DAT_08342858);
    *piVar2 = iVar1;
    if (iVar1 == 0) goto LAB_08092218;
    sub_08006E08(param_1 + 0x74,&DAT_08342810 + (*(byte *)(param_1 + 0x10) & 2) * 0x18);
  }
  if (*piVar2 == 0) {
LAB_08092218:
    iVar1 = sub_08065A24(param_1);
    if (iVar1 != 0) {
      return in_lr;
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_083427e8 + (uint)*(byte *)(param_1 + 0x10) * 4));
    return in_lr;
  }
LAB_080921ca:
  sub_080127E4(param_1,0x8f00);
  sub_080128D4(param_1);
  iVar1 = sub_0801E4D8(*piVar2);
  if (iVar1 != 0) {
    *piVar2 = 0;
    sub_08006E08(param_1 + 0x74,&DAT_083427f8 + (*(byte *)(param_1 + 0x10) & 2) * 0x18);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

