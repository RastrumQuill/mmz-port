// sub_08056544 at 0x08056544 (thumb)

undefined4 sub_08056544(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb304);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xcd);
  if (bVar1 == 0) {
    if (*(char *)(param_1 + 199) != '\0') goto LAB_080565d8;
    if (*(char *)(param_1 + 0xc5) == '\x01') {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      bVar1 = (byte)(uVar2 * 2 >> 0x11) & 1;
    }
    else {
      if (*(char *)(param_1 + 0xc5) != '\x02') goto LAB_080565d8;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      bVar1 = sub_080FE4D8(uVar2 * 2 >> 0x11,3);
    }
  }
  else {
    bVar1 = bVar1 - 1;
  }
  *(byte *)(param_1 + 0xcd) = bVar1;
LAB_080565d8:
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 2;
  *(undefined *)(param_1 + 0x12) = 4;
  return in_lr;
}

