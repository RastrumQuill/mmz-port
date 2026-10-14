// sub_080230D0 at 0x080230D0 (thumb)

longlong sub_080230D0(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  if (*pcVar4 == '\0') {
    local_1c = 0;
    local_18 = 0;
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    uVar2 = sub_080F6F48(&local_1c,0,0);
    *(undefined4 *)(param_1 + 0x284) = uVar2;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_088457cc);
      sub_0801F63C(2);
      DAT_0202e8ba = DAT_0202e8ba & 0xf;
      DAT_02035886 = DAT_02035886 & 0xf;
      *pcVar4 = '\x02';
    }
    else if (DAT_0202e912 == '\x02') {
      sub_080275F0(&DAT_0202e920,&DAT_088451cc);
      *pcVar4 = '\x02';
    }
    else if (DAT_0202e912 == '\x03') {
      sub_080275F0(&DAT_0202e920,&DAT_088452a4);
      sub_0801F63C(4);
      *pcVar4 = '\x04';
    }
    else if (DAT_0202e912 == '\x04') {
      sub_080275F0(&DAT_0202e920,&DAT_08845364);
      *pcVar4 = '\x05';
    }
    else if (DAT_0202e912 == '\x05') {
      sub_080275F0(&DAT_0202e920,&DAT_08845434);
      *pcVar4 = '\t';
    }
  }
  else if (((*pcVar4 == '\x02') && (0x78000 < *(int *)(iVar3 + 0x54))) &&
          (*(int *)(iVar3 + 0x54) < 0x87000)) {
    *pcVar4 = '\x03';
  }
  else {
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x87000 < *(int *)(iVar3 + 0x54))) {
      sub_080275F0(&DAT_0202e920,&DAT_088452fc);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar1 = 5;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x04') && (0x87000 < *(int *)(iVar3 + 0x54))) {
      sub_080275F0(&DAT_0202e920,&DAT_088452fc);
      sub_0801F63C(4);
      DAT_0202e8b4 = DAT_0202e8b4 | 8;
      uVar1 = 5;
    }
    else {
      pcVar4 = (char *)(param_1 + 0x17c);
      if (*pcVar4 == '\x05') {
        sub_0801F63C(3);
        *pcVar4 = '\x06';
        goto LAB_080233c2;
      }
      if ((*pcVar4 == '\x06') && ((DAT_0202e918 & 0x10) != 0)) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_080275F0(&DAT_0202e920,&DAT_088453d4);
        DAT_0202e922 = DAT_0202e922 & 0xfd;
        DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
        DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
        *pcVar4 = '\a';
        goto LAB_080233c2;
      }
      if (*(char *)(param_1 + 0x17c) == '\a') {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = 0;
        uVar1 = 8;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\b') && (0x96000 < *(int *)(iVar3 + 0x54))) {
        DAT_0202e891 = 0xff;
        sub_0801F63C(5);
        DAT_0202e8b4 = DAT_0202e8b4 | 8;
        uVar1 = 9;
      }
      else if (*(char *)(param_1 + 0x17c) == '\t') {
        if ((0xeffe < *(int *)(iVar3 + 0x54) - 0x78001U) || (0x31fff < *(int *)(iVar3 + 0x58)))
        goto LAB_080233c2;
        uVar1 = 10;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar3 + 0x54) < 0x88001))
        goto LAB_080233c2;
        sub_080275F0(&DAT_0202e920,&DAT_08845844);
        DAT_0202e918 = DAT_0202e918 & 0xfffe;
        uVar1 = 0xc;
      }
    }
    *(undefined *)(param_1 + 0x17c) = uVar1;
  }
LAB_080233c2:
  return (ulonglong)in_lr << 0x20;
}

