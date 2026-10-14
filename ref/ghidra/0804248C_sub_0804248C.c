// sub_0804248C at 0x0804248C (thumb)

undefined4 sub_0804248C(int param_1,char param_2)

{
  undefined4 in_lr;
  
  if (param_2 != '\0') {
    if (*(char *)(param_1 + 0xe7) == param_2) {
      *(char *)(param_1 + 0xe6) = *(char *)(param_1 + 0xe6) + '\x01';
    }
    else {
      *(char *)(param_1 + 0xe7) = param_2;
      *(undefined *)(param_1 + 0xe6) = 0;
    }
  }
  return in_lr;
}

