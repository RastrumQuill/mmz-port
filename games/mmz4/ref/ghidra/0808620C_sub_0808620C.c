// sub_0808620C at 0x0808620C (thumb)

undefined4 sub_0808620C(int param_1)

{
  undefined4 in_lr;
  
  if ((0x1e000 < (*(int *)(param_1 + 100) - *(int *)(DAT_0202dbf0 + 0x54)) + 0xf000U) ||
     (0x14000 < (*(int *)(param_1 + 0x68) - *(int *)(DAT_0202dbf0 + 0x58)) + 0xc400U)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

