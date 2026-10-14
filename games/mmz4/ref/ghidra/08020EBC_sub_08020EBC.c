// sub_08020EBC at 0x08020EBC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong sub_08020EBC(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  uVar3 = (uint)*(byte *)(param_1 + 0x17c);
  if (uVar3 == 0) {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    _DAT_0202ea98 = uVar3;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_08842f04);
      sub_0801F63C(2);
      DAT_0202e8b9 = DAT_0202e8b9 & 0xdf;
      DAT_02035885 = DAT_02035885 & 0xdf;
      uVar2 = 2;
    }
    else {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_088427dc);
        *(byte *)(param_1 + 0x17c) = 2;
        goto LAB_08021198;
      }
      if (DAT_0202e912 == '\x03') {
        sub_080275F0(&DAT_0202e920,&DAT_08842904);
        sub_0801F63C(4);
        uVar2 = 4;
      }
      else if (DAT_0202e912 == '\x04') {
        sub_080275F0(&DAT_0202e920,&DAT_08842a04);
        uVar2 = 5;
      }
      else {
        if (DAT_0202e912 != '\x05') goto LAB_08021198;
        sub_080275F0(&DAT_0202e920,&DAT_08842b6c);
        uVar2 = 9;
      }
    }
  }
  else if ((uVar3 == 2) && (*(int *)(iVar4 + 0x54) < 0x2d000)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 3;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x03') && (*(int *)(iVar4 + 0x54) < 0x2d000)) {
    DAT_030032e1 = 0;
    sub_080275F0(&DAT_0202e920,&DAT_0884295c);
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    uVar2 = 5;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x04') && (*(int *)(iVar4 + 0x54) < 0x2d000)) {
    DAT_030032e1 = 0;
    sub_080275F0(&DAT_0202e920,&DAT_0884295c);
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    uVar2 = 5;
  }
  else {
    pcVar5 = (char *)(param_1 + 0x17c);
    if (*pcVar5 == '\x05') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      sub_0801F63C(3);
      *pcVar5 = '\x06';
      goto LAB_08021198;
    }
    if ((*pcVar5 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_080275F0(&DAT_0202e920,&DAT_08842a74);
      DAT_0202e922 = DAT_0202e922 & 0xfd;
      DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
      DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
      *pcVar5 = '\a';
      goto LAB_08021198;
    }
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\a') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      uVar2 = 8;
    }
    else if (cVar1 == '\b') {
      sub_0801F63C(5);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar2 = 9;
    }
    else if (cVar1 == '\t') {
      if (0x11bfff < *(int *)(iVar4 + 0x54)) {
        DAT_030032e1 = DAT_030032e1 | 2;
      }
      if (*(int *)(iVar4 + 0x54) < 0x11e000) goto LAB_08021198;
      DAT_030032e1 = 0;
      uVar2 = 10;
    }
    else {
      if ((cVar1 != '\n') || (*(int *)(iVar4 + 0x54) < 0x12c000)) goto LAB_08021198;
      sub_080275F0(&DAT_0202e920,&DAT_08842f7c);
      DAT_0202e918 = DAT_0202e918 & 0xfffe;
      uVar2 = 0xc;
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_08021198:
  return (ulonglong)in_lr << 0x20;
}

