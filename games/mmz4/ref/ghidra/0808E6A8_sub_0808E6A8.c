// sub_0808E6A8 at 0x0808E6A8 (thumb)

undefined4 sub_0808E6A8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  iVar1 = sub_080D0894(1,param_1 + 0x54);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) | 0xc;
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

