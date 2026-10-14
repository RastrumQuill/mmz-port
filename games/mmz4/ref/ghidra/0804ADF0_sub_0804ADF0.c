// sub_0804ADF0 at 0x0804ADF0 (thumb)

undefined8 sub_0804ADF0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed88);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x27;
    *(undefined4 *)(iVar1 + 0x14) = 0x804ae6d;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = param_1;
    *(undefined4 *)(iVar1 + 0xb4) = param_2;
    *(char *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
    if (param_3 == '\0') {
      sub_0804ADF0(param_1,iVar1,1);
    }
  }
  return CONCAT44(in_lr,iVar1);
}

