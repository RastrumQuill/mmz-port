// sub_0809B340 at 0x0809B340 (thumb)

undefined8 sub_0809B340(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x52;
    *(undefined4 *)(iVar1 + 0x14) = 0x809b3a1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230b4;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023112;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

