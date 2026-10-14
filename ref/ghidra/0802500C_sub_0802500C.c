// sub_0802500C at 0x0802500C (thumb)

undefined4 sub_0802500C(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xc0);
  cVar1 = *pcVar2;
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 2;
    *(char *)(param_1 + 0xc3) = *pcVar2;
    *pcVar2 = cVar1;
    sub_08027F54(param_1,cVar1 * '\x03' + '\x1d',0);
  }
  return in_lr;
}

