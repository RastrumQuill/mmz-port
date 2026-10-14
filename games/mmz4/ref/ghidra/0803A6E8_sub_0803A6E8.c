// sub_0803A6E8 at 0x0803A6E8 (thumb)

undefined4 sub_0803A6E8(int param_1,undefined param_2)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf5) = param_2;
  if (*(char *)(param_1 + 199) == '\x03') {
    *(undefined *)(param_1 + 0xf0) = 5;
    *(undefined *)(param_1 + 0xf1) = 5;
    *(undefined *)(param_1 + 0xf2) = 5;
    *(undefined *)(param_1 + 0xf3) = 5;
    *(undefined *)(param_1 + 0xf4) = 0xf;
    sub_08108CD8(param_1);
  }
  else if (*(char *)(param_1 + 199) == '\x02') {
    *(undefined *)(param_1 + 0xf0) = 7;
    *(undefined *)(param_1 + 0xf4) = 0x15;
    sub_08108CD8(param_1);
  }
  return in_lr;
}

