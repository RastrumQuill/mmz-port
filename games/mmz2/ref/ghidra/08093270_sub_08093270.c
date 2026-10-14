// sub_08093270 at 0x08093270 (thumb)

undefined4 sub_08093270(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9000);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    uVar2 = 0xffffff00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sVar1 = (&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff];
  *(int *)(param_1 + 0x60) = sVar1 * 2;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + sVar1 * 2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 0x100;
  iVar3 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x54);
  if (iVar3 < 0) {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xc0);
  }
  if (0x1c000 < iVar3) {
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

