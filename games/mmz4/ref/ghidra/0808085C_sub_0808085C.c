// sub_0808085C at 0x0808085C (thumb)

undefined4 sub_0808085C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3000U < 0x6001) {
    if ((*(int *)(param_1 + 0x58) + -0x6000 < *(int *)(DAT_0202dbf0 + 0x58)) &&
       (*(int *)(DAT_0202dbf0 + 0x58) < *(int *)(param_1 + 0x58) + 0x1000)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

