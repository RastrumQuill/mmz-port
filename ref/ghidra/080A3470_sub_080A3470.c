// sub_080A3470 at 0x080A3470 (thumb)

undefined4 sub_080A3470(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x15;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a34c1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202319a;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023135;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

