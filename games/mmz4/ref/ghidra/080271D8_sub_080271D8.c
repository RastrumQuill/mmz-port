// sub_080271D8 at 0x080271D8 (thumb)

longlong sub_080271D8(ushort *param_1)

{
  undefined *puVar1;
  uint in_lr;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    DAT_0202e8bc = DAT_0202e8bc & 0xe3;
    if (DAT_0202e912 == '\0') {
      puVar1 = &DAT_0884d2b4;
    }
    else if (DAT_0202e912 == '\x01') {
      puVar1 = &DAT_0884d2fc;
    }
    else if (DAT_0202e912 == '\x02') {
      puVar1 = &DAT_0884d354;
    }
    else if (DAT_0202e912 == '\x03') {
      puVar1 = *(undefined **)((&DAT_0883f7b4)[*param_1] + 0xc);
    }
    else if (DAT_0202e912 == '\x04') {
      puVar1 = *(undefined **)((&DAT_0883f7b4)[*param_1] + 0x10);
    }
    else if (DAT_0202e912 == '\x05') {
      puVar1 = *(undefined **)((&DAT_0883f7b4)[*param_1] + 0x14);
    }
    else if (DAT_0202e912 == '\x06') {
      puVar1 = *(undefined **)((&DAT_0883f7b4)[*param_1] + 0x18);
    }
    else if (DAT_0202e912 == '\a') {
      puVar1 = *(undefined **)((&DAT_0883f7b4)[*param_1] + 0x1c);
    }
    else {
      if (DAT_0202e912 != '\b') {
        if (DAT_0202e912 == '\t') {
          sub_080275F0(&DAT_0202e920,*(undefined4 *)((&DAT_0883f7b4)[*param_1] + 0x3c));
          *(undefined *)(param_1 + 0xbe) = 0xff;
        }
        goto LAB_080273e6;
      }
      puVar1 = *(undefined **)((&DAT_0883f7b4)[*param_1] + 0x38);
    }
    sub_080275F0(&DAT_0202e920,puVar1);
    *(char *)(param_1 + 0xbe) = -1;
  }
  else if ((DAT_0202e8b6 & 8) == 0) {
    if (*(int *)(DAT_020359b8 + 0x54) - 0x55001U < 0x4fff) {
      DAT_0202cacc = 0x57000;
    }
    else {
      DAT_0202cacc = 0x3c0000;
    }
  }
  else if (((DAT_0202e8b6 & 0x10) == 0) && (0x159000 < *(int *)(DAT_020359b8 + 0x54))) {
    sub_080275F0(&DAT_0202e920,&DAT_0884d93c);
    sub_0801F63C(9);
    DAT_0202e8b6 = DAT_0202e8b6 | 0x10;
    DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
    DAT_0202e8b5 = DAT_0202e8b5 & 0xe0;
  }
LAB_080273e6:
  sub_08027408(param_1);
  return (ulonglong)in_lr << 0x20;
}

