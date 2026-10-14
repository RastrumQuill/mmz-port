// sub_0809828C at 0x0809828C (thumb)

undefined8 sub_0809828C(undefined4 param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x43;
    *(undefined4 *)(iVar1 + 0x14) = 0x80982f1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023096;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023103;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x74) = *param_2;
    *(undefined4 *)(iVar1 + 0x78) = param_2[1];
    *(undefined *)(iVar1 + 0x12) = param_3;
    *(undefined *)(iVar1 + 0x78) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

