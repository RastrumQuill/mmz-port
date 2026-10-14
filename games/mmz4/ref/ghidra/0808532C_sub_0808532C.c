// sub_0808532C at 0x0808532C (thumb)

undefined8 sub_0808532C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
  iVar2 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
  return CONCAT44(in_lr,(uint)(0 < iVar1 && iVar2 < 0));
}

