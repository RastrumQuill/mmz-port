// sub_08022530 at 0x08022530 (thumb)

longlong sub_08022530(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  uint in_lr;
  
  bVar1 = DAT_0202e8b4;
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17d) = 0;
    if ((bVar1 & 0x40) == 0) {
      if (DAT_0202e912 == '\0') {
        sub_080275F0(&DAT_0202e920,&DAT_08844768);
        sub_0801F63C(1);
        *pcVar5 = '\x01';
        goto LAB_08022a16;
      }
      if (DAT_0202e912 == '\x01') {
        sub_080275F0(&DAT_0202e920,&DAT_08844828);
        sub_0801F63C(2);
        cVar2 = '\x02';
      }
      else {
        if (DAT_0202e912 == '\x02') {
          sub_080275F0(&DAT_0202e920,&DAT_08844888);
          *pcVar5 = '\x02';
          goto LAB_08022a16;
        }
        if (DAT_0202e912 == '\x03') {
          sub_080275F0(&DAT_0202e920,&DAT_08844960);
          cVar2 = '\x04';
        }
        else if (DAT_0202e912 == '\x04') {
          sub_080275F0(&DAT_0202e920,&DAT_08844a20);
          cVar2 = '\x05';
        }
        else if (DAT_0202e912 == '\x05') {
          sub_080275F0(&DAT_0202e920,&DAT_08844af8);
          cVar2 = '\t';
        }
        else if (DAT_0202e912 == '\x06') {
          DAT_0202e8a0 = 0x4f000;
          sub_080275F0(&DAT_0202e920,&DAT_08844bf0);
          cVar2 = '\v';
        }
        else {
          if (DAT_0202e912 != '\a') goto LAB_08022a16;
          sub_080275F0(&DAT_0202e920,&DAT_08844cd8);
          cVar2 = '\f';
        }
      }
    }
    else {
      sub_080275F0(&DAT_0202e920,&DAT_08844f30);
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      cVar2 = '\x14';
    }
  }
  else if (cVar2 == '\x01') {
    sub_0801F63C(2);
    cVar2 = '\x02';
  }
  else {
    if (((cVar2 != '\x02') || (*(int *)(iVar4 + 0x54) < 0xf0001)) ||
       (0x45fff < *(int *)(iVar4 + 0x58))) {
      if ((*(char *)(param_1 + 0x17c) == '\x03') && (0xff000 < *(int *)(iVar4 + 0x54))) {
        puVar3 = &DAT_088448e0;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar4 + 0x54) < 0xff001)) {
          pcVar5 = (char *)(param_1 + 0x17c);
          if (*pcVar5 == '\x05') {
            sub_0801F63C(3);
            cVar2 = '\x06';
          }
          else if ((*pcVar5 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_080275F0(&DAT_0202e920,&DAT_08844a90);
            DAT_0202e922 = DAT_0202e922 & 0xfd;
            DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
            DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
            cVar2 = '\a';
          }
          else {
            pcVar5 = (char *)(param_1 + 0x17c);
            if (*pcVar5 == '\a') {
              DAT_030032e0 = DAT_030032e0 & 0x7f;
              DAT_030032e1 = 0;
              *pcVar5 = '\b';
              goto LAB_08022a16;
            }
            if ((*pcVar5 == '\b') && (0x10efff < *(int *)(iVar4 + 0x54))) {
              sub_0801F63C(5);
              DAT_0202e8b4 = DAT_0202e8b4 | 8;
              *pcVar5 = '\t';
              goto LAB_08022a16;
            }
            if (*(char *)(param_1 + 0x17c) != '\t') {
              if ((*(char *)(param_1 + 0x17c) == '\n') && (0x1eefff < *(int *)(iVar4 + 0x54))) {
                puVar3 = &DAT_08844b50;
              }
              else {
                if ((*(char *)(param_1 + 0x17c) != '\v') || (*(int *)(iVar4 + 0x54) < 0x1ef000)) {
                  pcVar5 = (char *)(param_1 + 0x17c);
                  if (*pcVar5 == '\f') {
                    sub_0801F63C(6);
                    cVar2 = '\r';
                  }
                  else if ((*pcVar5 == '\r') && ((DAT_0202e918 & 0x10) != 0)) {
                    DAT_030032e0 = DAT_030032e0 | 0x80;
                    DAT_030032e1 = DAT_030032e1 | 2;
                    sub_080275F0(&DAT_0202e920,&DAT_08844d70);
                    DAT_0202e922 = DAT_0202e922 & 0xfd;
                    DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
                    cVar2 = '\x0e';
                  }
                  else {
                    pcVar5 = (char *)(param_1 + 0x17c);
                    if (*pcVar5 == '\x14') {
                      iVar4 = *(int *)(param_1 + 0x180);
                      if (iVar4 != 0) {
                        *(int *)(param_1 + 0x180) = iVar4 + -1;
                        goto LAB_08022a16;
                      }
                      if (DAT_0202ea78 != 0xffffffff) {
                        sub_08002A98(DAT_0202ea78 & 0xffff);
                        DAT_0202ea78 = 0xffffffff;
                      }
                      DAT_0202ea64 = 2;
                      cVar2 = '\x15';
                    }
                    else {
                      if ((*pcVar5 != '\x15') || (DAT_0202ea64 != 0)) goto LAB_08022a16;
                      DAT_0202e918 = DAT_0202e918 & 0xfffe | 4;
                      cVar2 = '\x16';
                    }
                  }
                  goto LAB_08022a14;
                }
                puVar3 = &DAT_08844c48;
              }
              sub_080275F0(&DAT_0202e920,puVar3);
              sub_0801F63C(7);
              *(undefined *)(param_1 + 0x17c) = 0xc;
              goto LAB_08022a16;
            }
            pcVar5 = (char *)(param_1 + 0x17d);
            if ((*pcVar5 != '\0') || (*(int *)(iVar4 + 0x54) < 0x1df000)) {
              cVar2 = *(char *)(param_1 + 0x17d);
              if (cVar2 == '\x01') {
                DAT_030032e1 = 0;
                *(char *)(param_1 + 0x17d) = '\x02';
              }
              else if ((cVar2 == '\x02') && (0x1e0fff < *(int *)(iVar4 + 0x54))) {
                DAT_030032e1 = 0;
                DAT_0202e8a0 = 0x4f000;
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
              goto LAB_08022a16;
            }
            DAT_030032e1 = DAT_030032e1 | 2;
            if (DAT_0202ea78 != 0xffffffff) {
              sub_08002A98(DAT_0202ea78 & 0xffff);
              DAT_0202ea78 = 0xffffffff;
            }
            cVar2 = '\x01';
          }
          goto LAB_08022a14;
        }
        puVar3 = &DAT_088449b8;
      }
      sub_080275F0(&DAT_0202e920,puVar3);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      *(undefined *)(param_1 + 0x17c) = 5;
      goto LAB_08022a16;
    }
    cVar2 = '\x03';
  }
LAB_08022a14:
  *pcVar5 = cVar2;
LAB_08022a16:
  return (ulonglong)in_lr << 0x20;
}

