// sub_0802CCA8 at 0x0802CCA8 (thumb)

undefined4 sub_0802CCA8(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_03003908;
  if ((DAT_03003908 != 0) && (*(int *)(DAT_03003908 + 0x2c) != 0)) {
    *(bool *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x54) < *(int *)(*(int *)(DAT_03003908 + 0x2c) + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*(int *)(iVar2 + 0x2c) + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (DAT_0202f5c8 == '\0') {
      sub_08017700(param_1,0x3301);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return in_lr;
}

