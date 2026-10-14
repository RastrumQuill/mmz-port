// sub_080362BC at 0x080362BC (thumb)

undefined4 sub_080362BC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0835b3e0);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0xbd04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080360E0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100);
  iVar2 = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0x280;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100) + (iVar2 >> 8);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  cVar1 = sub_080360BC(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_080177F4(param_1);
  return in_lr;
}

