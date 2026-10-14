// sub_0808852C at 0x0808852C (thumb)

undefined4 sub_0808852C(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      sub_08088894(param_1);
    }
    else if (*(char *)(param_1 + 0xd) == '\x01') {
      sub_08088930(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08088574(param_1);
  }
  return in_lr;
}

