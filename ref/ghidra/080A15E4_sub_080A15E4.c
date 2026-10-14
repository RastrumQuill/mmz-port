// sub_080A15E4 at 0x080A15E4 (thumb)

undefined4 sub_080A15E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(ushort *)(iVar1 + 0x90) & 8) != 0) {
    sub_0809C930(param_1,3);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_0809C980(param_1);
  if ((*(char *)(param_1 + 0xd) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0809C930(param_1,4);
    sub_0809C980(param_1);
  }
  if (1 < *(byte *)(iVar1 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

