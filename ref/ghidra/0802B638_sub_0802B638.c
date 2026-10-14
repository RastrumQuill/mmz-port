// sub_0802B638 at 0x0802B638 (thumb)

undefined4 sub_0802B638(int param_1,char param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0xd4) == param_2) {
    bVar1 = *(byte *)(param_1 + 0xd5) + 1;
    *(byte *)(param_1 + 0xd5) = bVar1;
    if (1 < bVar1) {
      return 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd5) = 0;
  }
  *(char *)(param_1 + 0xd4) = param_2;
  return 0;
}

