// sub_080CAD8C at 0x080CAD8C (thumb)

undefined4 sub_080CAD8C(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080CAFA0(param_1);
    }
    else {
      sub_080CAFEC(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CADD0(param_1);
  }
  return in_lr;
}

