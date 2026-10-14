// sub_0808D78C at 0x0808D78C (thumb)

undefined8 sub_0808D78C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (param_2 == 0) {
LAB_0808d80c:
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      iVar1 = sub_08009240(iVar1 + -0x1000,*(int *)(param_1 + 0x58) + -0x1800);
      iVar2 = sub_08009240(*(int *)(param_1 + 0x54) + -0x1000,*(undefined4 *)(param_1 + 0x58));
      if ((iVar1 == 0) && (iVar2 == 0)) goto LAB_0808d80c;
      if (iVar2 < iVar1) {
LAB_0808d7fa:
        iVar2 = iVar1;
      }
    }
    else {
      iVar1 = sub_080090D4(iVar1 + 0x1000,*(int *)(param_1 + 0x58) + -0x1800);
      iVar2 = sub_080090D4(*(int *)(param_1 + 0x54) + 0x1000,*(undefined4 *)(param_1 + 0x58));
      if ((iVar1 == 0) && (iVar2 == 0)) goto LAB_0808d80c;
      if (iVar1 < iVar2) goto LAB_0808d7fa;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

