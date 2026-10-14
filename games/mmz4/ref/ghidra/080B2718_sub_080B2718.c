// sub_080B2718 at 0x080B2718 (thumb)

undefined4 sub_080B2718(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080B27D8();
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_08860128);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(byte *)(param_1 + 0x11) < 2) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = 0x18;
    }
  }
  return in_lr;
}

