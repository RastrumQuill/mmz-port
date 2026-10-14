// sub_0805EA1C at 0x0805EA1C (thumb)

undefined4 sub_0805EA1C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0xee);
        sub_08017700(param_1,0x1100);
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_0805eaca;
      sub_08017934(param_1);
      sub_080177F4(param_1);
      if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x12) == '\0')) {
        *(undefined *)(param_1 + 0x12) = 1;
        sub_080ADD30(param_1,0xf);
      }
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 0xb;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_0805eaca;
    }
    if (bVar1 != 0) goto LAB_0805eaca;
    sub_0800471C(0xec);
    sub_080ADD30(param_1,0xe);
    sub_08017700(param_1,0x1000);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08017934(param_1);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0805eaca:
  iVar2 = DAT_0202f5c0;
  *(undefined4 *)(DAT_0202f5c0 + 0x54) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x68);
  return in_lr;
}

