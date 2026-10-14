// sub_08021A10 at 0x08021A10 (thumb)

longlong sub_08021A10(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x17c) == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 == '\0') {
      DAT_0202eb94 = 0x20d0;
      sub_080275F0(&DAT_0202e920,&DAT_088439a8);
      sub_0801F63C(3);
      uVar1 = 3;
    }
    else if (DAT_0202e912 == '\x03') {
      sub_080275F0(&DAT_0202e920,&DAT_08843448);
      sub_0801F63C(4);
      uVar1 = 4;
    }
    else if (DAT_0202e912 == '\x04') {
      sub_080275F0(&DAT_0202e920,&DAT_08843548);
      DAT_0202e918 = DAT_0202e918 | 2;
      uVar1 = 5;
    }
    else {
      if (DAT_0202e912 != '\x05') goto LAB_08021d2e;
      sub_080275F0(&DAT_0202e920,&DAT_08843638);
      uVar1 = 9;
    }
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x03') &&
          (iVar2 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000), 0x1e000 < iVar2 + 0xf000)
          ) {
    sub_080275F0(&DAT_0202e920,&DAT_088434a0);
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    DAT_0202e918 = DAT_0202e918 | 2;
    uVar1 = 5;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x04') &&
          (iVar2 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000), 0x1e000 < iVar2 + 0xf000)
          ) {
    sub_080275F0(&DAT_0202e920,&DAT_088434a0);
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    DAT_0202e918 = DAT_0202e918 | 2;
    uVar1 = 5;
  }
  else {
    pcVar4 = (char *)(param_1 + 0x17c);
    if (*pcVar4 == '\x05') {
      sub_0801F63C(3);
      *pcVar4 = '\x06';
      goto LAB_08021d2e;
    }
    if ((*pcVar4 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_080275F0(&DAT_0202e920,&DAT_088435b8);
      DAT_0202e922 = DAT_0202e922 & 0xfd;
      DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
      DAT_0202e918 = DAT_0202e918 & 0xffed | 1;
      *pcVar4 = '\a';
      goto LAB_08021d2e;
    }
    if (*(char *)(param_1 + 0x17c) == '\a') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      uVar1 = 8;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\b') &&
            (iVar2 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000),
            0x3cfff < iVar2 + 0xf000)) {
      sub_0801F63C(5);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar1 = 9;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) == '\t') && (*(int *)(iVar3 + 0x58) < 0xd7000)) {
        iVar2 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000);
        if (0x1cfff < iVar2 + 0xf000) {
          DAT_030032e1 = DAT_030032e1 | 2;
        }
        iVar3 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000);
        if (0x1efff < iVar3 + 0xf000) {
          DAT_030032e1 = 0;
          *(char *)(param_1 + 0x17c) = '\n';
        }
        goto LAB_08021d2e;
      }
      if ((*(char *)(param_1 + 0x17c) != '\n') ||
         (iVar3 = sub_08128954(*(int *)(iVar3 + 0x54) + -0xf000,0x3c000), iVar3 + 0xf000 < 0x2d000))
      goto LAB_08021d2e;
      sub_080275F0(&DAT_0202e920,&DAT_08843a20);
      DAT_0202e918 = DAT_0202e918 & 0xfffe;
      uVar1 = 0xc;
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar1;
LAB_08021d2e:
  return (ulonglong)in_lr << 0x20;
}

