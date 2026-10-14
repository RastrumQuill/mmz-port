// sub_080BACCC at 0x080BACCC (thumb)

undefined4 sub_080BACCC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080B8C70(param_1,*(char *)(param_1 + 0x11) + '\x04');
  *(undefined *)(param_1 + 0x13) = 0;
  return in_lr;
}

