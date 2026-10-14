// sub_0804128C at 0x0804128C (thumb)

undefined4 sub_0804128C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd1);
  if (bVar1 == 0) {
    if (*(char *)(param_1 + 0xcb) != '\0') goto LAB_0804131c;
    if (*(char *)(param_1 + 0xc9) == '\x01') {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      bVar1 = (byte)(uVar2 * 2 >> 0x11) & 1;
    }
    else {
      if (*(char *)(param_1 + 0xc9) != '\x02') goto LAB_0804131c;
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      bVar1 = sub_080C8CB0(uVar2 * 2 >> 0x11,3);
    }
  }
  else {
    bVar1 = bVar1 - 1;
  }
  *(byte *)(param_1 + 0xd1) = bVar1;
LAB_0804131c:
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 2;
  *(undefined *)(param_1 + 0x12) = 4;
  return in_lr;
}

