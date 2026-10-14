// sub_08023BD8 at 0x08023BD8 (thumb)

longlong sub_08023BD8(int param_1)

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
      sub_080275F0(&DAT_0202e920,&DAT_08846354);
      sub_0801F63C(1);
      *pcVar4 = '\x01';
      goto LAB_0802401a;
    }
    if (DAT_0202e912 != '\x01') {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_08846474);
        *pcVar4 = '\x02';
      }
      else if (DAT_0202e912 == '\x03') {
        sub_080275F0(&DAT_0202e920,&DAT_0884654c);
        sub_0801F63C(4);
        *pcVar4 = '\x04';
      }
      else if (DAT_0202e912 == '\x04') {
        sub_080275F0(&DAT_0202e920,&DAT_0884660c);
        *pcVar4 = '\x05';
      }
      else if (DAT_0202e912 == '\x05') {
        sub_080275F0(&DAT_0202e920,&DAT_088466e4);
        *pcVar4 = '\t';
      }
      else if (DAT_0202e912 == '\x06') {
        sub_080275F0(&DAT_0202e920,&DAT_0884680c);
        *pcVar4 = '\v';
      }
      else if (DAT_0202e912 == '\a') {
        sub_080275F0(&DAT_0202e920,&DAT_08846924);
        *pcVar4 = '\f';
      }
      goto LAB_0802401a;
    }
    sub_080275F0(&DAT_0202e920,&DAT_08846414);
  }
  else if (cVar1 != '\x01') {
    if ((cVar1 == '\x02') && (0x195000 < *(int *)(iVar3 + 0x54))) {
      *pcVar4 = '\x03';
      goto LAB_0802401a;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x1a4000 < *(int *)(iVar3 + 0x54))) {
      sub_080275F0(&DAT_0202e920,&DAT_088464cc);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar2 = 5;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x04') && (0x1a4000 < *(int *)(iVar3 + 0x54))) {
      sub_080275F0(&DAT_0202e920,&DAT_088465a4);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar2 = 5;
    }
    else {
      pcVar4 = (char *)(param_1 + 0x17c);
      if (*pcVar4 == '\x05') {
        sub_0801F63C(3);
        *pcVar4 = '\x06';
        goto LAB_0802401a;
      }
      if ((*pcVar4 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_080275F0(&DAT_0202e920,&DAT_0884667c);
        DAT_0202e922 = DAT_0202e922 & 0xfd;
        DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
        DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
        *pcVar4 = '\a';
        goto LAB_0802401a;
      }
      if (*(char *)(param_1 + 0x17c) == '\a') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        uVar2 = 8;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\b') && (0x1b3fff < *(int *)(iVar3 + 0x54))) {
        sub_0801F63C(5);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        uVar2 = 9;
      }
      else {
        if (*(char *)(param_1 + 0x17c) == '\t') {
          if ((*(char *)(param_1 + 0x17d) == '\0') && (0x2bffff < *(int *)(iVar3 + 0x54))) {
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
            else if ((cVar1 == '\x02') && (0x2c1fff < *(int *)(iVar3 + 0x54))) {
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
          goto LAB_0802401a;
        }
        if ((*(char *)(param_1 + 0x17c) == '\n') && (0x2cffff < *(int *)(iVar3 + 0x54))) {
          sub_080275F0(&DAT_0202e920,&DAT_0884673c);
          sub_0801F63C(7);
          uVar2 = 0xc;
        }
        else if ((*(char *)(param_1 + 0x17c) == '\v') && (0x2cffff < *(int *)(iVar3 + 0x54))) {
          sub_080275F0(&DAT_0202e920,&DAT_08846864);
          sub_0801F63C(7);
          uVar2 = 0xc;
        }
        else if (*(char *)(param_1 + 0x17c) == '\f') {
          sub_0801F63C(6);
          uVar2 = 0xd;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\r') || ((DAT_0202e918 & 0x10) == 0))
          goto LAB_0802401a;
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_080275F0(&DAT_0202e920,&DAT_088469d4);
          DAT_0202e922 = DAT_0202e922 & 0xfd;
          DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
          uVar2 = 0xe;
        }
      }
    }
    *(undefined *)(param_1 + 0x17c) = uVar2;
    goto LAB_0802401a;
  }
  sub_0801F63C(2);
  *pcVar4 = '\x02';
LAB_0802401a:
  return (ulonglong)in_lr << 0x20;
}

