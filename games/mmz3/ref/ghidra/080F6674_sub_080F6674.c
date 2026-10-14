// sub_080F6674 at 0x080F6674 (thumb)

undefined4 sub_080F6674(int param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  sub_080041E4(*(undefined *)(param_1 + 0xe08));
  pcVar2 = (char *)(param_1 + 0xe17);
  if (*pcVar2 == '\0') {
    sub_080F6CB8(param_1);
    bVar1 = 0;
    do {
      sub_080E7084(param_1,bVar1);
      bVar1 = bVar1 + 1;
    } while (bVar1 < 3);
    bVar1 = 0;
    do {
      sub_080E7454(param_1,0,bVar1);
      sub_080E7454(param_1,1,bVar1);
      bVar1 = bVar1 + 1;
    } while (bVar1 < 6);
    *pcVar2 = *pcVar2 + '\x01';
  }
  if ((DAT_02002134 & 2) == 0) {
    if (*(char *)(param_1 + 0xe07) == '\0') {
      *(undefined *)(param_1 + 3) = 2;
      *(undefined *)(param_1 + 0xe17) = 0;
      *(undefined *)(param_1 + 0xe04) = 0;
      if (*(char *)(param_1 + 0xe08) != '\0') {
        sub_08004230();
        *(undefined *)(param_1 + 0xe08) = 0;
      }
      DAT_02002410 = DAT_02002410 | 0x2000;
      DAT_0200241c = 2;
      DAT_0200241e = DAT_0200241e | 0x11;
      DAT_02002414 = 0x1078;
      DAT_02002418 = 0x1090;
      *(undefined *)(param_1 + 0xe09) = 0x10;
    }
    else {
      *(char *)(param_1 + 0xe07) = *(char *)(param_1 + 0xe07) + -1;
    }
  }
  else {
    *(undefined *)(param_1 + 3) = 0;
    sub_08004230(*(undefined *)(param_1 + 0xe08));
    *(undefined *)(param_1 + 0xe08) = 0x4e;
    sub_080040A8(0x4e,0);
    sub_080041E4(*(undefined *)(param_1 + 0xe08));
    sub_0800471C(3);
  }
  return in_lr;
}

