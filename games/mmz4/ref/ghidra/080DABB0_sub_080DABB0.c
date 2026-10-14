// sub_080DABB0 at 0x080DABB0 (thumb)

undefined4 sub_080DABB0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a50 = DAT_02000a50 | 0x4000;
    DAT_02000a5d = 0x31;
    DAT_02000a5e = DAT_02000a5e | 0xe;
    *(undefined *)(param_1 + 0x74) = 0;
    *(undefined *)(param_1 + 0x75) = 0;
    *(undefined *)(param_1 + 0x76) = 0;
    *(undefined *)(param_1 + 0x7a) = 0xff;
    *(undefined *)(param_1 + 0x7b) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
  iVar5 = *(int *)(DAT_0202dbf0 + 0x58) + -0x3000;
  uVar2 = sub_08128954(*(byte *)(param_1 + 0x13) + 1,3);
  *(undefined *)(param_1 + 0x13) = uVar2;
  bVar1 = *(byte *)(param_1 + 0x13);
  if (bVar1 == 1) {
    pbVar4 = (byte *)(param_1 + 0x7b);
    *(int *)(param_1 + 0x54) =
         *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0x80) * 0x1000000 >> 0x17)) * 3 + iVar3;
    *(int *)(param_1 + 0x58) =
         *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0x40) * 0x1000000 >> 0x17)) * 3 + iVar5;
    *(int *)(param_1 + 100) = (short)(&DAT_08128c10)[*pbVar4] * 3 + iVar3;
    *(int *)(param_1 + 0x68) =
         *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0xc0) * 0x1000000 >> 0x17)) * 3 + iVar5;
    *(undefined *)(param_1 + 0x74) = 0x1f;
    uVar2 = 0x1c;
LAB_080dad74:
    *(undefined *)(param_1 + 0x75) = uVar2;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) goto LAB_080dad7c;
      pbVar4 = (byte *)(param_1 + 0x7b);
      *(int *)(param_1 + 0x54) =
           *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0x80) * 0x1000000 >> 0x17)) + iVar3;
      *(int *)(param_1 + 0x58) =
           *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0x40) * 0x1000000 >> 0x17)) + iVar5;
      *(int *)(param_1 + 100) = (short)(&DAT_08128c10)[*pbVar4] + iVar3;
      *(int *)(param_1 + 0x68) =
           *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0xc0) * 0x1000000 >> 0x17)) + iVar5;
      uVar2 = 0x1f;
      *(undefined *)(param_1 + 0x74) = 0x1f;
      goto LAB_080dad74;
    }
    if (bVar1 != 0) goto LAB_080dad7c;
    pbVar4 = (byte *)(param_1 + 0x7b);
    *(int *)(param_1 + 0x54) =
         *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0x80) * 0x1000000 >> 0x17)) * 5 + iVar3;
    *(int *)(param_1 + 0x58) =
         *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0x40) * 0x1000000 >> 0x17)) * 5 + iVar5;
    *(int *)(param_1 + 100) = (short)(&DAT_08128c10)[*pbVar4] * 5 + iVar3;
    *(int *)(param_1 + 0x68) =
         *(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0xc0) * 0x1000000 >> 0x17)) * 5 + iVar5;
    *(undefined *)(param_1 + 0x74) = 0x1f;
    *(undefined *)(param_1 + 0x75) = 10;
    uVar2 = 0x14;
  }
  *(undefined *)(param_1 + 0x76) = uVar2;
LAB_080dad7c:
  pbVar4 = (byte *)(param_1 + 0x7b);
  pbVar6 = (byte *)(param_1 + 0x7a);
  *(uint *)(param_1 + 0x5c) =
       *(int *)(param_1 + 100) +
       (uint)*pbVar6 * (int)*(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0x40) * 0x1000000 >> 0x17));
  *(uint *)(param_1 + 0x60) =
       *(int *)(param_1 + 0x68) + (uint)*pbVar6 * (int)(short)(&DAT_08128c10)[*pbVar4];
  *(uint *)(param_1 + 0x7c) =
       *(int *)(param_1 + 0x54) +
       (uint)*pbVar6 * (int)*(short *)((int)&DAT_08128c10 + ((*pbVar4 + 0x40) * 0x1000000 >> 0x17));
  *(uint *)(param_1 + 0x80) =
       *(int *)(param_1 + 0x58) + (uint)*pbVar6 * (int)(short)(&DAT_08128c10)[*pbVar4];
  *pbVar4 = *pbVar4 + 1;
  return in_lr;
}

