// sub_08022CB0 at 0x08022CB0 (thumb)

longlong sub_08022CB0(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  uint in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar6 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar6;
  if (cVar1 == '\0') {
    local_24 = 0;
    local_20 = 0;
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    uVar3 = sub_080F6F48(&local_24,0,0);
    *(undefined4 *)(param_1 + 0x284) = uVar3;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_088450ac);
      sub_0801F63C(1);
      DAT_0202e8ba = DAT_0202e8ba & 0xf;
      *pcVar6 = '\x01';
      goto LAB_080230ae;
    }
    if (DAT_0202e912 != '\x01') {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_088451cc);
        *pcVar6 = '\x02';
      }
      else if (DAT_0202e912 == '\x03') {
        sub_080275F0(&DAT_0202e920,&DAT_088452a4);
        sub_0801F63C(4);
        *pcVar6 = '\x04';
      }
      else if (DAT_0202e912 == '\x04') {
        sub_080275F0(&DAT_0202e920,&DAT_08845364);
        *pcVar6 = '\x05';
      }
      else if (DAT_0202e912 == '\x05') {
        sub_080275F0(&DAT_0202e920,&DAT_08845434);
        *pcVar6 = '\t';
      }
      else if (DAT_0202e912 == '\x06') {
        sub_080275F0(&DAT_0202e920,&DAT_08845554);
        *pcVar6 = '\v';
      }
      else if (DAT_0202e912 == '\a') {
        sub_080275F0(&DAT_0202e920,&DAT_08845664);
        *pcVar6 = '\f';
      }
      goto LAB_080230ae;
    }
    sub_080275F0(&DAT_0202e920,&DAT_0884516c);
  }
  else if (cVar1 != '\x01') {
    if (((cVar1 == '\x02') && (0x78000 < *(int *)(iVar5 + 0x54))) &&
       (*(int *)(iVar5 + 0x54) < 0x87000)) {
      *pcVar6 = '\x03';
      goto LAB_080230ae;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x87000 < *(int *)(iVar5 + 0x54))) {
      puVar4 = &DAT_08845224;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar5 + 0x54) < 0x87001)) {
        if (*(char *)(param_1 + 0x17c) == '\x05') {
          sub_0801F63C(3);
          uVar2 = 6;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x06') || ((DAT_0202e918 & 0x10) == 0)) {
            pcVar6 = (char *)(param_1 + 0x17c);
            if (*pcVar6 == '\a') {
              DAT_030032e0 = DAT_030032e0 & 0x7f;
              DAT_030032e1 = 0;
              *pcVar6 = '\b';
              goto LAB_080230ae;
            }
            if ((*pcVar6 == '\b') && (0x96000 < *(int *)(iVar5 + 0x54))) {
              DAT_0202e891 = 0xff;
              sub_0801F63C(5);
              DAT_0202e8b4 = DAT_0202e8b4 | 8;
              *pcVar6 = '\t';
              goto LAB_080230ae;
            }
            if (*(char *)(param_1 + 0x17c) == '\t') {
              if ((*(int *)(iVar5 + 0x54) - 0x78001U < 0xefff) && (*(int *)(iVar5 + 0x58) < 0x32000)
                 ) {
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
              goto LAB_080230ae;
            }
            if ((*(char *)(param_1 + 0x17c) == '\n') && (0x88000 < *(int *)(iVar5 + 0x54))) {
              puVar4 = &DAT_0884548c;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\v') || (*(int *)(iVar5 + 0x54) < 0x87001)) {
                if (*(char *)(param_1 + 0x17c) == '\f') {
                  sub_0801F63C(6);
                  uVar2 = 0xd;
                }
                else {
                  if ((*(char *)(param_1 + 0x17c) != '\r') || ((DAT_0202e918 & 0x10) == 0))
                  goto LAB_080230ae;
                  DAT_030032e0 = DAT_030032e0 | 0x80;
                  DAT_030032e1 = DAT_030032e1 | 2;
                  sub_080275F0(&DAT_0202e920,&DAT_0884570c);
                  DAT_0202e922 = DAT_0202e922 & 0xfd;
                  DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
                  uVar2 = 0xe;
                }
                goto LAB_080230ac;
              }
              puVar4 = &DAT_088455ac;
            }
            sub_080275F0(&DAT_0202e920,puVar4);
            sub_0801F63C(7);
            *(undefined *)(param_1 + 0x17c) = 0xc;
            goto LAB_080230ae;
          }
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_080275F0(&DAT_0202e920,&DAT_088453d4);
          DAT_0202e922 = DAT_0202e922 & 0xfd;
          DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
          DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
          uVar2 = 7;
        }
LAB_080230ac:
        *(undefined *)(param_1 + 0x17c) = uVar2;
        goto LAB_080230ae;
      }
      puVar4 = &DAT_088452fc;
    }
    sub_080275F0(&DAT_0202e920,puVar4);
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17c) = 5;
    goto LAB_080230ae;
  }
  sub_0801F63C(2);
  *pcVar6 = '\x02';
LAB_080230ae:
  return (ulonglong)in_lr << 0x20;
}

