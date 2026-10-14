// sub_080AF94C at 0x080AF94C (thumb)

undefined4 sub_080AF94C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,2);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x28) = &DAT_082b6988;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x800;
  }
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080AF9E0(param_1);
  return in_lr;
}

