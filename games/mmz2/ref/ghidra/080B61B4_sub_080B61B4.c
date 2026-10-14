// sub_080B61B4 at 0x080B61B4 (thumb)

undefined8 sub_080B61B4(undefined4 param_1,undefined4 *param_2,char param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((param_3 == '\x01') && (*(short *)(DAT_0202f084 + 10) == 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_08006B84(DAT_0202f084);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x23;
      *(undefined4 *)(iVar1 + 0x14) = 0x80b6225;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
      uVar2 = param_2[1];
      *(undefined4 *)(iVar1 + 0x54) = *param_2;
      *(undefined4 *)(iVar1 + 0x58) = uVar2;
      *(char *)(iVar1 + 0x10) = param_3;
      *(undefined *)(iVar1 + 0x11) = param_4;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

