// sub_080BAC40 at 0x080BAC40 (thumb)

undefined4 sub_080BAC40(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080B8C00(param_1,*(char *)(param_1 + 0x11) + '\x04');
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080BAC70(param_1);
  return in_lr;
}

