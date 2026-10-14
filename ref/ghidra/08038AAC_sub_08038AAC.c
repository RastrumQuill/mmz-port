// sub_08038AAC at 0x08038AAC (thumb)

undefined4 sub_08038AAC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  cVar1 = sub_08038AD8();
  *(char *)(param_1 + 0x44) = cVar1;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  return in_lr;
}

