// sub_0809F8F8 at 0x0809F8F8 (thumb)

undefined4 sub_0809F8F8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar1 = param_1 + 0x54;
    sub_080DFAE0(iVar1,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + 0xab070000 >> 0x10,0);
    sub_080DFAE0(iVar1,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + 0xab080000 >> 0x10,1);
    sub_080DFAE0(iVar1,(ushort)*(byte *)(param_1 + 0x11) * 0x100 + -0x54f7,2);
    sub_080DFAE0(iVar1,(ushort)*(byte *)(param_1 + 0x11) * 0x100 + -0x54f7,2);
    sub_080DFAE0(iVar1,(ushort)*(byte *)(param_1 + 0x11) * 0x100 + -0x54f6,3);
    sub_080DFAE0(iVar1,(ushort)*(byte *)(param_1 + 0x11) * 0x100 + -0x54f6,3);
    sub_08002B10(0x3f);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  *(undefined *)(iVar2 + 0xd9 + (uint)*(byte *)(param_1 + 0x11)) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  if (*(byte *)(iVar2 + 0xd) < 0xd) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

