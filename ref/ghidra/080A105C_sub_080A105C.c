// sub_080A105C at 0x080A105C (thumb)

undefined4 sub_080A105C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x50);
  sub_080A10C8(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x58);
  uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (uVar2 < 0x2001) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x68;
    *(undefined **)(param_1 + 0x28) = &DAT_082b592c;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_0809C980(param_1);
  return in_lr;
}

