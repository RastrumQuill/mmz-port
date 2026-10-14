// sub_0808632C at 0x0808632C (thumb)

undefined4 sub_0808632C(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar3 + 0xb4) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar2 = 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar2 = 8;
  }
  if ((uVar1 & uVar2) != 0) {
    *(bool *)(iVar3 + 0x13) = *(int *)(iVar3 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
  }
  return in_lr;
}

