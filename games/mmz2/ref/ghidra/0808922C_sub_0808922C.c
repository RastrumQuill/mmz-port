// sub_0808922C at 0x0808922C (thumb)

undefined4 sub_0808922C(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08009240(*(int *)(param_1 + 0x54) + *param_2,*(int *)(param_1 + 0x58) + param_2[1]);
  iVar1 = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08008F50(iVar1 + param_2[4],*(int *)(param_1 + 0x58) + param_2[5]);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  return in_lr;
}

