// sub_080242B0 at 0x080242B0 (thumb)

longlong sub_080242B0(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  char *pcVar4;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17d) = 0;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_08846d2c);
      sub_0801F63C(1);
      DAT_0202e91a = 0;
      *pcVar4 = '\x01';
      goto LAB_0802474e;
    }
    if (DAT_0202e912 != '\x01') {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_08846e4c);
        *pcVar4 = '\x02';
        goto LAB_0802474e;
      }
      if (DAT_0202e912 == '\x03') {
        sub_080275F0(&DAT_0202e920,&DAT_08846ff4);
        sub_0801F63C(4);
        *pcVar4 = '\x04';
        goto LAB_0802474e;
      }
      if (DAT_0202e912 == '\x04') {
        sub_080275F0(&DAT_0202e920,&DAT_088470cc);
        *pcVar4 = '\x05';
        goto LAB_0802474e;
      }
      if (DAT_0202e912 != '\x05') {
        if (DAT_0202e912 == '\x06') {
          sub_080275F0(&DAT_0202e920,&DAT_088472f4);
          *pcVar4 = '\v';
        }
        else if (DAT_0202e912 == '\a') {
          sub_080275F0(&DAT_0202e920,&DAT_088473cc);
          *pcVar4 = '\f';
        }
        goto LAB_0802474e;
      }
      if (DAT_0202e91a == 0) {
        sub_080275F0(&DAT_0202e920,&DAT_0884720c);
      }
      else {
        sub_080275F0(&DAT_0202e920,&DAT_088471b4);
      }
LAB_080245a2:
      *(undefined *)(param_1 + 0x17c) = 9;
      goto LAB_0802474e;
    }
    sub_080275F0(&DAT_0202e920,&DAT_08846dec);
  }
  else if (cVar1 != '\x01') {
    if ((cVar1 == '\x02') && (0x12c000 < *(int *)(iVar3 + 0x54))) {
      *pcVar4 = '\x03';
      goto LAB_0802474e;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x151800 < *(int *)(iVar3 + 0x54))) {
      sub_080275F0(&DAT_0202e920,&DAT_08846ea4);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar2 = 5;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x04') && (0x151800 < *(int *)(iVar3 + 0x54))) {
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
        goto LAB_0802474e;
      }
      if ((cVar1 == '\b') && (0x177fff < *(int *)(iVar3 + 0x54))) {
        sub_0801F63C(5);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        DAT_0202e91a = (ushort)(*(int *)(iVar3 + 0x58) < 0x46000);
        goto LAB_080245a2;
      }
      if (*(char *)(param_1 + 0x17c) == '\t') {
        if ((*(char *)(param_1 + 0x17d) == '\0') && (0x238fff < *(int *)(iVar3 + 0x54))) {
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_0202ea78 != 0xffffffff) {
            sub_08002A98(DAT_0202ea78 & 0xffff);
            DAT_0202ea78 = 0xffffffff;
          }
          *(char *)(param_1 + 0x17d) = '\x01';
        }
        else {
          cVar1 = *(char *)(param_1 + 0x17d);
          if (cVar1 == '\x01') {
            DAT_030032e1 = 0;
            *(char *)(param_1 + 0x17d) = '\x02';
          }
          else if ((cVar1 == '\x02') && (0x23afff < *(int *)(iVar3 + 0x54))) {
            DAT_030032e1 = 0;
            if (DAT_0202ea78 != 0x9b) {
              if (DAT_0202ea78 != 0xffffffff) {
                sub_08002A98(DAT_0202ea78 & 0xffff);
                DAT_0202ea78 = 0xffffffff;
              }
              sub_08002A88(0x9b);
              DAT_0202ea78 = 0x9b;
            }
            *(undefined *)(param_1 + 0x17c) = 10;
          }
        }
        goto LAB_0802474e;
      }
      if ((*(char *)(param_1 + 0x17c) == '\n') && (0x248fff < *(int *)(iVar3 + 0x54))) {
        sub_080275F0(&DAT_0202e920,&DAT_08847264);
        sub_0801F63C(7);
        uVar2 = 0xc;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\v') && (0x248fff < *(int *)(iVar3 + 0x54))) {
        sub_080275F0(&DAT_0202e920,&DAT_0884734c);
        sub_0801F63C(7);
        uVar2 = 0xc;
      }
      else if (*(char *)(param_1 + 0x17c) == '\f') {
        sub_0801F63C(6);
        uVar2 = 0xd;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\r') || ((DAT_0202e918 & 0x10) == 0)) goto LAB_0802474e;
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_080275F0(&DAT_0202e920,&DAT_08847464);
        DAT_0202e922 = DAT_0202e922 & 0xfd;
        DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
        uVar2 = 0xe;
      }
    }
    *(undefined *)(param_1 + 0x17c) = uVar2;
    goto LAB_0802474e;
  }
  sub_0801F63C(2);
  *pcVar4 = '\x02';
LAB_0802474e:
  return (ulonglong)in_lr << 0x20;
}

