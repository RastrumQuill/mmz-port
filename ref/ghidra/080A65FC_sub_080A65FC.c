// sub_080A65FC at 0x080A65FC (thumb)

undefined4 sub_080A65FC(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a66a5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231a8;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202313c;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

