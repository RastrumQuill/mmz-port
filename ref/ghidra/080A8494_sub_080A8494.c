// sub_080A8494 at 0x080A8494 (thumb)

undefined4 sub_080A8494(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_0809C980();
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0xffffff80;
    iVar2 = *(int *)(param_1 + 0x50) + -0x80;
    *(int *)(param_1 + 0x50) = iVar2;
    iVar3 = *(int *)(iVar3 + 0xbc) + 0xc800;
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x50) = iVar3;
      *(int *)(param_1 + 0xc0) = iVar3;
      sub_0809C930(param_1,6);
      sub_0809C980(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xc0);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0809C930(param_1,5);
      sub_0809C980(param_1);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x48;
      *(undefined **)(param_1 + 0x28) = &DAT_082b6394;
      sub_080A7EAC(param_1,0);
      sub_080A7EAC(param_1,1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar1 = 0xfffffe00;
      }
      else {
        uVar1 = 0x200;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar1;
    }
  }
  return in_lr;
}

