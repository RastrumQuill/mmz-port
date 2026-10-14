// sub_080E0C10 at 0x080E0C10 (thumb)

undefined8 sub_080E0C10(undefined4 *param_1,char param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x3b;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e0c7d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(char *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    if (param_2 == '\x01') {
      DAT_0202e8d6 = DAT_0202e8d6 + '\x01';
    }
  }
  return CONCAT44(in_lr,iVar1);
}

