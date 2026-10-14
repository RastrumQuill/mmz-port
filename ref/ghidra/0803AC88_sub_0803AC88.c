// sub_0803AC88 at 0x0803AC88 (thumb)

void sub_0803AC88(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0xdb) == param_2) {
    *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
  }
  else {
    *(char *)(param_1 + 0xdb) = param_2;
    *(undefined *)(param_1 + 0xda) = 0;
  }
  return;
}

