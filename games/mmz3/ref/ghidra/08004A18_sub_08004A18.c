// sub_08004A18 at 0x08004A18 (thumb)

undefined4 sub_08004A18(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  sub_080FE110(local_18,param_1,0x1000008);
  sub_080048A0(param_1,0x8004c69);
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf3 | 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined2 *)(param_1 + 0x1c) = 0x100;
  *(undefined2 *)(param_1 + 0x1e) = 0x100;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfc | 0x11;
  return in_lr;
}

