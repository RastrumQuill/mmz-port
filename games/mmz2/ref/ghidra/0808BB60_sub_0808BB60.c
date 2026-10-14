// sub_0808BB60 at 0x0808BB60 (thumb)

undefined8 sub_0808BB60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = sub_080093C4(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_080093C4(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
  if ((iVar3 < iVar1) || (iVar2 < iVar1)) {
    if ((iVar1 < iVar2) || (iVar3 < iVar2)) {
      sub_08008CFC(*(int *)(param_1 + 0x54) + 0x800,*(undefined4 *)(param_1 + 0x58));
      goto LAB_0808bbcc;
    }
    iVar4 = *(int *)(param_1 + 0x54);
    iVar3 = iVar2;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + -0x800;
    iVar3 = iVar1;
  }
  sub_08008CFC(iVar4,*(undefined4 *)(param_1 + 0x58));
LAB_0808bbcc:
  return CONCAT44(in_lr,(uint)(iVar3 - *(int *)(param_1 + 0x58) < 1));
}

