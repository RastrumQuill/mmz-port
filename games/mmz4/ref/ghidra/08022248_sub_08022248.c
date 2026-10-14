// sub_08022248 at 0x08022248 (thumb)

longlong sub_08022248(int param_1)

{
  undefined uVar1;
  int iVar2;
  char *pcVar3;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  if (*pcVar3 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_088444b0);
      sub_0801F63C(2);
      DAT_0202e8b9 = DAT_0202e8b9 & 0x3f;
      DAT_0202e8ba = DAT_0202e8ba & 0xf0;
      DAT_02035885 = DAT_02035885 & 0x3f;
      DAT_02035886 = DAT_02035886 & 0xf0;
      *pcVar3 = '\x02';
    }
    else if (DAT_0202e912 == '\x02') {
      sub_080275F0(&DAT_0202e920,&DAT_08843d78);
      *pcVar3 = '\x02';
    }
    else if (DAT_0202e912 == '\x03') {
      sub_080275F0(&DAT_0202e920,&DAT_08843e90);
      sub_0801F63C(4);
      *pcVar3 = '\x04';
    }
    else if (DAT_0202e912 == '\x04') {
      sub_080275F0(&DAT_0202e920,&DAT_08843f90);
      *pcVar3 = '\x05';
    }
    else if (DAT_0202e912 == '\x05') {
      sub_080275F0(&DAT_0202e920,&DAT_08844088);
      *pcVar3 = '\t';
    }
  }
  else if ((*pcVar3 == '\x02') && (0x177000 < *(int *)(iVar2 + 0x54))) {
    *pcVar3 = '\x03';
  }
  else if (((*(char *)(param_1 + 0x17c) == '\x03') && (0x186000 < *(int *)(iVar2 + 0x54))) ||
          ((*(char *)(param_1 + 0x17c) == '\x04' && (0x186000 < *(int *)(iVar2 + 0x54))))) {
    sub_080275F0(&DAT_0202e920,&DAT_08843ee8);
    sub_0801F63C(4);
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    *(undefined *)(param_1 + 0x17c) = 5;
  }
  else {
    if (*(char *)(param_1 + 0x17c) == '\x05') {
      sub_0801F63C(3);
      uVar1 = 6;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_080275F0(&DAT_0202e920,&DAT_08844000);
      DAT_0202e922 = DAT_0202e922 & 0xfd;
      DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
      DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
      uVar1 = 7;
    }
    else {
      pcVar3 = (char *)(param_1 + 0x17c);
      if (*pcVar3 == '\a') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        *pcVar3 = '\b';
        goto LAB_08022510;
      }
      if ((*pcVar3 == '\b') && (0x1a4fff < *(int *)(iVar2 + 0x54))) {
        sub_0801F63C(5);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        *pcVar3 = '\t';
        goto LAB_08022510;
      }
      if (*(char *)(param_1 + 0x17c) == '\t') {
        if (0x2a1fff < *(int *)(iVar2 + 0x54)) {
          DAT_030032e1 = DAT_030032e1 | 2;
        }
        if (*(int *)(iVar2 + 0x54) < 0x2a4000) goto LAB_08022510;
        DAT_030032e1 = 0;
        uVar1 = 10;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar2 + 0x54) < 0x2b2000))
        goto LAB_08022510;
        sub_080275F0(&DAT_0202e920,&DAT_08844528);
        DAT_0202e918 = DAT_0202e918 & 0xfffe;
        uVar1 = 0xc;
      }
    }
    *(undefined *)(param_1 + 0x17c) = uVar1;
  }
LAB_08022510:
  return (ulonglong)in_lr << 0x20;
}

