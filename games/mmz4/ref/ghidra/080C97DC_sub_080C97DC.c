// sub_080C97DC at 0x080C97DC (thumb)

undefined8 sub_080C97DC(undefined4 *param_1,char param_2,byte param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x22;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c986d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(char *)(iVar1 + 0x10) = param_2;
    *(byte *)(iVar1 + 0x11) = param_3;
    *(undefined *)(iVar1 + 0xb7) = param_4;
    if (param_2 == '\0') {
      if (param_3 < 3) {
        uVar2 = sub_080C97DC(param_1,0,param_3 + 1,param_4);
        *(undefined4 *)(iVar1 + 0x2c) = uVar2;
      }
      else {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
    }
  }
  return CONCAT44(in_lr,iVar1);
}

