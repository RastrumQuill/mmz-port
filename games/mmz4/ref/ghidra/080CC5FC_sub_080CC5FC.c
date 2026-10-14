// sub_080CC5FC at 0x080CC5FC (thumb)

undefined8 sub_080CC5FC(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x2b;
    *(undefined4 *)(iVar1 + 0x14) = 0x80cc65d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(char *)(iVar1 + 0x10) = (char)((uint)param_2 >> 8);
    *(char *)(iVar1 + 0x11) = (char)param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

