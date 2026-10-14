// sub_080C4604 at 0x080C4604 (thumb)

char sub_080C4604(int param_1,int param_2)

{
  char cVar1;
  short *psVar2;
  
  cVar1 = '\0';
  for (psVar2 = &DAT_082cc21c; *(short *)(((uint)(param_1 << 0x10) >> 0xf) + param_2) != *psVar2;
      psVar2 = psVar2 + 1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

