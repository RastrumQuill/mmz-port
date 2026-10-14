// sub_0808CE28 at 0x0808CE28 (thumb)

undefined8 sub_0808CE28(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x58) + param_2;
  *(int *)(param_1 + 0x58) = iVar3;
  if (param_2 < 0) {
    iVar3 = sub_08009C90(*(int *)(param_1 + 0x54) + -0x1200,iVar3 + -0x1e00);
    iVar1 = sub_08009C90(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + -0x1e00);
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    if (0 < iVar3) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
      uVar2 = 1;
      goto LAB_0808ceae;
    }
  }
  else {
    iVar3 = sub_08009B28(*(int *)(param_1 + 0x54) + -0x1200,iVar3);
    iVar1 = sub_08009B28(*(int *)(param_1 + 0x54) + 0x1200,*(undefined4 *)(param_1 + 0x58));
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    if (iVar3 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
      uVar2 = 2;
      goto LAB_0808ceae;
    }
  }
  uVar2 = 0;
LAB_0808ceae:
  return CONCAT44(in_lr,uVar2);
}

