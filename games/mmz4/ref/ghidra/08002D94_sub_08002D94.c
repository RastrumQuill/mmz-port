// sub_08002D94 at 0x08002D94 (thumb)

undefined4 sub_08002D94(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  sub_081284E4(&local_20,param_1 + 8,0x1000000);
  local_1c = 0;
  sub_081284E8(&local_1c,param_1 + 8,&DAT_05000006);
  sub_08002C94(param_1,0x8002e69);
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf3 | 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined2 *)(param_1 + 0x1c) = 0x100;
  *(undefined2 *)(param_1 + 0x1e) = 0x100;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x13;
  return in_lr;
}

