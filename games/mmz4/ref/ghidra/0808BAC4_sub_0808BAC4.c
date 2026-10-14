// sub_0808BAC4 at 0x0808BAC4 (thumb)

undefined4 sub_0808BAC4(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x2100);
  *(undefined *)(param_1 + 0xba) = 0;
  *(undefined *)(param_1 + 0xbb) = 4;
  return in_lr;
}

