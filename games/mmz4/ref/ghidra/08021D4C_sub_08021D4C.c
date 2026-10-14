// sub_08021D4C at 0x08021D4C (thumb)

longlong sub_08021D4C(int param_1)

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
    if ((bVar1 & 0x40) != 0) {
      sub_080275F0(&DAT_0202e920,&DAT_088445b0);
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      *pcVar5 = '\x14';
      goto LAB_08022232;
    }
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_08843c58);
      sub_0801F63C(1);
      DAT_0202e8b9 = DAT_0202e8b9 & 0x3f;
      DAT_0202e8ba = DAT_0202e8ba & 0xf0;
      *pcVar5 = '\x01';
      goto LAB_08022232;
    }
    if (DAT_0202e912 == '\x01') {
      sub_080275F0(&DAT_0202e920,&DAT_08843d18);
      goto LAB_08021ecc;
    }
    if (DAT_0202e912 == '\x02') {
      sub_080275F0(&DAT_0202e920,&DAT_08843d78);
      *pcVar5 = '\x02';
      goto LAB_08022232;
    }
    if (DAT_0202e912 == '\x03') {
      sub_080275F0(&DAT_0202e920,&DAT_08843e90);
      sub_0801F63C(4);
      *pcVar5 = '\x04';
      goto LAB_08022232;
    }
    if (DAT_0202e912 != '\x04') {
      if (DAT_0202e912 == '\x05') {
        sub_080275F0(&DAT_0202e920,&DAT_08844088);
LAB_08022018:
        *(undefined *)(param_1 + 0x17c) = 9;
        goto LAB_08022232;
      }
      if (DAT_0202e912 == '\x06') {
        DAT_0202e8ba = DAT_0202e8ba & 0xf7;
        sub_080275F0(&DAT_0202e920,&DAT_088441d8);
        *pcVar5 = '\v';
        goto LAB_08022232;
      }
      if (DAT_0202e912 != '\a') goto LAB_08022232;
      sub_080275F0(&DAT_0202e920,&DAT_08844318);
LAB_08022142:
      *(undefined *)(param_1 + 0x17c) = 0xc;
      goto LAB_08022232;
    }
    sub_080275F0(&DAT_0202e920,&DAT_08843f90);
  }
  else {
    if (cVar2 == '\x01') {
LAB_08021ecc:
      sub_0801F63C(2);
      *pcVar5 = '\x02';
      goto LAB_08022232;
    }
    if ((cVar2 == '\x02') && (0x177000 < *(int *)(iVar4 + 0x54))) {
      *pcVar5 = '\x03';
      goto LAB_08022232;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x186000 < *(int *)(iVar4 + 0x54))) {
      puVar3 = &DAT_08843dd0;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar4 + 0x54) < 0x186001)) {
        pcVar5 = (char *)(param_1 + 0x17c);
        if (*pcVar5 == '\x05') {
          sub_0801F63C(3);
          cVar2 = '\x06';
        }
        else if ((*pcVar5 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_080275F0(&DAT_0202e920,&DAT_08844000);
          DAT_0202e922 = DAT_0202e922 & 0xfd;
          DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
          DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
          cVar2 = '\a';
        }
        else {
          cVar2 = *(char *)(param_1 + 0x17c);
          if (cVar2 == '\a') {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_030032e1 = 0;
            *(char *)(param_1 + 0x17c) = '\b';
            goto LAB_08022232;
          }
          if ((cVar2 == '\b') && (0x1a4fff < *(int *)(iVar4 + 0x54))) {
            sub_0801F63C(5);
            DAT_0202e8b4 = DAT_0202e8b4 | 8;
            goto LAB_08022018;
          }
          if (*(char *)(param_1 + 0x17c) != '\t') {
            if ((*(char *)(param_1 + 0x17c) == '\n') && (0x2b1fff < *(int *)(iVar4 + 0x54))) {
              puVar3 = &DAT_088440e0;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\v') || (*(int *)(iVar4 + 0x54) < 0x2b2000)) {
                pcVar5 = (char *)(param_1 + 0x17c);
                if (*pcVar5 == '\f') {
                  sub_0801F63C(6);
                  cVar2 = '\r';
                }
                else if ((*pcVar5 == '\r') && ((DAT_0202e918 & 0x10) != 0)) {
                  DAT_030032e0 = DAT_030032e0 | 0x80;
                  DAT_030032e1 = DAT_030032e1 | 2;
                  sub_080275F0(&DAT_0202e920,&DAT_088443e0);
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
                      goto LAB_08022232;
                    }
                    if (DAT_0202ea78 != 0xffffffff) {
                      sub_08002A98(DAT_0202ea78 & 0xffff);
                      DAT_0202ea78 = 0xffffffff;
                    }
                    DAT_0202ea64 = 2;
                    cVar2 = '\x15';
                  }
                  else {
                    if ((*pcVar5 != '\x15') || (DAT_0202ea64 != 0)) goto LAB_08022232;
                    DAT_0202e918 = DAT_0202e918 & 0xfffe | 4;
                    cVar2 = '\x16';
                  }
                }
                goto LAB_08022230;
              }
              puVar3 = &DAT_08844230;
            }
            sub_080275F0(&DAT_0202e920,puVar3);
            sub_0801F63C(7);
            goto LAB_08022142;
          }
          pcVar5 = (char *)(param_1 + 0x17d);
          if ((*pcVar5 != '\0') || (*(int *)(iVar4 + 0x54) < 0x2a2000)) {
            cVar2 = *(char *)(param_1 + 0x17d);
            if (cVar2 == '\x01') {
              DAT_030032e1 = 0;
              *(char *)(param_1 + 0x17d) = '\x02';
            }
            else if ((cVar2 == '\x02') && (0x2a3fff < *(int *)(iVar4 + 0x54))) {
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
            goto LAB_08022232;
          }
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_0202ea78 != 0xffffffff) {
            sub_08002A98(DAT_0202ea78 & 0xffff);
            DAT_0202ea78 = 0xffffffff;
          }
          cVar2 = '\x01';
        }
LAB_08022230:
        *pcVar5 = cVar2;
        goto LAB_08022232;
      }
      puVar3 = &DAT_08843ee8;
    }
    sub_080275F0(&DAT_0202e920,puVar3);
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
  }
  *(undefined *)(param_1 + 0x17c) = 5;
LAB_08022232:
  return (ulonglong)in_lr << 0x20;
}

