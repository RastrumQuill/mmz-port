// sub_0808B490 at 0x0808B490 (thumb)

undefined4 sub_0808B490(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836555c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365570 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808B4F8(param_1);
  }
  return in_lr;
}

