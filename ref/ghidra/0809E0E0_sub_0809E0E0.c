// sub_0809E0E0 at 0x0809E0E0 (thumb)

undefined4 sub_0809E0E0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,5);
    sub_080014E8(&DAT_0851003c,(DAT_02023176 - 0x370) * 0x20 + 0x10000);
    sub_0800179C(&DAT_08510048,(DAT_02023123 - 8) * 0x20 + 0x200);
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0809C980(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  }
  return in_lr;
}

