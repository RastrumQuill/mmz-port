// sub_0808F85C at 0x0808F85C (thumb)

undefined4 sub_0808F85C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = param_1 + 0x54;
    sub_080AC60C(1,iVar1);
    sub_08003338((int)*(short *)(param_1 + 0xc0));
    sub_080032EC(0xcf);
    sub_0801DD2C(0,iVar1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + 0x2000;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,iVar1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

