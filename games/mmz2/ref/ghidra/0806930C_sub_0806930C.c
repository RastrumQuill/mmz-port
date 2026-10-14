// sub_0806930C at 0x0806930C (thumb)

undefined4 sub_0806930C(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  puVar3 = (ushort *)(param_1 + 0xb6);
  iVar2 = (uint)*puVar3 * (uint)*(ushort *)(&DAT_0833e09a + (uint)*(byte *)(param_1 + 0x10) * 2);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  sub_080693E4(param_1,(uint)*(byte *)(param_1 + 0xb4) * (*(byte *)(param_1 + 0x10) + 1) - 0x40 &
                       0xff,(uint)(iVar2 << 8) >> 0x10);
  uVar1 = *puVar3;
  *puVar3 = uVar1 - 0x10;
  if ((ushort)(uVar1 - 0x10) < 0x11) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

