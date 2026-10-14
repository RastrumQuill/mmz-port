// sub_0805A3F8 at 0x0805A3F8 (thumb)

undefined4 sub_0805A3F8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if ((0x6000 < uVar1) && (*(char *)(param_1 + 0x10) == '\x01')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

