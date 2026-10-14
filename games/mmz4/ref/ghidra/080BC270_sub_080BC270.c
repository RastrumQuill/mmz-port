// sub_080BC270 at 0x080BC270 (thumb)

undefined4 sub_080BC270(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  puVar5 = *(ushort **)(param_1 + 0x28);
  uVar4 = *puVar5 & ~(ushort)(1 << *(sbyte *)(param_1 + 0x10));
  *puVar5 = uVar4;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      *puVar5 = uVar4 | 0x8000;
    }
    sub_080D01CC(param_1 + 0x54,0,*(undefined4 *)(param_1 + 0x28));
    sub_08002B10(0xa6);
    goto LAB_080bc382;
  }
  iVar6 = *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(DAT_0202dbf0 + 0x54);
  bVar2 = iVar6 < iVar1;
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    uVar4 = 0x300;
    bVar2 = false;
  }
  else {
    iVar3 = iVar6 - iVar1;
    if (iVar3 < 0) {
      iVar3 = iVar1 - iVar6;
    }
    if (iVar3 - 0x1e01U < 0x7ff) {
      sub_080E7784(param_1 + 0x54,0,bVar2);
      sub_08002B10(0x19f);
      **(ushort **)(param_1 + 0x28) = **(ushort **)(param_1 + 0x28) | 0x500;
      goto LAB_080bc382;
    }
    if (0x1e00 < iVar3) {
      if (0x25ff < iVar3) {
        sub_080E7784(param_1 + 0x54,0x100,bVar2);
        sub_08002B10(0x1a3);
        **(ushort **)(param_1 + 0x28) = **(ushort **)(param_1 + 0x28) | 0x200;
      }
      goto LAB_080bc382;
    }
    uVar4 = 0x200;
  }
  sub_080E7784(param_1 + 0x54,uVar4,bVar2);
  sub_08002B10(0x1a3);
  **(ushort **)(param_1 + 0x28) = uVar4 | **(ushort **)(param_1 + 0x28);
LAB_080bc382:
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

