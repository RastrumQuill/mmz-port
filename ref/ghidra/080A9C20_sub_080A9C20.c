// sub_080A9C20 at 0x080A9C20 (thumb)

undefined4 sub_080A9C20(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,*(undefined2 *)(param_1 + 0xc4));
    *(undefined *)(param_1 + 0xe) = 0;
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (0x1000 < uVar2) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

