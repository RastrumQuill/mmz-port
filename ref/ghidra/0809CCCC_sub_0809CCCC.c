// sub_0809CCCC at 0x0809CCCC (thumb)

undefined4 sub_0809CCCC(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  byte bVar3;
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
  if (*(int *)(param_1 + 0xbc) < 0x3001) {
    if (*(int *)(param_1 + 0xbc) < 0) {
      bVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar3;
      if (bVar3 == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
    }
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 1;
    }
    else {
      bVar3 = 0;
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(byte *)(param_1 + 0xe) = bVar3;
  }
  return in_lr;
}

