// sub_08034E64 at 0x08034E64 (thumb)

undefined4 sub_08034E64(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0803A434(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x26f) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 10;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x101) = 4;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08033B98(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x101) = 1;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08034EF0(param_1);
  }
  return in_lr;
}

