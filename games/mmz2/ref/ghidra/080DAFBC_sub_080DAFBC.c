// sub_080DAFBC at 0x080DAFBC (thumb)

undefined4 sub_080DAFBC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) != '\x01') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DAEEC(param_1);
  }
  return in_lr;
}

