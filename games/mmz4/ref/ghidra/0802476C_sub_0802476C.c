// sub_0802476C at 0x0802476C (thumb)

longlong sub_0802476C(int param_1)

{
  char cVar1;
  undefined uVar2;
  char *pcVar3;
  int iVar4;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  if (*pcVar3 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_08847524);
      sub_0801F63C(2);
      DAT_0202e91a = 0;
      cVar1 = '\x02';
    }
    else {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_08846e4c);
        *pcVar3 = '\x02';
        goto LAB_08024a54;
      }
      if (DAT_0202e912 == '\x03') {
        sub_080275F0(&DAT_0202e920,&DAT_08846ff4);
        sub_0801F63C(4);
        cVar1 = '\x04';
      }
      else {
        if (DAT_0202e912 != '\x04') {
          if (DAT_0202e912 != '\x05') goto LAB_08024a54;
          if (DAT_0202e91a == 0) {
            sub_080275F0(&DAT_0202e920,&DAT_0884720c);
          }
          else {
            sub_080275F0(&DAT_0202e920,&DAT_088471b4);
          }
LAB_080249de:
          *(undefined *)(param_1 + 0x17c) = 9;
          goto LAB_08024a54;
        }
        sub_080275F0(&DAT_0202e920,&DAT_088470cc);
        cVar1 = '\x05';
      }
    }
  }
  else {
    if ((*pcVar3 != '\x02') || (*(int *)(iVar4 + 0x54) < 0x12c001)) {
      if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x151800 < *(int *)(iVar4 + 0x54))) {
        sub_080275F0(&DAT_0202e920,&DAT_0884704c);
        sub_0801F63C(4);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        uVar2 = 5;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\x04') && (0x151800 < *(int *)(iVar4 + 0x54))) {
        sub_080275F0(&DAT_0202e920,&DAT_0884704c);
        sub_0801F63C(4);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        uVar2 = 5;
      }
      else if (*(char *)(param_1 + 0x17c) == '\x05') {
        sub_0801F63C(3);
        uVar2 = 6;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\x06') && (DAT_0202dad4 == '(')) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_080275F0(&DAT_0202e920,&DAT_0884712c);
        DAT_0202e922 = DAT_0202e922 & 0xfd;
        DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
        DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
        uVar2 = 7;
      }
      else {
        cVar1 = *(char *)(param_1 + 0x17c);
        if (cVar1 == '\a') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_030032e1 = 0;
          *(char *)(param_1 + 0x17c) = '\b';
          goto LAB_08024a54;
        }
        if ((cVar1 == '\b') && (0x177fff < *(int *)(iVar4 + 0x54))) {
          sub_0801F63C(5);
          DAT_0202e8b4 = DAT_0202e8b4 | 8;
          DAT_0202e91a = (ushort)(*(int *)(iVar4 + 0x58) < 0x46000);
          goto LAB_080249de;
        }
        if (*(char *)(param_1 + 0x17c) == '\t') {
          if (0x238fff < *(int *)(iVar4 + 0x54)) {
            DAT_030032e1 = DAT_030032e1 | 2;
          }
          if (*(int *)(iVar4 + 0x54) < 0x23b000) goto LAB_08024a54;
          DAT_030032e1 = 0;
          uVar2 = 10;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar4 + 0x54) < 0x249000))
          goto LAB_08024a54;
          sub_080275F0(&DAT_0202e920,&DAT_0884759c);
          DAT_0202e918 = DAT_0202e918 & 0xfffe;
          uVar2 = 0xc;
        }
      }
      *(undefined *)(param_1 + 0x17c) = uVar2;
      goto LAB_08024a54;
    }
    cVar1 = '\x03';
  }
  *pcVar3 = cVar1;
LAB_08024a54:
  return (ulonglong)in_lr << 0x20;
}

