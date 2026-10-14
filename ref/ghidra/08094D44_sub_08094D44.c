// sub_08094D44 at 0x08094D44 (thumb)

undefined8 sub_08094D44(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x34;
    *(undefined4 *)(iVar1 + 0x14) = 0x8094da1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023078;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230f4;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

