// sub_0808569C at 0x0808569C (thumb)

undefined4 sub_0808569C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08085288();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

