// sub_080B45B4 at 0x080B45B4 (thumb)

undefined8 sub_080B45B4(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_3 << 0x18) >> 0x17;
  uVar2 = (uint)(byte)(&DAT_082b7258)[uVar1];
  uVar1 = (uint)(byte)(&DAT_082b7259)[uVar1];
  do {
    if (((int)(uint)*(byte *)(param_1 + 0x1a4 + (uVar2 >> 3) + (param_2 & 0xff) * 10) >> (uVar2 & 7)
        & 1U) != 0) {
      uVar2 = uVar2 & 0xff;
      goto LAB_080b4604;
    }
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  uVar2 = 0;
LAB_080b4604:
  return CONCAT44(in_lr,uVar2);
}

