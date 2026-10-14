// sub_080233D8 at 0x080233D8 (thumb)

longlong sub_080233D8(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar5 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17d) = 0;
    DAT_0202daf0._0_1_ = 0;
    DAT_0202daf0._1_1_ = 0xc;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_088459d8);
      sub_0801F63C(1);
      DAT_0202e91a = 0;
      *pcVar5 = '\x01';
      goto LAB_08023882;
    }
    if (DAT_0202e912 != '\x01') {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_08845af8);
        *pcVar5 = '\x02';
      }
      else if (DAT_0202e912 == '\x03') {
        if (DAT_0202e91a == 0) {
          sub_080275F0(&DAT_0202e920,&DAT_08845c38);
        }
        else {
          sub_080275F0(&DAT_0202e920,&DAT_08845be0);
        }
        *(undefined *)(param_1 + 0x17c) = 4;
      }
      else if (DAT_0202e912 == '\x04') {
        sub_080275F0(&DAT_0202e920,&DAT_08845d08);
        *pcVar5 = '\x05';
      }
      else if (DAT_0202e912 == '\x05') {
        sub_080275F0(&DAT_0202e920,&DAT_08845dd8);
        *pcVar5 = '\t';
      }
      else if (DAT_0202e912 == '\x06') {
        sub_080275F0(&DAT_0202e920,&DAT_08845ed8);
        *pcVar5 = '\v';
      }
      else if (DAT_0202e912 == '\a') {
        sub_080275F0(&DAT_0202e920,&DAT_08845fc0);
        *pcVar5 = '\f';
      }
      goto LAB_08023882;
    }
    sub_080275F0(&DAT_0202e920,&DAT_08845a98);
  }
  else if (cVar1 != '\x01') {
    if ((cVar1 == '\x02') && (0x69000 < *(int *)(iVar4 + 0x54))) {
      DAT_0202e91a = (ushort)(*(int *)(iVar4 + 0x58) < 0x28000);
      *(undefined *)(param_1 + 0x17c) = 3;
      goto LAB_08023882;
    }
    if (((*(char *)(param_1 + 0x17c) == '\x03') && (0xc3000 < *(int *)(iVar4 + 0x54))) &&
       (0x6f000 < *(int *)(iVar4 + 0x58))) {
      puVar3 = &DAT_08845b50;
    }
    else {
      if (((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar4 + 0x54) < 0xc3001)) ||
         (*(int *)(iVar4 + 0x58) < 0x6f001)) {
        if (*(char *)(param_1 + 0x17c) == '\x05') {
          sub_0801F63C(3);
          uVar2 = 6;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x06') || ((DAT_0202e918 & 0x10) == 0)) {
            pcVar5 = (char *)(param_1 + 0x17c);
            if (*pcVar5 == '\a') {
              DAT_030032e0 = DAT_030032e0 & 0x7f;
              DAT_030032e1 = 0;
              *pcVar5 = '\b';
              goto LAB_08023882;
            }
            if ((*pcVar5 == '\b') && (0xd2fff < *(int *)(iVar4 + 0x54))) {
              sub_0801F63C(5);
              DAT_0202e8b4 = DAT_0202e8b4 | 8;
              *pcVar5 = '\t';
              goto LAB_08023882;
            }
            if (*(char *)(param_1 + 0x17c) == '\t') {
              if ((*(char *)(param_1 + 0x17d) == '\0') && (0x157fff < *(int *)(iVar4 + 0x54))) {
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
                else if ((cVar1 == '\x02') && (0x159fff < *(int *)(iVar4 + 0x54))) {
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
              goto LAB_08023882;
            }
            if ((*(char *)(param_1 + 0x17c) == '\n') && (0x167fff < *(int *)(iVar4 + 0x54))) {
              puVar3 = &DAT_08845e30;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\v') || (*(int *)(iVar4 + 0x54) < 0x168000)) {
                if (*(char *)(param_1 + 0x17c) == '\f') {
                  sub_0801F63C(6);
                  uVar2 = 0xd;
                }
                else {
                  if ((*(char *)(param_1 + 0x17c) != '\r') || ((DAT_0202e918 & 0x10) == 0))
                  goto LAB_08023882;
                  DAT_030032e0 = DAT_030032e0 | 0x80;
                  DAT_030032e1 = DAT_030032e1 | 2;
                  sub_080275F0(&DAT_0202e920,&DAT_08846050);
                  DAT_0202e922 = DAT_0202e922 & 0xfd;
                  DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
                  uVar2 = 0xe;
                }
                goto LAB_08023880;
              }
              puVar3 = &DAT_08845f30;
            }
            sub_080275F0(&DAT_0202e920,puVar3);
            sub_0801F63C(7);
            *(undefined *)(param_1 + 0x17c) = 0xc;
            goto LAB_08023882;
          }
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_080275F0(&DAT_0202e920,&DAT_08845d78);
          DAT_0202e922 = DAT_0202e922 & 0xfd;
          DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
          DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
          uVar2 = 7;
        }
LAB_08023880:
        *(undefined *)(param_1 + 0x17c) = uVar2;
        goto LAB_08023882;
      }
      puVar3 = &DAT_08845c90;
    }
    sub_080275F0(&DAT_0202e920,puVar3);
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17c) = 5;
    goto LAB_08023882;
  }
  sub_0801F63C(2);
  *pcVar5 = '\x02';
LAB_08023882:
  return (ulonglong)in_lr << 0x20;
}

