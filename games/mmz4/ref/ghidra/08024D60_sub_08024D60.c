// sub_08024D60 at 0x08024D60 (thumb)

longlong sub_08024D60(int param_1)

{
  char cVar1;
  undefined *puVar2;
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
    cVar1 = DAT_0202e912;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_0884845c);
      sub_0801F63C(1);
      *pcVar4 = '\x01';
      goto LAB_0802512a;
    }
    if (DAT_0202e912 != '\x01') {
      if (DAT_0202e912 == '\x02') {
        puVar2 = &DAT_0884857c;
      }
      else {
        if (DAT_0202e912 != '\x03') {
          if (DAT_0202e912 != '\x04') {
            if (DAT_0202e912 != '\x05') {
              if (DAT_0202e912 != '\x06') goto LAB_0802512a;
              sub_080275F0(&DAT_0202e920,&DAT_08848ee4);
LAB_080250ba:
              *(undefined *)(param_1 + 0x17c) = 0xb;
              goto LAB_0802512a;
            }
            sub_080275F0(&DAT_0202e920,&DAT_08848e8c);
            goto LAB_0802508c;
          }
          sub_080275F0(&DAT_0202e920,&DAT_08848744);
          goto LAB_08024f7c;
        }
        puVar2 = &DAT_08848664;
      }
      sub_080275F0(&DAT_0202e920,puVar2);
      *pcVar4 = cVar1;
      goto LAB_0802512a;
    }
    sub_080275F0(&DAT_0202e920,&DAT_0884851c);
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      if ((*(char *)(param_1 + 0x17d) == '\0') && (0xc1fff < *(int *)(iVar3 + 0x54))) {
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
        else if ((cVar1 == '\x02') && (0xc3fff < *(int *)(iVar3 + 0x54))) {
          if (DAT_0202ea78 != 0x9b) {
            if (DAT_0202ea78 != 0xffffffff) {
              sub_08002A98(DAT_0202ea78 & 0xffff);
              DAT_0202ea78 = 0xffffffff;
            }
            sub_08002A88(0x9b);
            DAT_0202ea78 = 0x9b;
          }
          *(undefined *)(param_1 + 0x17c) = 3;
        }
      }
      goto LAB_0802512a;
    }
    if ((cVar1 == '\x03') && (0xd2000 < *(int *)(iVar3 + 0x54))) {
      puVar2 = &DAT_088485d4;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar3 + 0x54) < 0xd2001)) {
        pcVar4 = (char *)(param_1 + 0x17c);
        if (*pcVar4 == '\x05') {
          sub_0801F63C(3);
          *pcVar4 = '\x06';
          goto LAB_0802512a;
        }
        if ((*pcVar4 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 6;
          sub_080275F0(&DAT_0202e920,&DAT_088487ec);
          DAT_0202e922 = DAT_0202e922 & 0xfd;
          DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
          DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
          *pcVar4 = '\a';
          goto LAB_0802512a;
        }
        pcVar4 = (char *)(param_1 + 0x17c);
        if (*pcVar4 == '\a') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_030032e1 = 0;
          *pcVar4 = '\b';
          goto LAB_0802512a;
        }
        if ((*pcVar4 == '\b') && (0xe0fff < *(int *)(iVar3 + 0x54))) {
          DAT_0202e8b4 = DAT_0202e8b4 | 8;
          *pcVar4 = '\t';
          goto LAB_0802512a;
        }
        if ((*(char *)(param_1 + 0x17c) != '\t') || (*(int *)(iVar3 + 0x54) < 0xf0000)) {
          if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar3 + 0x54) < 0xff000)) {
            if ((*(char *)(param_1 + 0x17c) == '\v') && (0x2a2fff < *(int *)(iVar3 + 0x54))) {
              DAT_030032e1 = DAT_030032e1 | 2;
              *(char *)(param_1 + 0x17c) = '\f';
            }
            else if (*(char *)(param_1 + 0x17c) == '\f') {
              DAT_030032e0 = DAT_030032e0 | 0x80;
              DAT_030032e1 = 0;
              sub_080275F0(&DAT_0202e920,&DAT_08848f3c);
              DAT_0202e918 = DAT_0202e918 & 0xfffe | 4;
              *(char *)(param_1 + 0x17c) = '\r';
            }
            goto LAB_0802512a;
          }
          sub_0801F63C(6);
          goto LAB_080250ba;
        }
        sub_080275F0(&DAT_0202e920,&DAT_08848884);
        sub_08006984(0x62);
        sub_0801F63C(5);
LAB_0802508c:
        *(undefined *)(param_1 + 0x17c) = 10;
        goto LAB_0802512a;
      }
      puVar2 = &DAT_088486c4;
    }
    sub_080275F0(&DAT_0202e920,puVar2);
    DAT_030032e1 = 0;
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
LAB_08024f7c:
    *(undefined *)(param_1 + 0x17c) = 5;
    goto LAB_0802512a;
  }
  sub_0801F63C(2);
  *pcVar4 = '\x02';
LAB_0802512a:
  return (ulonglong)in_lr << 0x20;
}

