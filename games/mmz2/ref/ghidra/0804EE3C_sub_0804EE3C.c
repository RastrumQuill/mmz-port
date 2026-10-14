// sub_0804EE3C at 0x0804EE3C (thumb)

undefined4 sub_0804EE3C(int param_1,char param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == param_2) {
    *(char *)(param_1 + 0xc6) = *(char *)(param_1 + 0xc6) + '\x01';
  }
  else {
    *(char *)(param_1 + 199) = param_2;
    *(undefined *)(param_1 + 0xc6) = 0;
  }
  return in_lr;
}

