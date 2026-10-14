// sub_080E32E4 at 0x080E32E4 (thumb)

undefined8 sub_080E32E4(undefined4 *param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x47;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e3349;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(char *)(iVar1 + 0x10) = (char)((uint)param_2 >> 8);
    *(char *)(iVar1 + 0x11) = (char)param_2;
    *(undefined *)(iVar1 + 0x75) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

