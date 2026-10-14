// sub_080B2720 at 0x080B2720 (thumb)

undefined8 sub_080B2720(undefined4 *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x43;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b2785;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231f6;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023163;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return CONCAT44(in_lr,iVar1);
}

