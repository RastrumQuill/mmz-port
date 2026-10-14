// sub_0808102C at 0x0808102C (thumb)

undefined4 sub_0808102C(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (((*(uint *)(param_1 + 0x14) & 0x20000) != 0) && (DAT_0202dbf0 != 0)) {
      uVar1 = sub_0803A584(DAT_0202dbf0,6,0);
      *(undefined *)(iVar2 + 0xb7) = uVar1;
    }
  }
  return in_lr;
}

