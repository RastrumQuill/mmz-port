// sub_0808DF8C at 0x0808DF8C (thumb)

undefined4 sub_0808DF8C(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885c594 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808E4E8(param_1);
  }
  return in_lr;
}

