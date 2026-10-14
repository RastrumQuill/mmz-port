// sub_080FB6E4 at 0x080FB6E4 (thumb)

undefined8 sub_080FB6E4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838c2a8 + (uint)*(byte *)(param_1 + 0xdcc) * 4)
                      );
  sub_080FB16C(param_1);
  if (*(int *)(param_1 + 0xdf0) < 0) {
    *(undefined4 *)(param_1 + 0xdf0) = 0;
  }
  else if (99999 < *(int *)(param_1 + 0xdf0)) {
    *(undefined4 *)(param_1 + 0xdf0) = 99999;
  }
  if (*(int *)(param_1 + 0xdf8) < *(int *)(param_1 + 0xdf0)) {
    if (*(char *)(param_1 + 0xdfc) == '\0') {
      *(char *)(param_1 + 0xdfc) = '\x01';
      sub_0800471C(0x138);
    }
    else {
      sub_0800471C(0x137);
    }
    *(undefined4 *)(param_1 + 0xdf8) = *(undefined4 *)(param_1 + 0xdf0);
  }
  else if (*(int *)(param_1 + 0xdf4) != *(int *)(param_1 + 0xdf0)) {
    sub_0800471C(0x137);
  }
  *(undefined4 *)(param_1 + 0xdf4) = *(undefined4 *)(param_1 + 0xdf0);
  sub_080FB128(param_1);
  return CONCAT44(in_lr,uVar1);
}

