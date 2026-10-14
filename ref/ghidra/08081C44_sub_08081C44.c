// sub_08081C44 at 0x08081C44 (thumb)

undefined8 sub_08081C44(undefined4 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x8081dfd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fb8;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022ffc;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

