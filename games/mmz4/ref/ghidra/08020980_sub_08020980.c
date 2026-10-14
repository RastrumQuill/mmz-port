// sub_08020980 at 0x08020980 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong sub_08020980(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  uint in_lr;
  
  bVar2 = DAT_0202e8b4;
  iVar4 = *(int *)(param_1 + 0x20);
  pbVar5 = (byte *)(param_1 + 0x17c);
  uVar3 = (uint)*pbVar5;
  if (uVar3 == 0) {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    _DAT_0202ea98 = uVar3;
    *(undefined *)(param_1 + 0x17d) = 0;
    if ((bVar2 & 0x40) == 0) {
      if (DAT_0202e912 == '\0') {
        sub_080275F0(&DAT_0202e920,&DAT_0884269c);
        sub_0801F63C(1);
        DAT_0202e8b9 = DAT_0202e8b9 & 0xdf;
        *pbVar5 = 1;
        goto LAB_08020ea6;
      }
      if (DAT_0202e912 == '\x01') {
        sub_080275F0(&DAT_0202e920,&DAT_0884276c);
        sub_0801F63C(2);
        bVar2 = 2;
      }
      else {
        if (DAT_0202e912 == '\x02') {
          sub_080275F0(&DAT_0202e920,&DAT_088427dc);
          *pbVar5 = 2;
          goto LAB_08020ea6;
        }
        if (DAT_0202e912 == '\x03') {
          sub_080275F0(&DAT_0202e920,&DAT_08842904);
          sub_0801F63C(4);
          bVar2 = 4;
        }
        else if (DAT_0202e912 == '\x04') {
          sub_080275F0(&DAT_0202e920,&DAT_08842a04);
          bVar2 = 5;
        }
        else if (DAT_0202e912 == '\x05') {
          sub_080275F0(&DAT_0202e920,&DAT_08842b6c);
          bVar2 = 9;
        }
        else if (DAT_0202e912 == '\x06') {
          sub_080275F0(&DAT_0202e920,&DAT_08842c8c);
          bVar2 = 0xb;
        }
        else {
          if (DAT_0202e912 != '\a') goto LAB_08020ea6;
          sub_080275F0(&DAT_0202e920,&DAT_08842d94);
          bVar2 = 0xc;
        }
      }
    }
    else {
      sub_080275F0(&DAT_0202e920,&DAT_08843004);
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      bVar2 = 0x14;
    }
  }
  else if (uVar3 == 1) {
    sub_0801F63C(2);
    bVar2 = 2;
  }
  else if ((uVar3 == 2) && (*(int *)(iVar4 + 0x54) < 0x2d000)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    bVar2 = 3;
  }
  else {
    pbVar5 = (byte *)(param_1 + 0x17c);
    if ((*pbVar5 == 3) && (*(int *)(iVar4 + 0x54) < 0x2d000)) {
      DAT_030032e1 = 0;
      sub_080275F0(&DAT_0202e920,&DAT_08842844);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      bVar2 = 5;
    }
    else {
      pbVar5 = (byte *)(param_1 + 0x17c);
      if ((*pbVar5 == 4) && (*(int *)(iVar4 + 0x54) < 0x2d000)) {
        DAT_030032e1 = 0;
        sub_080275F0(&DAT_0202e920,&DAT_0884295c);
        sub_0801F63C(4);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        bVar2 = 5;
      }
      else {
        pcVar6 = (char *)(param_1 + 0x17c);
        if (*pcVar6 == '\x05') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          sub_0801F63C(3);
          *pcVar6 = '\x06';
          goto LAB_08020ea6;
        }
        if ((*pcVar6 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_080275F0(&DAT_0202e920,&DAT_08842a74);
          DAT_0202e922 = DAT_0202e922 & 0xfd;
          DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
          DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
          *pcVar6 = '\a';
          goto LAB_08020ea6;
        }
        pbVar5 = (byte *)(param_1 + 0x17c);
        bVar2 = *pbVar5;
        if (bVar2 == 7) {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_030032e1 = 0;
          bVar2 = 8;
        }
        else if (bVar2 == 8) {
          sub_0801F63C(5);
          DAT_0202e8b4 = DAT_0202e8b4 | 8;
          bVar2 = 9;
        }
        else if (bVar2 == 9) {
          pbVar5 = (byte *)(param_1 + 0x17d);
          if ((*pbVar5 != 0) || (*(int *)(iVar4 + 0x54) < 0x11c000)) {
            cVar1 = *(char *)(param_1 + 0x17d);
            if (cVar1 == '\x01') {
              DAT_030032e1 = 0;
              *(char *)(param_1 + 0x17d) = '\x02';
            }
            else if ((cVar1 == '\x02') && (0x11dfff < *(int *)(iVar4 + 0x54))) {
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
            goto LAB_08020ea6;
          }
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_0202ea78 != 0xffffffff) {
            sub_08002A98(DAT_0202ea78 & 0xffff);
            DAT_0202ea78 = 0xffffffff;
          }
          bVar2 = 1;
        }
        else if ((bVar2 == 10) && (0x12bfff < *(int *)(iVar4 + 0x54))) {
          sub_080275F0(&DAT_0202e920,&DAT_08842bcc);
          sub_0801F63C(7);
          bVar2 = 0xc;
        }
        else {
          pbVar5 = (byte *)(param_1 + 0x17c);
          if ((*pbVar5 == 0xb) && (0x12bfff < *(int *)(iVar4 + 0x54))) {
            sub_080275F0(&DAT_0202e920,&DAT_08842ce4);
            sub_0801F63C(7);
            bVar2 = 0xc;
          }
          else {
            pbVar5 = (byte *)(param_1 + 0x17c);
            if (*pbVar5 == 0xc) {
              sub_0801F63C(6);
              bVar2 = 0xd;
            }
            else if ((*pbVar5 == 0xd) && ((DAT_0202e918 & 0x10) != 0)) {
              DAT_030032e0 = DAT_030032e0 | 0x80;
              DAT_030032e1 = DAT_030032e1 | 2;
              sub_080275F0(&DAT_0202e920,&DAT_08842e44);
              DAT_0202e922 = DAT_0202e922 & 0xfd;
              DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
              bVar2 = 0xe;
            }
            else {
              pbVar5 = (byte *)(param_1 + 0x17c);
              if (*pbVar5 == 0x14) {
                iVar4 = *(int *)(param_1 + 0x180);
                if (iVar4 != 0) {
                  *(int *)(param_1 + 0x180) = iVar4 + -1;
                  goto LAB_08020ea6;
                }
                if (DAT_0202ea78 != 0xffffffff) {
                  sub_08002A98(DAT_0202ea78 & 0xffff);
                  DAT_0202ea78 = 0xffffffff;
                }
                DAT_0202ea64 = 2;
                bVar2 = 0x15;
              }
              else {
                if ((*pbVar5 != 0x15) || (DAT_0202ea64 != 0)) goto LAB_08020ea6;
                DAT_0202e918 = DAT_0202e918 & 0xfffe | 4;
                bVar2 = 0x16;
              }
            }
          }
        }
      }
    }
  }
  *pbVar5 = bVar2;
LAB_08020ea6:
  return (ulonglong)in_lr << 0x20;
}

