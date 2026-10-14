// sub_0808F418 at 0x0808F418 (thumb)

undefined4 sub_0808F418(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40);
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

