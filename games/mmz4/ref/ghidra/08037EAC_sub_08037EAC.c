// sub_08037EAC at 0x08037EAC (thumb)

undefined4 sub_08037EAC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0803A434(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + 0x26f) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08037F98(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x101) = 1;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08037F20(param_1);
  }
  return in_lr;
}

