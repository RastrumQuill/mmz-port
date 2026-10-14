// sub_0802A908 at 0x0802A908 (thumb)

undefined4 sub_0802A908(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x218) & 4) != 0) {
    *(undefined *)(param_1 + 0x110) = 0x1c;
    *(undefined *)(param_1 + 0x123) = 0;
    sub_08017700(param_1,0x300);
    sub_080B322C(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    if (*(int *)(param_1 + 0xf4) == 0) {
      uVar2 = sub_080B3C5C(param_1);
      *(undefined4 *)(param_1 + 0xf4) = uVar2;
    }
    if (((*(ushort *)(param_1 + 0x216) & 0x8000) == 0) &&
       ((*(char *)(param_1 + 0xc5) == '\x03' || (*(char *)(param_1 + 0xc5) == '\a')))) {
      uVar1 = sub_08032F3C(param_1);
      sub_0802595C(param_1,uVar1);
      *(undefined *)(param_1 + 0x147) = 3;
    }
    sub_0800471C(8);
  }
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0802A9B4(param_1);
  return in_lr;
}

