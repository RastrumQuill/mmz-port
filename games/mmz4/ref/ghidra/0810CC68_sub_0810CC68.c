// sub_0810CC68 at 0x0810CC68 (thumb)

undefined4 sub_0810CC68(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = (uint)(*(ushort *)(param_1 + 0x78) >> 8);
    iVar1 = uVar2 * 2;
    (&DAT_0202e040)[uVar2] = *(undefined2 *)(param_1 + 0x7a);
    puVar3 = &DAT_0202de40;
  }
  else {
    iVar1 = (uint)(*(ushort *)(param_1 + 0x78) >> 8) * 2;
    *(undefined2 *)(&DAT_0202e240 + iVar1) = *(undefined2 *)(param_1 + 0x7a);
    puVar3 = (undefined2 *)&DAT_0202dc40;
  }
  *(ushort *)(iVar1 + (int)puVar3) = (ushort)*(byte *)(param_1 + 0x7e);
  if (*(char *)(param_1 + 0x80) != '\0') {
    sub_08002624();
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

