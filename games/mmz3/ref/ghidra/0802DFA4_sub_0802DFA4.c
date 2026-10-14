// sub_0802DFA4 at 0x0802DFA4 (thumb)

undefined4 sub_0802DFA4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x126) = 0xd;
  sub_08032850(param_1,0x3900);
  if (*(char *)(param_1 + 0x135) != '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 3;
    *(undefined *)(param_1 + 0xed) = 10;
    *(undefined *)(param_1 + 0xee) = 0;
  }
  return in_lr;
}

