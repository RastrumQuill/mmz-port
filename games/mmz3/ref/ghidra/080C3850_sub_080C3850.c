// sub_080C3850 at 0x080C3850 (thumb)

/* WARNING: Removing unreachable block (ram,0x080c3882) */

undefined4 sub_080C3850(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined4 *)(param_1 + 0x5c) = 0x13f;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = -*(int *)(param_1 + 0x5c);
  iVar3 = iVar4 + 0x100;
  if (iVar3 < 0) {
    iVar3 = iVar4 + 0x10f;
  }
  iVar4 = *(int *)(param_1 + 0x5c) + (iVar3 >> 4);
  *(int *)(param_1 + 0x5c) = iVar4;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  uVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
  *(undefined *)(param_1 + 0x13) = uVar1;
  iVar4 = ((uint)*(byte *)(param_1 + 0x13) * -0x10 + 0x110) * iVar4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(short *)(param_1 + 0x50) = (short)((uint)iVar4 >> 8);
  iVar4 = *(int *)(param_1 + 0x5c) * ((uint)*(byte *)(param_1 + 0x13) * -0x10 + 0x100);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(short *)(param_1 + 0x52) = (short)((uint)iVar4 >> 8);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar5 + 0x3c);
  *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar5 + 0x4e);
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar5 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x4a) =
       *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*(byte *)(iVar5 + 10) >> 4 & 1) << 4);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') || (*(int *)(param_1 + 0x5c) < 0x110)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

