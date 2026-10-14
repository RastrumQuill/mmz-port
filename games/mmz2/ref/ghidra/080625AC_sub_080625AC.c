// sub_080625AC at 0x080625AC (thumb)

undefined4 sub_080625AC(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xc1) = 0;
    sub_080127E4(param_1,0x6b00);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if (*(byte *)(param_1 + 0xc2) < 2) {
      uVar2 = 2;
    }
    else {
      *(byte *)(param_1 + 0xc2) = 0;
      bVar4 = *(byte *)(param_1 + 0xcc) + 1 & 1;
      *(byte *)(param_1 + 0xcc) = bVar4;
      if (bVar4 == 0) {
        uVar2 = 4;
      }
      else {
        uVar2 = 9;
      }
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x04';
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 200);
  iVar3 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)] * 0x280;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 200) + (iVar3 >> 8);
  sub_080128D4(param_1);
  return in_lr;
}

