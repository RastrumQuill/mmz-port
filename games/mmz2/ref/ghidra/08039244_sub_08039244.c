// sub_08039244 at 0x08039244 (thumb)

undefined8 sub_08039244(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_2 + 0x212) == '\0') || (*(char *)(param_2 + 0x213) == '\0')) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

