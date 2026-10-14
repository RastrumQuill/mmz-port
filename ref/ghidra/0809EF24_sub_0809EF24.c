// sub_0809EF24 at 0x0809EF24 (thumb)

undefined4 sub_0809EF24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 7;
    *(undefined4 *)(iVar1 + 0x14) = 0x809ef75;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202317e;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023127;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

