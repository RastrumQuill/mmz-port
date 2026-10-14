// sub_080B3D28 at 0x080B3D28 (thumb)

undefined4 sub_080B3D28(int param_1)

{
  undefined4 in_lr;
  
  sub_080033DC(param_1 + 0x6c,&DAT_085b8004);
  sub_08001FCC(param_1 + 0x2c,&DAT_08593004,param_1 + 0x4c);
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(undefined2 *)(param_1 + 0xb8) = 0xff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xbf | 8;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  return in_lr;
}

