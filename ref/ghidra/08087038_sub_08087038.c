// sub_08087038 at 0x08087038 (thumb)

undefined4 sub_08087038(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x26;
    *(undefined4 *)(iVar1 + 0x14) = 0x8087091;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fcc;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023006;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

