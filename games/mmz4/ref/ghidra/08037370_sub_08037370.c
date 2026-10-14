// sub_08037370 at 0x08037370 (thumb)

undefined4 sub_08037370(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x156) = 0;
  *(undefined *)(param_1 + 0x14f) = 8;
  sub_0803A3BC(param_1,0x2900);
  sub_0803A3FC(param_1,0x2900);
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 == '\x02') {
    cVar1 = *(char *)(param_1 + 0x151) + -1;
    *(char *)(param_1 + 0x151) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x14f) = 0xff;
      *(undefined *)(param_1 + 0x101) = 4;
      *(undefined *)(param_1 + 0x102) = 0;
    }
  }
  else {
    if (cVar1 != '\b') {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        *(char *)(param_1 + 0xc0) = cVar1;
      }
      else {
        *(char *)(param_1 + 0xc1) = cVar1;
      }
    }
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}

