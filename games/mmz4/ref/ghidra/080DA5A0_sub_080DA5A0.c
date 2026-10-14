// sub_080DA5A0 at 0x080DA5A0 (thumb)

undefined8 sub_080DA5A0(undefined4 *param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x25;
    *(undefined4 *)(iVar1 + 0x14) = 0x80da5f9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined4 *)(iVar1 + 0x5c) = param_2;
    *(undefined *)(iVar1 + 0x12) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

