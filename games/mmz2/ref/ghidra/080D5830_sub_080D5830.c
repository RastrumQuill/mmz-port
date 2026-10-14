// sub_080D5830 at 0x080D5830 (thumb)

undefined8 sub_080D5830(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)(byte)(&DAT_0834a5ac)[param_3 * 2];
  uVar1 = (uint)(byte)(&DAT_0834a5ad)[param_3 * 2];
  do {
    if (((int)(uint)*(byte *)(param_1 + 0x228 + (uVar2 >> 3) + param_2 * 0xb) >> (uVar2 & 7) & 1U)
        != 0) {
      uVar2 = uVar2 & 0xff;
      goto LAB_080d5878;
    }
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  uVar2 = 0;
LAB_080d5878:
  return CONCAT44(in_lr,uVar2);
}

