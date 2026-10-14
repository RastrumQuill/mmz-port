// sub_08025A54 at 0x08025A54 (thumb)

undefined4 sub_08025A54(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x176) == '\0') {
    sub_08034A6C(param_1);
  }
  *(undefined *)(param_1 + 0x185) = 0;
  cVar1 = sub_08031910(param_1);
  if (cVar1 == '\x01') {
    if ((*(char *)(param_1 + 0xf) == '\0') || (*(char *)(param_1 + 0xf) == '\x02')) {
      *(undefined *)(param_1 + 0x187) = 4;
    }
    sub_08025AB0(param_1);
  }
  else {
    sub_08025ED4(param_1);
  }
  return in_lr;
}

