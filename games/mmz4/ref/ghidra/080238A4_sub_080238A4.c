// sub_080238A4 at 0x080238A4 (thumb)

void sub_080238A4(int param_1)

{
  char cVar1;
  undefined uVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  if (*pcVar3 != '\0') {
    if ((*pcVar3 == '\x02') && (0x69000 < *(int *)(iVar4 + 0x54))) {
      DAT_0202e91a = (ushort)(*(int *)(iVar4 + 0x58) < 0x28000);
      *(undefined *)(param_1 + 0x17c) = 3;
      return;
    }
    if (((*(char *)(param_1 + 0x17c) == '\x03') && (0xc3000 < *(int *)(iVar4 + 0x54))) &&
       (0x6f000 < *(int *)(iVar4 + 0x58))) {
      sub_080275F0(&DAT_0202e920,&DAT_08845c90);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar2 = 5;
    }
    else if (((*(char *)(param_1 + 0x17c) == '\x04') && (0xc3000 < *(int *)(iVar4 + 0x54))) &&
            (0x6f000 < *(int *)(iVar4 + 0x58))) {
      sub_080275F0(&DAT_0202e920,&DAT_08845c90);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar2 = 5;
    }
    else {
      pcVar3 = (char *)(param_1 + 0x17c);
      if (*pcVar3 == '\x05') {
        sub_0801F63C(3);
        *pcVar3 = '\x06';
        return;
      }
      if ((*pcVar3 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_080275F0(&DAT_0202e920,&DAT_08845d78);
        DAT_0202e922 = DAT_0202e922 & 0xfd;
        DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
        DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
        *pcVar3 = '\a';
        return;
      }
      if (*(char *)(param_1 + 0x17c) == '\a') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        uVar2 = 8;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\b') && (0xd2fff < *(int *)(iVar4 + 0x54))) {
        sub_0801F63C(5);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        uVar2 = 9;
      }
      else if (*(char *)(param_1 + 0x17c) == '\t') {
        if (0x157fff < *(int *)(iVar4 + 0x54)) {
          DAT_030032e1 = DAT_030032e1 | 2;
        }
        if (*(int *)(iVar4 + 0x54) < 0x15a000) {
          return;
        }
        DAT_030032e1 = 0;
        uVar2 = 10;
      }
      else {
        if (*(char *)(param_1 + 0x17c) != '\n') {
          return;
        }
        if (*(int *)(iVar4 + 0x54) < 0x168000) {
          return;
        }
        sub_080275F0(&DAT_0202e920,&DAT_08846188);
        DAT_0202e918 = DAT_0202e918 & 0xfffe;
        uVar2 = 0xc;
      }
    }
    *(undefined *)(param_1 + 0x17c) = uVar2;
    return;
  }
  DAT_0202e918 = DAT_0202e918 | 1;
  DAT_0202e8b4 = DAT_0202e8b4 | 8;
  DAT_0202daf0._0_1_ = 0;
  DAT_0202daf0._1_1_ = 0xc;
  if (DAT_0202e912 == '\0') {
    sub_080275F0(&DAT_0202e920,&DAT_08846110);
    sub_0801F63C(2);
    DAT_0202e91a = 0;
    cVar1 = '\x02';
  }
  else {
    if (DAT_0202e912 == '\x02') {
      sub_080275F0(&DAT_0202e920,&DAT_08845af8);
      *pcVar3 = '\x02';
      return;
    }
    if (DAT_0202e912 == '\x03') {
      if (DAT_0202e91a == 0) {
        sub_080275F0(&DAT_0202e920,&DAT_08845c38);
      }
      else {
        sub_080275F0(&DAT_0202e920,&DAT_08845be0);
      }
      *(undefined *)(param_1 + 0x17c) = 4;
      return;
    }
    if (DAT_0202e912 == '\x04') {
      sub_080275F0(&DAT_0202e920,&DAT_08845d08);
      *pcVar3 = '\x05';
      return;
    }
    if (DAT_0202e912 != '\x05') {
      DAT_0202daf0._0_1_ = 0;
      DAT_0202daf0._1_1_ = 0xc;
      return;
    }
    sub_080275F0(&DAT_0202e920,&DAT_08845dd8);
    cVar1 = '\t';
  }
  *pcVar3 = cVar1;
  return;
}

