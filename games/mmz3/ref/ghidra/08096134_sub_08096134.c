// sub_08096134 at 0x08096134 (thumb)

undefined4 sub_08096134(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar2 = sub_0800710C(DAT_020305e8);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x18;
      *(undefined *)(iVar2 + 9) = 0x41;
      *(undefined4 *)(iVar2 + 0x14) = 0x80959a5;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(undefined *)(iVar2 + 0x10) = 4;
      *(int *)(iVar2 + 0x28) = param_1;
    }
    *(int *)(param_1 + 0x2c) = iVar2;
    sub_08007390(param_1 + 0x74,&DAT_08366914);
    sub_08017700(param_1,0xdb0e);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x0f') {
    sub_0800471C(0x107);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

