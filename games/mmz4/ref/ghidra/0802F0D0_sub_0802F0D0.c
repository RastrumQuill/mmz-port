// sub_0802F0D0 at 0x0802F0D0 (thumb)

undefined4 sub_0802F0D0(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  iVar3 = 0x3f;
  puVar4 = (ushort *)(param_1 + 0x1d0);
  puVar2 = (undefined2 *)(param_1 + 0x24c);
  do {
    puVar2[1] = *puVar2;
    uVar1 = DAT_0202e914;
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(byte *)(param_1 + 199) < 4) {
    *puVar4 = DAT_0202e914 & 0xfff;
    *(ushort *)(param_1 + 0x250) = (*(ushort *)(param_1 + 0x252) ^ uVar1) & uVar1;
    *(ushort *)(param_1 + 0x252) = uVar1;
  }
  else {
    if (*(char *)(param_1 + 0x254) == '\0') {
      *puVar4 = DAT_02000760 & 0xefb;
    }
    else {
      *puVar4 = 0;
    }
    *(ushort *)(param_1 + 0x250) = (*(ushort *)(param_1 + 0x252) ^ *puVar4) & *puVar4;
    *(ushort *)(param_1 + 0x252) = *puVar4;
  }
  *(undefined *)(param_1 + 0x254) = 0;
  return in_lr;
}

