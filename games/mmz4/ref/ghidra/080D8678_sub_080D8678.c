// sub_080D8678 at 0x080D8678 (thumb)

undefined8
sub_080D8678(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x1b;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d86e1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_5;
    *(undefined *)(iVar1 + 0x11) = 1;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(uint *)(iVar1 + 0x74) = param_3 & 0xffff;
    *(undefined4 *)(iVar1 + 0x78) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

