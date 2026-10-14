// sub_080CB288 at 0x080CB288 (thumb)

undefined4 sub_080CB288(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080CB488(param_1);
    }
    else {
      sub_080CB594(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CB2CC(param_1);
  }
  return in_lr;
}

