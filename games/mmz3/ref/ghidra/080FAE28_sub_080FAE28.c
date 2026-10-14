// sub_080FAE28 at 0x080FAE28 (thumb)

undefined8 sub_080FAE28(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838c29c + (uint)*(byte *)(param_1 + 0xdcc) * 4)
                      );
  if (99999 < *(int *)(param_1 + 0xdec)) {
    *(undefined4 *)(param_1 + 0xdec) = 99999;
  }
  if (*(int *)(param_1 + 0xdf4) < *(int *)(param_1 + 0xdec)) {
    if (*(char *)(param_1 + 0xdf8) == '\0') {
      *(char *)(param_1 + 0xdf8) = '\x01';
      sub_0800471C(0x138);
    }
    else {
      sub_0800471C(0x137);
    }
    *(undefined4 *)(param_1 + 0xdf4) = *(undefined4 *)(param_1 + 0xdec);
  }
  else if (*(int *)(param_1 + 0xdf0) != *(int *)(param_1 + 0xdec)) {
    sub_0800471C(0x137);
  }
  *(undefined4 *)(param_1 + 0xdf0) = *(undefined4 *)(param_1 + 0xdec);
  sub_080FABF0(param_1);
  return CONCAT44(in_lr,uVar1);
}

