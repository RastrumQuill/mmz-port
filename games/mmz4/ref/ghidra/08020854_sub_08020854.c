// sub_08020854 at 0x08020854 (thumb)

longlong sub_08020854(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  if (*pcVar3 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_08841e44);
      sub_0801F63C(1);
      *pcVar3 = '\x01';
    }
    else if (DAT_0202e912 == '\x01') {
      sub_080275F0(&DAT_0202e920,&DAT_08841864);
      *pcVar3 = '\x01';
    }
    else if (DAT_0202e912 == '\x02') {
      sub_080275F0(&DAT_0202e920,&DAT_088418bc);
      *pcVar3 = '\x02';
    }
  }
  else if ((*pcVar3 == '\x01') && (0x1157ff < *(int *)(iVar2 + 0x54))) {
    DAT_0202ea54 = 0x10e000;
    sub_0801F63C(2);
    *pcVar3 = '\x02';
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x02') {
      if (0x1c0fff < *(int *)(iVar2 + 0x54)) {
        DAT_030032e1 = DAT_030032e1 | 2;
      }
      if (0x1c2fff < *(int *)(iVar2 + 0x54)) {
        DAT_030032e1 = 0;
        *(char *)(param_1 + 0x17c) = '\x03';
      }
    }
    else if ((cVar1 == '\x03') && (0x1d0fff < *(int *)(iVar2 + 0x54))) {
      sub_080275F0(&DAT_0202e920,&DAT_08841ebc);
      DAT_0202e918 = DAT_0202e918 & 0xfffe;
    }
  }
  return (ulonglong)in_lr << 0x20;
}

