// sub_080C1964 at 0x080C1964 (thumb)

undefined4 sub_080C1964(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_080C1A70();
  uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (uVar1 < 0x4001) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08348864;
    *(undefined2 *)(param_1 + 0x26) = 0x2401;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  sub_080128D4(param_1);
  return in_lr;
}

