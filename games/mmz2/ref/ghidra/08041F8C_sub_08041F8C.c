// sub_08041F8C at 0x08041F8C (thumb)

undefined4 sub_08041F8C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0xd8) = 0xe04;
    *(undefined *)(param_1 + 0xd4) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(*(int *)(param_1 + 0xc0) + 0xd) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

