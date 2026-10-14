// sub_080987B0 at 0x080987B0 (thumb)

undefined8 sub_080987B0(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x45;
    *(undefined4 *)(iVar1 + 0x14) = 0x8098815;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202309a;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023105;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x74) = *param_2;
    *(undefined4 *)(iVar1 + 0x78) = param_2[1];
    *(undefined *)(iVar1 + 0x12) = param_3;
    *(undefined *)(iVar1 + 0x78) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

