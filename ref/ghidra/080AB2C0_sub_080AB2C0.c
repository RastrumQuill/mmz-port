// sub_080AB2C0 at 0x080AB2C0 (thumb)

undefined4 sub_080AB2C0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_0809C980();
  uVar1 = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(iVar2 + 0x48);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(iVar2 + 0x4a);
    if (*(char *)(iVar2 + 0xd) != '\0') {
      sub_0809C6C4(param_1);
      sub_0809C930(param_1,3);
      sub_0809C980(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

