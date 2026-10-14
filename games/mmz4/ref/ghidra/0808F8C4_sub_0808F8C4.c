// sub_0808F8C4 at 0x0808F8C4 (thumb)

undefined4 sub_0808F8C4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_4 * 0x2000000 + -0x1000000 >> 0x18;
  *(int *)(param_1 + 0x5c) = iVar1 * param_2;
  *(int *)(param_1 + 100) = iVar1 * param_3;
  *(undefined *)(param_1 + 0xb8) = 0;
  return in_lr;
}

