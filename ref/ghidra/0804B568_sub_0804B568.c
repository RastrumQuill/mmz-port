// sub_0804B568 at 0x0804B568 (thumb)

undefined4 sub_0804B568(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080489E4();
  iVar1 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0xc0) = iVar1;
  *(int *)(param_1 + 0x50) = iVar1 + 0x1000;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_080033F0(param_1 + 0x6c,0xd);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082aef48,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 **)(param_1 + 0x80) = (undefined4 *)(param_1 + 0xb8);
  return in_lr;
}

