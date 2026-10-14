// sub_080B3D84 at 0x080B3D84 (thumb)

undefined4 sub_080B3D84(int param_1)

{
  undefined4 in_lr;
  
  sub_080033DC(param_1 + 0x6c,&DAT_085b8004);
  sub_080020A4(param_1 + 0x2c,&DAT_08593004,param_1 + 0x4c);
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  *(undefined2 *)(param_1 + 0x4a) = 0x100;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
  return in_lr;
}

