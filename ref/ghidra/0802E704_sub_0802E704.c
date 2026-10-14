// sub_0802E704 at 0x0802E704 (thumb)

undefined4 sub_0802E704(int param_1,char param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0xc1) == param_2) {
    bVar1 = *(byte *)(param_1 + 0xc0) + 1;
    *(byte *)(param_1 + 0xc0) = bVar1;
    if (2 < bVar1) {
      return 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  *(char *)(param_1 + 0xc1) = param_2;
  return 0;
}

