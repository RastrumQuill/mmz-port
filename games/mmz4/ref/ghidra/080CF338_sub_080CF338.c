// sub_080CF338 at 0x080CF338 (thumb)

undefined4 sub_080CF338(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_080CEF78(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,2,0);
      uVar1 = 0xfffffcc0;
    }
    else {
      uVar1 = 0x340;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x1000 < uVar2) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CF3B4(param_1);
  }
  return in_lr;
}

