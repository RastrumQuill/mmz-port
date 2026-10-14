// sub_08025144 at 0x08025144 (thumb)

longlong sub_08025144(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 != '\0') {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_0884857c);
        *pcVar3 = '\x02';
      }
      goto LAB_0802520e;
    }
    sub_080275F0(&DAT_0202e920,&DAT_0884903c);
    sub_0801F63C(2);
    cVar1 = '\x02';
  }
  else if (cVar1 == '\x02') {
    if (0xc1fff < *(int *)(iVar2 + 0x54)) {
      DAT_030032e1 = DAT_030032e1 | 2;
    }
    if (*(int *)(iVar2 + 0x54) < 0xc4000) goto LAB_0802520e;
    DAT_030032e1 = 0;
    cVar1 = '\x03';
  }
  else {
    if ((cVar1 != '\x03') || (*(int *)(iVar2 + 0x54) < 0xd2001)) goto LAB_0802520e;
    sub_080275F0(&DAT_0202e920,&DAT_088490b4);
    DAT_0202e918 = DAT_0202e918 & 0xfffe;
    cVar1 = '\x04';
  }
  *pcVar3 = cVar1;
LAB_0802520e:
  return (ulonglong)in_lr << 0x20;
}

