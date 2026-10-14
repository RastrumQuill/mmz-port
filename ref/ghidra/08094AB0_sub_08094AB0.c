// sub_08094AB0 at 0x08094AB0 (thumb)

undefined4 sub_08094AB0(int param_1,short param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x33;
    *(undefined4 *)(iVar1 + 0x14) = 0x8094b0d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023076;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230f3;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(iVar1 + 0x54) = (int)param_2;
  }
  return in_lr;
}

