// sub_080AB770 at 0x080AB770 (thumb)

undefined4 sub_080AB770(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar2 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  uVar1 = FUN_081288bc((uint)((0x14 - iVar2) * 0x1000000) >> 0x10,0x14);
  *(undefined2 *)(param_1 + 0xc2) = uVar1;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

