// sub_080211B0 at 0x080211B0 (thumb)

longlong sub_080211B0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  uint in_lr;
  
  bVar1 = DAT_0202e8b4;
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar6 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar6;
  if (cVar2 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17d) = 0;
    if ((bVar1 & 0x40) == 0) {
      if (DAT_0202e912 == '\0') {
        DAT_0202eb94 = 0x20d0;
        sub_080275F0(&DAT_0202e920,&DAT_08843180);
        sub_0801F63C(1);
        *pcVar6 = '\x01';
        goto LAB_080217c2;
      }
      if (DAT_0202e912 == '\x01') {
        DAT_0202eb94 = 0x20d0;
        sub_080275F0(&DAT_0202e920,&DAT_08843288);
        sub_0801F63C(2);
        cVar2 = '\x02';
      }
      else {
        if (DAT_0202e912 == '\x02') {
          DAT_0202eb94 = 0x20d0;
          sub_080275F0(&DAT_0202e920,&DAT_08843308);
          *pcVar6 = '\x02';
          goto LAB_080217c2;
        }
        if (DAT_0202e912 == '\x03') {
          sub_080275F0(&DAT_0202e920,&DAT_08843448);
          sub_0801F63C(4);
          cVar2 = '\x04';
        }
        else if (DAT_0202e912 == '\x04') {
          sub_080275F0(&DAT_0202e920,&DAT_08843548);
          DAT_0202e918 = DAT_0202e918 | 2;
          cVar2 = '\x05';
        }
        else if (DAT_0202e912 == '\x05') {
          sub_080275F0(&DAT_0202e920,&DAT_08843638);
          cVar2 = '\t';
        }
        else if (DAT_0202e912 == '\x06') {
          sub_080275F0(&DAT_0202e920,&DAT_08843740);
          cVar2 = '\v';
        }
        else {
          if (DAT_0202e912 != '\a') goto LAB_080217c2;
          sub_080275F0(&DAT_0202e920,&DAT_08843838);
          cVar2 = '\f';
        }
      }
    }
    else {
      DAT_0202eb94 = 0x20d0;
      sub_080275F0(&DAT_0202e920,&DAT_08843ab0);
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      cVar2 = '\x14';
    }
  }
  else if (cVar2 == '\x01') {
    sub_0801F63C(2);
    cVar2 = '\x02';
  }
  else {
    if (((cVar2 != '\x02') ||
        (iVar4 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000), iVar4 + 0xf000 < 0x19000))
       || (*(int *)(iVar3 + 0x58) < 0x12c000)) {
      if ((*(char *)(param_1 + 0x17c) == '\x03') &&
         (iVar4 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000), 0x1e000 < iVar4 + 0xf000))
      {
        puVar5 = &DAT_08843388;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\x04') ||
           (iVar4 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000), iVar4 + 0xf000 < 0x1e001
           )) {
          pcVar6 = (char *)(param_1 + 0x17c);
          if (*pcVar6 == '\x05') {
            sub_0801F63C(3);
            *pcVar6 = '\x06';
            goto LAB_080217c2;
          }
          if ((*pcVar6 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_080275F0(&DAT_0202e920,&DAT_088435b8);
            DAT_0202e922 = DAT_0202e922 & 0xfd;
            DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
            DAT_0202e918 = DAT_0202e918 & 0xffed | 1;
            *pcVar6 = '\a';
            goto LAB_080217c2;
          }
          pcVar6 = (char *)(param_1 + 0x17c);
          if (*pcVar6 == '\a') {
            DAT_030032e0 = DAT_030032e0 & 0x7f;
            DAT_030032e1 = 0;
            *pcVar6 = '\b';
            goto LAB_080217c2;
          }
          if ((*pcVar6 == '\b') &&
             (iVar4 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000),
             0x3cfff < iVar4 + 0xf000)) {
            sub_0801F63C(5);
            DAT_0202e8b4 = DAT_0202e8b4 | 8;
            *pcVar6 = '\t';
            goto LAB_080217c2;
          }
          if ((*(char *)(param_1 + 0x17c) != '\t') || (0xd6fff < *(int *)(iVar3 + 0x58))) {
            if ((*(char *)(param_1 + 0x17c) == '\n') &&
               (iVar4 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000),
               0x2cfff < iVar4 + 0xf000)) {
              puVar5 = &DAT_08843690;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\v') ||
                 (iVar4 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000),
                 iVar4 + 0xf000 < 0x2d000)) {
                pcVar6 = (char *)(param_1 + 0x17c);
                if (*pcVar6 == '\f') {
                  sub_0801F63C(6);
                  *pcVar6 = '\r';
                  goto LAB_080217c2;
                }
                if ((*pcVar6 == '\r') && ((DAT_0202e918 & 0x10) != 0)) {
                  DAT_030032e0 = DAT_030032e0 | 0x80;
                  DAT_030032e1 = DAT_030032e1 | 2;
                  sub_080275F0(&DAT_0202e920,&DAT_088438e0);
                  DAT_0202e922 = DAT_0202e922 & 0xfd;
                  DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
                  *pcVar6 = '\x0e';
                  goto LAB_080217c2;
                }
                pcVar6 = (char *)(param_1 + 0x17c);
                if (*pcVar6 == '\x14') {
                  iVar4 = *(int *)(param_1 + 0x180);
                  if (iVar4 != 0) {
                    *(int *)(param_1 + 0x180) = iVar4 + -1;
                    goto LAB_080217c2;
                  }
                  if (DAT_0202ea78 != 0xffffffff) {
                    sub_08002A98(DAT_0202ea78 & 0xffff);
                    DAT_0202ea78 = 0xffffffff;
                  }
                  DAT_0202ea64 = 2;
                  cVar2 = '\x15';
                }
                else {
                  if ((*pcVar6 != '\x15') || (DAT_0202ea64 != 0)) goto LAB_080217c2;
                  DAT_0202e918 = DAT_0202e918 & 0xfffe | 4;
                  cVar2 = '\x16';
                }
                goto LAB_080217c0;
              }
              puVar5 = &DAT_08843798;
            }
            sub_080275F0(&DAT_0202e920,puVar5);
            sub_0801F63C(7);
            *(undefined *)(param_1 + 0x17c) = 0xc;
            goto LAB_080217c2;
          }
          pcVar6 = (char *)(param_1 + 0x17d);
          if ((*pcVar6 != '\0') ||
             (iVar4 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000),
             iVar4 + 0xf000 < 0x1d000)) {
            cVar2 = *(char *)(param_1 + 0x17d);
            if (cVar2 == '\x01') {
              DAT_030032e1 = 0;
              *(char *)(param_1 + 0x17d) = '\x02';
            }
            else if ((cVar2 == '\x02') &&
                    (iVar4 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000),
                    0x1efff < iVar4 + 0xf000)) {
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
            goto LAB_080217c2;
          }
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_0202ea78 != 0xffffffff) {
            sub_08002A98(DAT_0202ea78 & 0xffff);
            DAT_0202ea78 = 0xffffffff;
          }
          cVar2 = '\x01';
          goto LAB_080217c0;
        }
        puVar5 = &DAT_088434a0;
      }
      sub_080275F0(&DAT_0202e920,puVar5);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      DAT_0202e918 = DAT_0202e918 | 2;
      *(undefined *)(param_1 + 0x17c) = 5;
      goto LAB_080217c2;
    }
    cVar2 = '\x03';
  }
LAB_080217c0:
  *pcVar6 = cVar2;
LAB_080217c2:
  if ((*(char *)(param_1 + 0x17c) == '\x02') && ((DAT_0202e918 & 8) == 0)) {
    if (((DAT_0202dae4 & 1) == 0) && (0x4b000 < *(int *)(iVar3 + 0x58))) {
      if ((DAT_0202cac0 & 0xf) == 2) {
        sub_0810DEE0(0x615,0x5a);
      }
      else {
        sub_0810DEE0(0x610,0x5a);
      }
      DAT_0202dae4 = DAT_0202dae4 | 1;
    }
    if (((DAT_0202dae4 & 2) == 0) && (0x8c000 < *(int *)(iVar3 + 0x58))) {
      if ((DAT_0202cac0 & 0xf) == 2) {
        sub_0810DEE0(0x616,0x5a);
      }
      else {
        sub_0810DEE0(0x611,0x5a);
      }
      DAT_0202dae4 = DAT_0202dae4 | 2;
    }
    bVar1 = DAT_0202dae4 & 4;
    if (((DAT_0202dae4 & 4) == 0) && (0xbe000 < *(int *)(iVar3 + 0x58))) {
      if (DAT_0202dae0 != 0) {
        *(undefined *)(DAT_0202dae0 + 0xd) = 1;
        DAT_0202dad4 = bVar1;
      }
      if ((DAT_0202cac0 & 0xf) == 2) {
        sub_0810DEE0(0x617,0x5a);
      }
      else {
        sub_0810DEE0(0x612,0x5a);
      }
      DAT_0202dae4 = DAT_0202dae4 | 4;
    }
    if (((DAT_0202dae4 & 8) == 0) && (DAT_0202eb94 < 3000)) {
      if ((DAT_0202cac0 & 0xf) == 2) {
        sub_0810DEE0(0x618,0x5a);
      }
      else {
        sub_0810DEE0(0x613,0x5a);
      }
      DAT_0202dae4 = DAT_0202dae4 | 8;
    }
    if (((DAT_0202dae4 & 0x10) == 0) && (DAT_0202eb94 < 600)) {
      if ((DAT_0202cac0 & 0xf) == 2) {
        sub_0810DEE0(0x619,0x5a);
      }
      else {
        sub_0810DEE0(0x614,0x5a);
      }
      DAT_0202dae4 = DAT_0202dae4 | 0x10;
    }
  }
  return (ulonglong)in_lr << 0x20;
}

