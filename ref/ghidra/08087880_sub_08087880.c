// sub_08087880 at 0x08087880 (thumb)

undefined4 sub_08087880(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x12) == '\n') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    bVar1 = *(byte *)(param_1 + 0x11);
    puVar2 = &UNK_082b3088;
  }
  else {
    if (*(char *)(param_1 + 0x12) != '\r') goto LAB_080878da;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    bVar1 = *(byte *)(param_1 + 0x11);
    puVar2 = &UNK_082b30a4;
  }
  sub_080055FC(param_1 + 0x74,puVar2 + (uint)bVar1 * 0x38,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
LAB_080878da:
  uVar4 = *(undefined4 *)(iVar5 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (((*(ushort *)(param_1 + 0x90) & 4) != 0) && (iVar3 = sub_08001F08(0x7e), iVar3 == 0)) {
    sub_08001EAC(0x7e);
  }
  if ((0x19 < *(byte *)(param_1 + 0x12)) || (*(char *)(iVar5 + 0xd) == '\x17')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

