// sub_080857C0 at 0x080857C0 (thumb)

undefined8 sub_080857C0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x23;
    *(undefined4 *)(iVar1 + 0x14) = 0x8085979;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022fc6;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023003;
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_1[1];
    *(undefined4 *)(iVar1 + 0x5c) = param_2;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(char *)(iVar1 + 0xb8) = (char)((param_3 & 0xff ^ 1) << 7);
    *(char *)(iVar1 + 0x13) = (char)param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

