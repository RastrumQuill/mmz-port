// sub_08095290 at 0x08095290 (thumb)

undefined4 sub_08095290(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x35;
    *(undefined4 *)(iVar1 + 0x14) = 0x8095385;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202307a;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230f5;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return in_lr;
}

