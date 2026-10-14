// sub_080BA4D4 at 0x080BA4D4 (thumb)

undefined4 sub_080BA4D4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x25) = 0x1a;
    bVar1 = *(byte *)(param_1 + 0x74);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    if (*(char *)(param_1 + 0x75) == '\0') {
      sub_080127E4(param_1,0x6b01);
    }
    else {
      sub_080127E4(param_1,0x6b03);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x75) == '\0') {
    if ((*(uint *)(iVar3 + 0xb4) & 0x20) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if ((*(uint *)(iVar3 + 0xb4) & 2) != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    if ((*(uint *)(iVar3 + 0xb4) & 0x40) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if ((*(uint *)(iVar3 + 0xb4) & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  sub_080128D4(param_1);
  return in_lr;
}

