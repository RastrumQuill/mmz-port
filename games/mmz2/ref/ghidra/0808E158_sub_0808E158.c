// sub_0808E158 at 0x0808E158 (thumb)

undefined4 sub_0808E158(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar2 + 0xbc) = *(int *)(DAT_0202e130 + 0x54) - *(int *)(iVar2 + 0x54);
  puVar1 = (uint *)(iVar2 + 0xb8);
  *puVar1 = 0;
  if ((*(uint *)(iVar2 + 0x8c) & 0x10000) != 0) {
    *puVar1 = 1;
  }
  if ((*(uint *)(iVar2 + 0x8c) & 0x8000) != 0) {
    *puVar1 = *puVar1 | 2;
  }
  return in_lr;
}

