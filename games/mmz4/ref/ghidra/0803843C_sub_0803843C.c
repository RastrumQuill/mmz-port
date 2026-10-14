// sub_0803843C at 0x0803843C (thumb)

undefined4 sub_0803843C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    if (*(byte *)(param_1 + 0xf3) < 6) {
      DAT_0202e8b9 = DAT_0202e8b9 & 0xf7;
      DAT_02035885 = DAT_02035885 & 0xf7;
      DAT_020358a9 = DAT_020358a9 & 0xf7;
    }
    else {
      DAT_0202e8b9 = DAT_0202e8b9 | 8;
      DAT_02035885 = DAT_02035885 | 8;
      DAT_020358a9 = DAT_020358a9 | 8;
    }
    if (4 < *(byte *)(param_1 + 0xf3)) {
      DAT_0202e8b9 = DAT_0202e8b9 | 2;
      return in_lr;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf3) == '\x06') {
      DAT_0202e8b9 = DAT_0202e8b9 | 8;
      DAT_02035885 = DAT_02035885 | 8;
      DAT_020358a9 = DAT_020358a9 | 8;
    }
    else {
      DAT_0202e8b9 = DAT_0202e8b9 & 0xf7;
      DAT_02035885 = DAT_02035885 & 0xf7;
      DAT_020358a9 = DAT_020358a9 & 0xf7;
    }
    if (*(char *)(param_1 + 0xf3) == '\x05') {
      DAT_0202e8b9 = DAT_0202e8b9 | 2;
      return in_lr;
    }
  }
  DAT_0202e8b9 = DAT_0202e8b9 & 0xfd;
  return in_lr;
}

