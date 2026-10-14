// sub_0808B37C at 0x0808B37C (thumb)

undefined4 sub_0808B37C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb9) = 0x60;
  sub_0808B9EC(param_1,*(undefined *)(param_1 + 0xb8));
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,0x808b3b1);
  return in_lr;
}

