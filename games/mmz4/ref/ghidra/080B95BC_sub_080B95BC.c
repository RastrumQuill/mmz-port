// sub_080B95BC at 0x080B95BC (thumb)

undefined4 sub_080B95BC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CE54();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 1;
    sub_0801CF00(param_1,0xc607);
    *(undefined *)(param_1 + 0x13) = 0x28;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
  }
  if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
    sub_080E6230(param_1 + 0x54,*(undefined *)(param_1 + 0x12),*(byte *)(param_1 + 10) >> 4 & 1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (5 < bVar1) {
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  cVar2 = sub_080B9A34(param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

