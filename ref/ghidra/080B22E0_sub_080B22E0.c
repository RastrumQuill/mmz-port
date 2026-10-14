// sub_080B22E0 at 0x080B22E0 (thumb)

undefined8 sub_080B22E0(undefined4 param_1,undefined4 param_2,undefined param_3,byte param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x42;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b2359;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231f4;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023162;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(byte *)(iVar1 + 0x11) = param_4 & 7;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(byte *)(iVar1 + 0xc5) = param_4 >> 4;
  }
  return CONCAT44(in_lr,iVar1);
}

