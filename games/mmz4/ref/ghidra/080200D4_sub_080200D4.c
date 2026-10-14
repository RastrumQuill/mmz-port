// sub_080200D4 at 0x080200D4 (thumb)

longlong sub_080200D4(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  ushort uVar5;
  char *pcVar6;
  uint in_lr;
  
  iVar1 = DAT_020359b8;
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar6 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar6;
  if (cVar2 == '\0') {
    uVar5 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 == '\0') {
      DAT_0202e918 = uVar5;
      *(undefined *)(param_1 + 0x188) = *(undefined *)(DAT_020359b8 + 0xc0);
      *(undefined *)(param_1 + 0x189) = *(undefined *)(iVar1 + 0xc1);
      sub_080275F0(&DAT_0202e920,&DAT_0883ff08);
      sub_0801F63C(2);
      *pcVar6 = '\x02';
      uVar5 = DAT_0202e918;
      goto LAB_08020410;
    }
    if (DAT_0202e912 != '\x02') {
      if (DAT_0202e912 == '\x03') {
        DAT_0202e918 = uVar5;
        sub_080275F0(&DAT_0202e920,&DAT_0883fe88);
        *pcVar6 = '\x03';
        uVar5 = DAT_0202e918;
      }
      else {
        if (DAT_0202e912 == '\x04') {
          puVar4 = &DAT_08840ac8;
        }
        else {
          if (DAT_0202e912 != '\x05') {
            if (DAT_0202e912 == '\x06') {
              DAT_0202e918 = uVar5;
              sub_080275F0(&DAT_0202e920,&DAT_08840c60);
              *pcVar6 = '\a';
              uVar5 = DAT_0202e918;
            }
            else if (DAT_0202e912 == '\a') {
              DAT_0202dad5 = DAT_0202dad5 | 1;
              DAT_0202e918 = uVar5;
              sub_080275F0(&DAT_0202e920,&DAT_08840d80);
              *pcVar6 = '\n';
              uVar5 = DAT_0202e918;
            }
            else if (DAT_0202e912 == '\b') {
              DAT_0202e918 = (DAT_0202e918 | 5) & 0xfffe;
              *pcVar6 = '\f';
              uVar5 = DAT_0202e918;
            }
            goto LAB_08020410;
          }
          puVar4 = &DAT_08840b20;
        }
        DAT_0202e918 = uVar5;
        sub_080275F0(&DAT_0202e920,puVar4);
        sub_0801F63C(5);
        *pcVar6 = '\x06';
        uVar5 = DAT_0202e918;
      }
      goto LAB_08020410;
    }
    DAT_0202e918 = uVar5;
    sub_080275F0(&DAT_0202e920,&DAT_0883fe18);
    sub_0801F63C(3);
    DAT_02035964 = *(undefined *)(param_1 + 0x188);
    DAT_02035965 = *(undefined *)(param_1 + 0x189);
  }
  else {
    if (cVar2 != '\x02') {
      if ((cVar2 == '\x03') && (0x121000 < *(int *)(iVar3 + 0x54))) {
        DAT_030032e1 = DAT_030032e1 | 2;
        DAT_030032e0 = DAT_030032e0 | 0x80;
        *pcVar6 = '\x04';
        uVar5 = DAT_0202e918;
      }
      else {
        pcVar6 = (char *)(param_1 + 0x17c);
        cVar2 = *pcVar6;
        if (cVar2 == '\x04') {
          sub_080275F0(&DAT_0202e920,&DAT_08840788);
          sub_0801F63C(4);
          *pcVar6 = '\x05';
          uVar5 = DAT_0202e918;
        }
        else if (cVar2 == '\x05') {
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_030032e1 = 0;
          sub_0801F63C(5);
          *pcVar6 = '\x06';
          uVar5 = DAT_0202e918;
        }
        else if ((cVar2 == '\x06') && (0x1c2000 < *(int *)(iVar3 + 0x54))) {
          DAT_030032e1 = DAT_030032e1 | 2;
          DAT_030032e0 = DAT_030032e0 | 0x80;
          *pcVar6 = '\b';
          uVar5 = DAT_0202e918;
        }
        else if ((*(char *)(param_1 + 0x17c) == '\a') && (0x1c2000 < *(int *)(iVar3 + 0x54))) {
          DAT_030032e1 = DAT_030032e1 | 2;
          DAT_030032e0 = DAT_030032e0 | 0x80;
          *(char *)(param_1 + 0x17c) = '\t';
          uVar5 = DAT_0202e918;
        }
        else {
          cVar2 = *(char *)(param_1 + 0x17c);
          if (cVar2 == '\b') {
            DAT_030032e1 = 0;
            sub_080275F0(&DAT_0202e920,&DAT_08840b88);
            sub_0801F63C(7);
            cVar2 = '\n';
          }
          else if (cVar2 == '\t') {
            DAT_030032e1 = 0;
            sub_080275F0(&DAT_0202e920,&DAT_08840cd0);
            sub_0801F63C(7);
            cVar2 = '\n';
          }
          else if (cVar2 == '\n') {
            sub_0801F63C(6);
            cVar2 = '\v';
          }
          else {
            uVar5 = DAT_0202e918;
            if ((cVar2 != '\v') || ((DAT_0202e918 & 0x10) == 0)) goto LAB_08020410;
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_080275F0(&DAT_0202e920,&DAT_08840e30);
            DAT_0202e922 = DAT_0202e922 & 0xfd;
            DAT_0202e918 = DAT_0202e918 & 0xffef | 4;
            sub_0801F63C(8);
            cVar2 = '\f';
          }
          *(char *)(param_1 + 0x17c) = cVar2;
          uVar5 = DAT_0202e918;
        }
      }
      goto LAB_08020410;
    }
    sub_0801F63C(3);
  }
  *pcVar6 = '\x03';
  uVar5 = DAT_0202e918;
LAB_08020410:
  DAT_0202e918 = uVar5;
  if ((0x1b8fff < *(int *)(iVar3 + 0x54)) && ((DAT_0202dad5 & 1) == 0)) {
    DAT_0202dad5 = DAT_0202dad5 | 1;
  }
  return (ulonglong)in_lr << 0x20;
}

