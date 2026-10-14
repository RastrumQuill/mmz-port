// sub_080204B0 at 0x080204B0 (thumb)

longlong sub_080204B0(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  uint in_lr;
  
  uVar2 = DAT_0202e918;
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar6 = (char *)(param_1 + 0x17c);
  if (*pcVar6 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17d) = 0;
    cVar1 = DAT_0202e912;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_08841744);
      uVar3 = 1;
    }
    else {
      if (DAT_0202e912 != '\x01') {
        if (DAT_0202e912 == '\x02') {
          sub_080275F0(&DAT_0202e920,&DAT_08841864);
          *pcVar6 = '\x01';
          goto LAB_08020842;
        }
        if (DAT_0202e912 != '\x03') {
          if (DAT_0202e912 == '\x04') {
            puVar4 = &DAT_08841bc4;
          }
          else {
            if (DAT_0202e912 != '\x05') {
              if (DAT_0202e912 == '\x06') {
                DAT_0202e918 = (uVar2 | 5) & 0xfffe;
                *pcVar6 = '\v';
              }
              goto LAB_08020842;
            }
            puVar4 = &DAT_08841cdc;
          }
          sub_080275F0(&DAT_0202e920,puVar4);
          *pcVar6 = cVar1;
          goto LAB_08020842;
        }
        sub_080275F0(&DAT_0202e920,&DAT_088418bc);
        goto LAB_080205ce;
      }
      sub_080275F0(&DAT_0202e920,&DAT_08841804);
      uVar3 = 2;
    }
    sub_0801F63C(uVar3);
    *pcVar6 = '\x01';
  }
  else {
    if ((*pcVar6 != '\x01') || (*(int *)(iVar5 + 0x54) < 0x115800)) {
      if (*(char *)(param_1 + 0x17c) == '\x02') {
        if ((*(char *)(param_1 + 0x17d) == '\0') && (0x1c0fff < *(int *)(iVar5 + 0x54))) {
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
          else if ((cVar1 == '\x02') && (0x1c2fff < *(int *)(iVar5 + 0x54))) {
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
      }
      else {
        if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x1cffff < *(int *)(iVar5 + 0x54))) {
          puVar4 = &DAT_08841914;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar5 + 0x54) < 0x1d0000)) {
            pcVar6 = (char *)(param_1 + 0x17c);
            if (*pcVar6 == '\x05') {
              sub_0801F63C(4);
              *pcVar6 = '\x06';
            }
            else if ((*pcVar6 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
              DAT_030032e0 = DAT_030032e0 | 0x80;
              DAT_030032e1 = DAT_030032e1 | 2;
              sub_080275F0(&DAT_0202e920,&DAT_08841d6c);
              DAT_0202e922 = DAT_0202e922 & 0xfd;
              DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
              *pcVar6 = '\a';
            }
            else {
              pcVar6 = (char *)(param_1 + 0x17c);
              if (*pcVar6 == '\a') {
                DAT_030032e0 = DAT_030032e0 & 0x7f;
                DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
                DAT_030032e1 = 0;
                *pcVar6 = '\b';
              }
              else if ((*pcVar6 == '\b') && (0x1eefff < *(int *)(iVar5 + 0x54))) {
                DAT_0202e8b4 = DAT_0202e8b4 | 8;
                *pcVar6 = '\t';
              }
              else if ((*(char *)(param_1 + 0x17c) == '\t') && (0x1f67ff < *(int *)(iVar5 + 0x54)))
              {
                sub_080275F0(&DAT_0202e920,&DAT_08841f64);
                sub_0801F63C(6);
                *(char *)(param_1 + 0x17c) = '\n';
              }
              else if (*(char *)(param_1 + 0x17c) == '\n') {
                DAT_0202e918 = DAT_0202e918 & 0xfffe | 4;
                *(char *)(param_1 + 0x17c) = '\v';
              }
            }
            goto LAB_08020842;
          }
          puVar4 = &DAT_08841c1c;
        }
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        sub_080275F0(&DAT_0202e920,puVar4);
        sub_0801F63C(5);
        *(undefined *)(param_1 + 0x17c) = 5;
      }
      goto LAB_08020842;
    }
    DAT_0202ea54 = 0x10e000;
    sub_0801F63C(3);
LAB_080205ce:
    *pcVar6 = '\x02';
  }
LAB_08020842:
  return (ulonglong)in_lr << 0x20;
}

