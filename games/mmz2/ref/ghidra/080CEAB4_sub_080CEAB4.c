// sub_080CEAB4 at 0x080CEAB4 (thumb)

undefined4 sub_080CEAB4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x11);
    if ((bVar1 < 6) && (*(int *)(param_1 + 0x54) < DAT_0202ed50 + 0x77ff)) {
      if (bVar1 == 1) {
        sub_080032EC(0x5e);
      }
      else if ((bVar1 & 1) != 0) {
        sub_080032EC(0x5d);
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  iVar2 = *(int *)(param_1 + 0x54) + -0x800;
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar2 < *(int *)(DAT_0202e130 + 0x54) + -0xf000) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080CE858(param_1);
  }
  return in_lr;
}

