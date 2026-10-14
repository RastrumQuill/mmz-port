// sub_08025224 at 0x08025224 (thumb)

longlong sub_08025224(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined uVar4;
  int iVar5;
  char *pcVar6;
  uint in_lr;
  
  uVar3 = DAT_0202e918;
  bVar2 = DAT_0202e8b4;
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar6 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar6;
  if (cVar1 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17d) = 0;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_08849254);
      sub_0801F63C(1);
      *pcVar6 = '\x01';
      goto LAB_0802550c;
    }
    if (DAT_0202e912 == '\x01') {
      sub_080275F0(&DAT_0202e920,&DAT_08849304);
      sub_0801F63C(2);
      uVar4 = 2;
    }
    else {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_08849364);
        *pcVar6 = '\x02';
        goto LAB_0802550c;
      }
      if (DAT_0202e912 == '\x03') {
        sub_080275F0(&DAT_0202e920,&DAT_088493bc);
        uVar4 = 4;
      }
      else if (DAT_0202e912 == '\x04') {
        DAT_0202e8b4 = bVar2 & 0xf7;
        sub_080275F0(&DAT_0202e920,&DAT_088496fc);
        uVar4 = 6;
      }
      else if (DAT_0202e912 == '\x05') {
        sub_080275F0(&DAT_0202e920,&DAT_08849814);
        uVar4 = 7;
      }
      else {
        if (DAT_0202e912 != '\x06') goto LAB_0802550c;
        DAT_0202e918 = (uVar3 | 5) & 0xfffe;
LAB_08025508:
        uVar4 = 9;
      }
    }
  }
  else if (cVar1 == '\x01') {
    sub_0801F63C(2);
    uVar4 = 2;
  }
  else if ((cVar1 == '\x02') && (0xa4000 < *(int *)(iVar5 + 0x54))) {
    uVar4 = 3;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x03') {
      sub_0801F63C(3);
      uVar4 = 4;
    }
    else {
      if (cVar1 == '\x04') {
        if ((*(char *)(param_1 + 0x17d) == '\0') && (0x175fff < *(int *)(iVar5 + 0x54))) {
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
          else if ((cVar1 == '\x02') && (0x177fff < *(int *)(iVar5 + 0x54))) {
            DAT_030032e1 = 0;
            if (DAT_0202ea78 != 0x9b) {
              if (DAT_0202ea78 != 0xffffffff) {
                sub_08002A98(DAT_0202ea78 & 0xffff);
                DAT_0202ea78 = 0xffffffff;
              }
              sub_08002A88(0x9b);
              DAT_0202ea78 = 0x9b;
            }
            *(undefined *)(param_1 + 0x17c) = 5;
          }
        }
        goto LAB_0802550c;
      }
      if ((cVar1 == '\x05') && (0x183fff < *(int *)(iVar5 + 0x54))) {
        sub_080275F0(&DAT_0202e920,&DAT_0884941c);
        sub_0801F63C(5);
        uVar4 = 7;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\x06') && (0x185fff < *(int *)(iVar5 + 0x54))) {
        sub_080275F0(&DAT_0202e920,&DAT_08849754);
        sub_0801F63C(5);
        uVar4 = 7;
      }
      else {
        if (*(char *)(param_1 + 0x17c) != '\a') {
          if ((*(char *)(param_1 + 0x17c) != '\b') || ((DAT_0202e918 & 0x10) == 0))
          goto LAB_0802550c;
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_080275F0(&DAT_0202e920,&DAT_088498d4);
          DAT_0202e922 = DAT_0202e922 & 0xfd;
          DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
          sub_0801F63C(6);
          goto LAB_08025508;
        }
        sub_0801F63C(4);
        uVar4 = 8;
      }
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar4;
LAB_0802550c:
  return (ulonglong)in_lr << 0x20;
}

