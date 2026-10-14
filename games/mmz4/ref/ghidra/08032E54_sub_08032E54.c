// sub_08032E54 at 0x08032E54 (thumb)

undefined4 sub_08032E54(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x143) == '\x02') {
    sub_0801CFC8(param_1,0x404,2,1);
  }
  else if (*(char *)(param_1 + 0xfc) == '\0') {
    sub_0801CF00(param_1,0x200);
  }
  else {
    sub_0801CFC8(param_1,0x404,2,1);
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0x100) = 0;
  *(undefined *)(param_1 + 0x149) = 0xff;
  *(undefined *)(param_1 + 0x14e) = 0xff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08032EE8(param_1);
  return in_lr;
}

