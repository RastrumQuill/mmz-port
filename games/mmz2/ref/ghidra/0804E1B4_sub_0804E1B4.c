// sub_0804E1B4 at 0x0804E1B4 (thumb)

undefined4 sub_0804E1B4(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    uVar2 = sub_080032EC(0x4e);
    *(undefined2 *)(param_1 + 0xd6) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  pbVar3 = (byte *)(param_1 + 0xbd);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar3] * 8;
  *pbVar3 = *pbVar3 + 1;
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + '\x01';
  cVar1 = sub_080EF330(cVar1,6);
  if (cVar1 == '\0') {
    sub_0809EDA4(param_1,*(undefined *)(param_1 + 0x13),0);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if (8 < *(byte *)(param_1 + 0x13)) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

