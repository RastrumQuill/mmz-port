// sub_0802624C at 0x0802624C (thumb)

longlong sub_0802624C(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  uint in_lr;
  
  uVar1 = DAT_0202e918;
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17d) = 0;
    cVar2 = DAT_0202e912;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_0884a5c4);
      sub_0801F63C(1);
      *pcVar5 = '\x01';
      goto LAB_0802655e;
    }
    if (DAT_0202e912 != '\x01') {
      if (DAT_0202e912 == '\x02') {
        puVar3 = &DAT_0884a6e4;
      }
      else {
        if (DAT_0202e912 == '\x03') {
          sub_080275F0(&DAT_0202e920,&DAT_0884a73c);
          *pcVar5 = '\x04';
          goto LAB_0802655e;
        }
        if (DAT_0202e912 == '\x04') {
          sub_080275F0(&DAT_0202e920,&DAT_0884a874);
          *pcVar5 = '\x06';
          goto LAB_0802655e;
        }
        if (DAT_0202e912 == '\x05') {
          sub_080275F0(&DAT_0202e920,&DAT_0884a99c);
          *pcVar5 = '\a';
          goto LAB_0802655e;
        }
        if (DAT_0202e912 != '\x06') goto LAB_0802655e;
        if (*(undefined **)(param_1 + 0x18) != &DAT_0883f800) {
          DAT_0202e918 = (uVar1 | 5) & 0xfffe;
          *pcVar5 = '\n';
          goto LAB_0802655e;
        }
        puVar3 = &DAT_0884a874;
      }
      sub_080275F0(&DAT_0202e920,puVar3);
      *pcVar5 = cVar2;
      goto LAB_0802655e;
    }
    sub_080275F0(&DAT_0202e920,&DAT_0884a684);
  }
  else if (cVar2 != '\x01') {
    if ((cVar2 == '\x02') && (0xfe000 < *(int *)(iVar4 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      *pcVar5 = '\x03';
    }
    else {
      cVar2 = *(char *)(param_1 + 0x17c);
      if (cVar2 == '\x03') {
        sub_0801F63C(3);
        DAT_030032e1 = 0;
        *(char *)(param_1 + 0x17c) = '\x04';
      }
      else if (cVar2 == '\x04') {
        if ((*(char *)(param_1 + 0x17d) == '\0') && (0x1cffff < *(int *)(iVar4 + 0x54))) {
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_0202ea78 != 0xffffffff) {
            sub_08002A98(DAT_0202ea78 & 0xffff);
            DAT_0202ea78 = 0xffffffff;
          }
          *(char *)(param_1 + 0x17d) = '\x01';
        }
        else {
          cVar2 = *(char *)(param_1 + 0x17d);
          if (cVar2 == '\x01') {
            DAT_030032e1 = 0;
            *(char *)(param_1 + 0x17d) = '\x02';
          }
          else if ((cVar2 == '\x02') && (0x1d1fff < *(int *)(iVar4 + 0x54))) {
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
      }
      else {
        if ((cVar2 == '\x05') && (0x13fff < *(int *)(iVar4 + 0x58))) {
          puVar3 = &DAT_0884a794;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x06') || (*(int *)(iVar4 + 0x58) < 0x14000)) {
            cVar2 = *(char *)(param_1 + 0x17c);
            if (cVar2 == '\a') {
              sub_0801F63C(4);
              cVar2 = '\b';
            }
            else {
              if ((cVar2 != '\b') || ((DAT_0202e918 & 0x10) == 0)) goto LAB_0802655e;
              DAT_030032e0 = DAT_030032e0 | 0x80;
              DAT_030032e1 = DAT_030032e1 | 2;
              DAT_0202e918 = DAT_0202e918 & 0xffef;
              DAT_0202e922 = DAT_0202e922 & 0xfd;
              sub_080275F0(&DAT_0202e920,&DAT_0884aa64);
              DAT_0202e918 = DAT_0202e918 | 4;
              sub_0801F63C(6);
              cVar2 = '\t';
            }
            *(char *)(param_1 + 0x17c) = cVar2;
            goto LAB_0802655e;
          }
          puVar3 = &DAT_0884a8cc;
        }
        sub_080275F0(&DAT_0202e920,puVar3);
        sub_0801F63C(5);
        *(undefined *)(param_1 + 0x17c) = 7;
      }
    }
    goto LAB_0802655e;
  }
  sub_0801F63C(2);
  *pcVar5 = '\x02';
LAB_0802655e:
  return (ulonglong)in_lr << 0x20;
}

