// sub_0808B5C0 at 0x0808B5C0 (thumb)

undefined4 sub_0808B5C0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  iVar1 = sub_0808BAE4(param_1);
  if (iVar1 == 1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

