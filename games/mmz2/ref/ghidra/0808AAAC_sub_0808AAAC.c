// sub_0808AAAC at 0x0808AAAC (thumb)

undefined4 sub_0808AAAC(int param_1)

{
  undefined4 in_lr;
  
  if (0x3f < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 0xc;
    sub_080127E4(param_1,0x7409);
  }
  return in_lr;
}

