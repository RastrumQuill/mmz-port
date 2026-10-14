// sub_0809D1F8 at 0x0809D1F8 (thumb)

undefined4 sub_0809D1F8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,0);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  sub_0809C980(param_1);
  if (*(int *)(param_1 + 0xbc) < 0) {
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}

