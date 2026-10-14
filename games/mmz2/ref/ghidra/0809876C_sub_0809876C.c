// sub_0809876C at 0x0809876C (thumb)

undefined8
sub_0809876C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
            undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0x80987d9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0xb4) = param_2;
    *(undefined4 *)(iVar1 + 0xb8) = param_3;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined *)(iVar1 + 0x11) = param_5;
  }
  return CONCAT44(in_lr,iVar1);
}

