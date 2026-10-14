// sub_080C7FE0 at 0x080C7FE0 (thumb)

undefined8 sub_080C7FE0(undefined4 param_1,char param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c8045;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(char *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    if (param_2 == '\x01') {
      DAT_0202e8d6 = DAT_0202e8d6 + '\x01';
    }
  }
  return CONCAT44(in_lr,iVar1);
}

