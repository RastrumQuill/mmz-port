// sub_080501F4 at 0x080501F4 (thumb)

undefined4 sub_080501F4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xcd) = 1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 4;
    sub_08006E08(param_1 + 0x74,&DAT_0833b90c);
    sub_080127E4(param_1,0xa407);
    iVar2 = sub_08006B84(DAT_0202f074);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x18;
      *(undefined *)(iVar2 + 9) = 0xb;
      *(undefined4 *)(iVar2 + 0x14) = 0x804ee6d;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined *)(iVar2 + 0x10) = 1;
      *(int *)(iVar2 + 0x28) = param_1;
    }
    sub_080032EC(0x85);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') && (iVar2 = sub_08006B84(DAT_0202f074), iVar2 != 0)) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 0xb;
    *(undefined4 *)(iVar2 + 0x14) = 0x804ee6d;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(iVar2 + 0x10) = 2;
    *(int *)(iVar2 + 0x28) = param_1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == ' ') {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  }
  sub_080128D4(param_1);
  return in_lr;
}

