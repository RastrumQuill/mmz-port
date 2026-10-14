// sub_0804B960 at 0x0804B960 (thumb)

undefined4 sub_0804B960(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa10d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = sub_0801E4D8();
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return in_lr;
    }
  }
  if ((DAT_0202ec42 & 1) == 0) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      cVar1 = sub_080EF330(uVar3 * 2 >> 0x11,*(undefined *)(param_1 + 0x13));
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xd) = 0x1f;
      }
      else if (cVar1 == '\x01') {
        *(undefined *)(param_1 + 0xd) = 0x25;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xf) = 6;
      }
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

