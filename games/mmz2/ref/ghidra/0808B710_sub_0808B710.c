// sub_0808B710 at 0x0808B710 (thumb)

undefined4 sub_0808B710(int param_1)

{
  undefined4 in_lr;
  
  if (0x3fff < *(int *)(param_1 + 0xb4)) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080127E4(param_1,0x7400);
  }
  return in_lr;
}

