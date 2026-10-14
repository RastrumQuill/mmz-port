// sub_080A18F0 at 0x080A18F0 (thumb)

undefined4 sub_080A18F0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x80;
    uVar1 = sub_08001EAC(0x53);
    *(undefined2 *)(param_1 + 0xc4) = uVar1;
  }
  sub_0809C980(param_1);
  iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  if (0x2ffff < iVar2) {
    *(undefined4 *)(param_1 + 0x50) = 0x2ffff;
    DAT_02022ae1 = DAT_02022ae1 | 0x20;
  }
  return in_lr;
}

