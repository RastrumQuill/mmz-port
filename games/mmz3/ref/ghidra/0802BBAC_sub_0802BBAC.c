// sub_0802BBAC at 0x0802BBAC (thumb)

undefined4 sub_0802BBAC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x124) & 1;
  if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x702) {
      sub_08017700(param_1,0x702);
      *(uint *)(param_1 + 0x58) = (*(uint *)(param_1 + 0x58) & 0xfffff000) - 1;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(param_1 + 0xd) = bVar1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_0800471C(7);
  }
  return in_lr;
}

