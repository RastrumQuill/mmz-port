// sub_0808D6FC at 0x0808D6FC (thumb)

undefined8 sub_0808D6FC(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_2 == 0) {
LAB_0808d784:
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58) + param_2;
    *(int *)(param_1 + 0x58) = iVar3;
    if (param_2 < 0) {
      iVar3 = sub_08008F50(*(int *)(param_1 + 0x54) + -0x1000,iVar3 + -0x1800);
      iVar1 = sub_08008F50(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0x1800);
      if ((iVar3 == 0) && (iVar1 == 0)) goto LAB_0808d784;
      if (iVar1 < iVar3) {
LAB_0808d772:
        iVar1 = iVar3;
      }
    }
    else {
      iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x1000,iVar3);
      iVar1 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x1000,*(undefined4 *)(param_1 + 0x58));
      if ((iVar3 == 0) && (iVar1 == 0)) goto LAB_0808d784;
      if (iVar3 < iVar1) goto LAB_0808d772;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

