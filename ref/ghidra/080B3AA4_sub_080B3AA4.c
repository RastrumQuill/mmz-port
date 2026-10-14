// sub_080B3AA4 at 0x080B3AA4 (thumb)

undefined8 sub_080B3AA4(undefined param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_020231fc);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 3;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b3af5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023206;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202320b;
    *(undefined4 *)(iVar1 + 0x4c) = *param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    *(undefined *)(iVar1 + 0x10) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

