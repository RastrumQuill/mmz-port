// sub_0805EE88 at 0x0805EE88 (thumb)

undefined4 sub_0805EE88(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa16);
    uVar2 = sub_080032EC(0x78);
    *(undefined2 *)(param_1 + 0xe0) = uVar2;
    sub_080872A0(param_1,0,0);
    sub_080872A0(param_1,1,0);
    sub_080872A0(param_1,2,0);
    sub_080872A0(param_1,3,0);
    sub_080872A0(param_1,0,2);
    sub_080872A0(param_1,1,2);
    sub_080872A0(param_1,2,2);
    sub_080872A0(param_1,3,2);
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined *)(param_1 + 0x12) = 0xc0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
    sub_080032EC(0x7b);
    sub_080A4E3C(param_1,0,(*(byte *)(param_1 + 0x13) & 1) << 4 | 0x20);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if (((DAT_0202e130 != 0) && ((*(uint *)(DAT_0202e130 + 0x8c) & 0x200) == 0)) &&
     (*(short *)(DAT_0202e130 + 0xa4) != 0)) {
    if (*(int *)(param_1 + 0x5c) < 0x2c0) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x10;
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      sub_080230C4(DAT_0202e130,-*(int *)(param_1 + 0x5c));
    }
    else {
      sub_080230C4(DAT_0202e130,*(undefined4 *)(param_1 + 0x5c));
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

