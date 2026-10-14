// sub_0808F040 at 0x0808F040 (thumb)

undefined4 sub_0808F040(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 0x201) == 0x201) {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb8) =
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54) -
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  }
  return in_lr;
}

