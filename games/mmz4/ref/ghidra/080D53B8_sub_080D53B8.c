// sub_080D53B8 at 0x080D53B8 (thumb)

undefined8 sub_080D53B8(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080D085C(0x80d5389);
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x12;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d5415;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined *)(iVar1 + 0x11) = param_2;
    sub_0810CF20();
  }
  return CONCAT44(in_lr,iVar1);
}

