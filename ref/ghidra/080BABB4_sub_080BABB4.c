// sub_080BABB4 at 0x080BABB4 (thumb)

undefined4 sub_080BABB4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080BB134();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
    cVar1 = sub_080BAF44(param_1);
    *(char *)(param_1 + 0x11) = cVar1;
    sub_080B8C70(param_1,cVar1 + '\x04');
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080BABF8(param_1);
  }
  return in_lr;
}

