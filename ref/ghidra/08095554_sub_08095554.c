// sub_08095554 at 0x08095554 (thumb)

undefined8 sub_08095554(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x36;
    *(undefined4 *)(iVar1 + 0x14) = 0x80955b1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202307c;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230f6;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

