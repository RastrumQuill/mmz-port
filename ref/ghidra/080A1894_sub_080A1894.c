// sub_080A1894 at 0x080A1894 (thumb)

undefined4 sub_080A1894(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xffffff80;
    uVar1 = sub_08001EAC(0x53);
    *(undefined2 *)(param_1 + 0xc4) = uVar1;
  }
  sub_0809C980(param_1);
  iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 < 0x11fff) {
    *(undefined4 *)(param_1 + 0x50) = 0x11fff;
    DAT_02022ae1 = DAT_02022ae1 & 0xdf;
  }
  return in_lr;
}

