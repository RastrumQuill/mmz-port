// sub_080D6138 at 0x080D6138 (thumb)

undefined4 sub_080D6138(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (param_2 - 1U < 0x51) {
    bVar1 = *(byte *)(DAT_0202ebf0 + 0x4c);
    if (bVar1 < 99) {
      *(byte *)(DAT_0202ebf0 + 0x4c) = bVar1 + 1;
    }
    cVar2 = sub_080D58D0(param_2);
    cVar2 = sub_080D5908(param_1,(int)cVar2,param_2);
    if ((&DAT_0834a1d5)[param_2 * 0xc] == '\0') {
      *(char *)(param_1 + 0x285) = *(char *)(param_1 + 0x285) + (&DAT_0834b28c)[cVar2];
    }
    *(char *)(param_1 + 0x284) = *(char *)(param_1 + 0x284) + (&DAT_0834b28f)[cVar2];
  }
  return in_lr;
}

