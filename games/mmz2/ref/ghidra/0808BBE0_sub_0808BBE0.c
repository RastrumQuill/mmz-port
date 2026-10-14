// sub_0808BBE0 at 0x0808BBE0 (thumb)

undefined4 sub_0808BBE0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar1 - *(int *)(param_1 + 0x58) < 0x501) {
    *(int *)(param_1 + 0x58) = iVar1;
  }
  return in_lr;
}

