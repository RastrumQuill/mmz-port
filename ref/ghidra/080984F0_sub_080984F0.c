// sub_080984F0 at 0x080984F0 (thumb)

undefined8 sub_080984F0(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x44;
    *(undefined4 *)(iVar1 + 0x14) = 0x8098555;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023098;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023104;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x74) = *param_2;
    *(undefined4 *)(iVar1 + 0x78) = param_2[1];
    *(undefined *)(iVar1 + 0x12) = param_3;
    *(undefined *)(iVar1 + 0x78) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

