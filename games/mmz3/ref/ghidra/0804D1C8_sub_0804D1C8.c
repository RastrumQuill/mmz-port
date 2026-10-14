// sub_0804D1C8 at 0x0804D1C8 (thumb)

undefined4 sub_0804D1C8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
    uVar1 = sub_080253D8(0x12,param_1,&DAT_0835fae4);
    *(undefined4 *)(param_1 + 0xb4) = uVar1;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20008) == 0x20008) {
    *(undefined2 *)(param_1 + 0xb8) = 0xfc00;
  }
  return in_lr;
}

