// sub_08024A70 at 0x08024A70 (thumb)

longlong sub_08024A70(int param_1)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  undefined *puVar4;
  ushort uVar5;
  char *pcVar6;
  uint in_lr;
  
  cVar2 = DAT_0202e912;
  pcVar6 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar6;
  if (cVar1 == '\0') {
    uVar5 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 == '\0') {
      DAT_0202e918 = uVar5;
      sub_080275F0(&DAT_0202e920,&DAT_088477cc);
      sub_0801F63C(1);
      DAT_0202e8bb = 0;
      DAT_0202e8bc = 0;
      DAT_0202e8bd = DAT_0202e8bd & 0xfc;
      *pcVar6 = '\x01';
      uVar5 = DAT_0202e918;
      goto LAB_08024cc6;
    }
    if (DAT_0202e912 != '\x01') {
      if (DAT_0202e912 == '\x02') {
        puVar4 = &DAT_088478ec;
      }
      else {
        if (DAT_0202e912 != '\x03') {
          if (DAT_0202e912 == '\x04') {
            DAT_0202e918 = uVar5;
            sub_080275F0(&DAT_0202e920,&DAT_08847bac);
            sub_0801F63C(3);
            uVar3 = 7;
          }
          else {
            if (DAT_0202e912 != '\x05') goto LAB_08024cc6;
            DAT_0202e918 = DAT_0202e918 & 0xfffe;
LAB_08024cc2:
            uVar3 = 9;
          }
          goto LAB_08024cc4;
        }
        puVar4 = &DAT_08847aac;
      }
      DAT_0202e918 = uVar5;
      sub_080275F0(&DAT_0202e920,puVar4);
      *pcVar6 = cVar2;
      uVar5 = DAT_0202e918;
      goto LAB_08024cc6;
    }
    DAT_0202e918 = uVar5;
    sub_080275F0(&DAT_0202e920,&DAT_0884788c);
    sub_0801F63C(2);
    uVar3 = 2;
  }
  else if (cVar1 == '\x01') {
    sub_0801F63C(2);
    uVar3 = 2;
  }
  else if ((cVar1 == '\x02') && (0x1fbfff < *(int *)(*(int *)(param_1 + 0x20) + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    DAT_030032e0 = DAT_030032e0 | 0x80;
    sub_0801F63C(4);
    uVar3 = 4;
  }
  else {
    if ((*(char *)(param_1 + 0x17c) == '\x03') &&
       (0x1fdfff < *(int *)(*(int *)(param_1 + 0x20) + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      DAT_030032e0 = DAT_030032e0 | 0x80;
      sub_0801F63C(4);
      *(char *)(param_1 + 0x17c) = '\x05';
      uVar5 = DAT_0202e918;
      goto LAB_08024cc6;
    }
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x04') {
      DAT_030032e1 = 0;
      sub_080275F0(&DAT_0202e920,&DAT_08847944);
      uVar3 = 6;
    }
    else if (cVar1 == '\x05') {
      DAT_030032e1 = 0;
      sub_080275F0(&DAT_0202e920,&DAT_08847b04);
      uVar3 = 6;
    }
    else if (cVar1 == '\x06') {
      sub_0801F63C(3);
      uVar3 = 7;
    }
    else {
      if ((cVar1 != '\a') || ((DAT_0202e918 & 0x10) == 0)) {
        uVar5 = DAT_0202e918;
        if (*(char *)(param_1 + 0x17c) != '\b') goto LAB_08024cc6;
        sub_080275F0(&DAT_0202e920,&DAT_08847f3c);
        DAT_0202e918 = DAT_0202e918 & 0xfffe | 4;
        sub_0801F63C(5);
        goto LAB_08024cc2;
      }
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_080275F0(&DAT_0202e920,&DAT_08847c34);
      DAT_0202e922 = DAT_0202e922 & 0xfd;
      DAT_0202e918 = DAT_0202e918 & 0xffef | 1;
      uVar3 = 8;
    }
  }
LAB_08024cc4:
  *(undefined *)(param_1 + 0x17c) = uVar3;
  uVar5 = DAT_0202e918;
LAB_08024cc6:
  DAT_0202e918 = uVar5;
  if ((DAT_0202e8bd & 2) == 0) {
    DAT_0202cacc = 0x1ef000;
  }
  else {
    DAT_0202cacc = 0x3c0000;
  }
  return (ulonglong)in_lr << 0x20;
}

