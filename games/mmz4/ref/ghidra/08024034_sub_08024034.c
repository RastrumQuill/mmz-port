// sub_08024034 at 0x08024034 (thumb)

longlong sub_08024034(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  char *pcVar4;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_08846a94);
      sub_0801F63C(2);
      uVar2 = 2;
    }
    else {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_08846474);
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_08024298;
      }
      if (DAT_0202e912 == '\x03') {
        sub_080275F0(&DAT_0202e920,&DAT_0884654c);
        sub_0801F63C(4);
        uVar2 = 4;
      }
      else if (DAT_0202e912 == '\x04') {
        sub_080275F0(&DAT_0202e920,&DAT_0884660c);
        uVar2 = 5;
      }
      else {
        if (DAT_0202e912 != '\x05') goto LAB_08024298;
        sub_080275F0(&DAT_0202e920,&DAT_088466e4);
        uVar2 = 9;
      }
    }
  }
  else if ((cVar1 == '\x02') && (0x195000 < *(int *)(iVar3 + 0x54))) {
    uVar2 = 3;
  }
  else {
    if (((*(char *)(param_1 + 0x17c) == '\x03') && (0x1a4000 < *(int *)(iVar3 + 0x54))) ||
       ((*(char *)(param_1 + 0x17c) == '\x04' && (0x1a4000 < *(int *)(iVar3 + 0x54))))) {
      sub_080275F0(&DAT_0202e920,&DAT_088465a4);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      *(undefined *)(param_1 + 0x17c) = 5;
      goto LAB_08024298;
    }
    if (*(char *)(param_1 + 0x17c) == '\x05') {
      sub_0801F63C(3);
      uVar2 = 6;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_080275F0(&DAT_0202e920,&DAT_0884667c);
      DAT_0202e922 = DAT_0202e922 & 0xfd;
      DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
      DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
      uVar2 = 7;
    }
    else {
      pcVar4 = (char *)(param_1 + 0x17c);
      if (*pcVar4 == '\a') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        *pcVar4 = '\b';
        goto LAB_08024298;
      }
      if ((*pcVar4 == '\b') && (0x1b3fff < *(int *)(iVar3 + 0x54))) {
        sub_0801F63C(5);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        *pcVar4 = '\t';
        goto LAB_08024298;
      }
      if (*(char *)(param_1 + 0x17c) == '\t') {
        if (0x2bffff < *(int *)(iVar3 + 0x54)) {
          DAT_030032e1 = DAT_030032e1 | 2;
        }
        if (*(int *)(iVar3 + 0x54) < 0x2c2000) goto LAB_08024298;
        DAT_030032e1 = 0;
        uVar2 = 10;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar3 + 0x54) < 0x2d0000))
        goto LAB_08024298;
        sub_080275F0(&DAT_0202e920,&DAT_08846b0c);
        DAT_0202e918 = DAT_0202e918 & 0xfffe;
        uVar2 = 0xc;
      }
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_08024298:
  return (ulonglong)in_lr << 0x20;
}

