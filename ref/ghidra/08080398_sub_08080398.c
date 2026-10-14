// sub_08080398 at 0x08080398 (thumb)

undefined8 sub_08080398(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_1 == 1) {
    iVar2 = sub_08005428(DAT_02022f74);
    if (iVar2 == 0) goto LAB_08080408;
    *(undefined *)(iVar2 + 9) = 0x19;
    *(undefined4 *)(iVar2 + 0x14) = 0x808045d;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022fb2;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022ff9;
    uVar1 = 3;
  }
  else {
    iVar2 = sub_08005458(DAT_02022f74);
    if (iVar2 == 0) goto LAB_08080408;
    *(undefined *)(iVar2 + 9) = 0x19;
    *(undefined4 *)(iVar2 + 0x14) = 0x808045d;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022fb2;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022ff9;
    uVar1 = 2;
  }
  *(undefined *)(iVar2 + 0x10) = uVar1;
  *(char *)(iVar2 + 0x11) = (char)param_1;
LAB_08080408:
  return CONCAT44(in_lr,iVar2);
}

