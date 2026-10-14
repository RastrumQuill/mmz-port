// sub_08051C64 at 0x08051C64 (thumb)

undefined4 sub_08051C64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xc;
    *(undefined4 *)(iVar1 + 0x14) = 0x8051cb1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022eb8;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f3c;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(undefined *)(iVar1 + 0x10) = 2;
  }
  return in_lr;
}

