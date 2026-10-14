// sub_080D1DF4 at 0x080D1DF4 (thumb)

undefined4 sub_080D1DF4(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x8c);
  if ((uVar1 & 0x200) == 0) {
    sub_080128D4(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if ((uVar1 & 0x10000) == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = (byte)(-(uVar1 & 0x8000) >> 0x1f);
      }
    }
    else if ((uVar1 & 0x10000) == 0) {
      bVar2 = 2;
    }
    else {
      bVar2 = 2;
      if ((uVar1 & 0x8000) != 0) {
        bVar2 = 3;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    sub_080D1E90(param_1);
  }
  return in_lr;
}

