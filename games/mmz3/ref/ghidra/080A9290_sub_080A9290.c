// sub_080A9290 at 0x080A9290 (thumb)

undefined4 sub_080A9290(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 in_lr;
  
  sub_080177F4();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 7) == 0) {
    sub_080A8B20(param_1,6,1);
  }
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sub_080A8B20(param_1,5,0x6b);
        sub_080A8B20(param_1,5,0x55);
        sub_080A8B20(param_1,5,0x40);
        sub_080A8B20(param_1,5,0x2b);
        sub_080A8B20(param_1,5,0x15);
      }
      else {
        sub_080A8B20(param_1,5,0xeb);
        sub_080A8B20(param_1,5,0xd5);
        sub_080A8B20(param_1,5,0xc0);
        sub_080A8B20(param_1,5,0xab);
        sub_080A8B20(param_1,5,0x95);
      }
    }
    else {
      sub_080A8B20(param_1,5,0x2b);
      sub_080A8B20(param_1,5,0x15);
      sub_080A8B20(param_1,5,0);
      sub_080A8B20(param_1,5,0xea);
      sub_080A8B20(param_1,5,0xd4);
    }
    sub_0800471C(0x3f);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

