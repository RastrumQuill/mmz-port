// sub_0808B960 at 0x0808B960 (thumb)

undefined4 sub_0808B960(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar3 = *(int *)(iVar4 + 0x54);
    if (iVar2 < iVar3) {
      *(undefined *)(iVar4 + 0xbd) = 0;
    }
    else if (iVar3 < iVar2) {
      *(undefined *)(iVar4 + 0xbd) = 1;
    }
    else {
      *(bool *)(iVar4 + 0xbd) = iVar3 < *(int *)(DAT_0202dbf0 + 0x54);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (DAT_0202dbf0 != 0)) {
      uVar1 = sub_0803A584(DAT_0202dbf0,3,7);
      *(undefined *)(iVar4 + 0xbc) = uVar1;
    }
  }
  return in_lr;
}

