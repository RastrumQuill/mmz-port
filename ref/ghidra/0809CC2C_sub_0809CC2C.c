// sub_0809CC2C at 0x0809CC2C (thumb)

undefined4 sub_0809CC2C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x40);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x80) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

