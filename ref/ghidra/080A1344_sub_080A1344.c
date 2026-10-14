// sub_080A1344 at 0x080A1344 (thumb)

undefined4 sub_080A1344(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xe;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1399;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202318c;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202312e;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 1;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

