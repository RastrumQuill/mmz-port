// sub_080DE5B8 at 0x080DE5B8 (thumb)

undefined8 sub_080DE5B8(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x32;
    *(undefined4 *)(iVar1 + 0x14) = 0x80de615;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x74) = param_2;
    *(undefined *)(iVar1 + 0x78) = param_3;
    *(undefined *)(iVar1 + 0x79) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

