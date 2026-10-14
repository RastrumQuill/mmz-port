// sub_080FA994 at 0x080FA994 (thumb)

undefined4 sub_080FA994(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (uVar1 < 0xf001) {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      sub_08128884(param_1,*(undefined4 *)(&DAT_088673e0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080FAB34(param_1);
  }
  return in_lr;
}

