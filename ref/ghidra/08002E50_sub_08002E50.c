// sub_08002E50 at 0x08002E50 (thumb)

undefined4 sub_08002E50(int param_1,byte param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20;
  uVar3 = (&DAT_080c8e24)[param_2 + 0x40];
  *(undefined2 *)(&DAT_03001bb6 + iVar4) = uVar3;
  *(undefined2 *)(&DAT_03001bce + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       uVar3;
  sVar1 = (&DAT_080c8e24)[param_2];
  *(short *)(&DAT_03001bbe + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) = sVar1;
  *(short *)(&DAT_03001bc6 + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) = -sVar1;
  uVar3 = sub_080C8AD0((int)*(short *)(&DAT_03001bb6 + iVar4) << 8,*(undefined2 *)(param_1 + 0x1c));
  *(undefined2 *)(&DAT_03001bb6 + iVar4) = uVar3;
  uVar3 = sub_080C8AD0((int)*(short *)(&DAT_03001bbe + iVar4) << 8,*(undefined2 *)(param_1 + 0x1c));
  *(undefined2 *)(&DAT_03001bbe + iVar4) = uVar3;
  iVar5 = *(short *)(&DAT_03001bb6 + iVar4) * 0xe6;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  sVar1 = (short)((uint)iVar5 >> 8);
  *(short *)(&DAT_03001bb6 + iVar4) = sVar1;
  iVar5 = *(short *)(&DAT_03001bbe + iVar4) * 0xe6;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  sVar2 = (short)((uint)iVar5 >> 8);
  *(short *)(&DAT_03001bbe + iVar4) = sVar2;
  *(short *)(&DAT_03001bb6 + iVar4) = sVar1 * (char)(&DAT_08290c18)[*(byte *)(param_1 + 0x18)];
  *(short *)(&DAT_03001bbe + iVar4) = sVar2 * (char)(&DAT_08290c18)[*(byte *)(param_1 + 0x18)];
  uVar3 = sub_080C8AD0((int)*(short *)(&DAT_03001bc6 + iVar4) << 8,*(undefined2 *)(param_1 + 0x1e));
  *(undefined2 *)(&DAT_03001bc6 + iVar4) = uVar3;
  uVar3 = sub_080C8AD0((int)*(short *)(&DAT_03001bce + iVar4) << 8,*(undefined2 *)(param_1 + 0x1e));
  *(undefined2 *)(&DAT_03001bce + iVar4) = uVar3;
  iVar5 = *(short *)(&DAT_03001bc6 + iVar4) * 0xe6;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  sVar1 = (short)((uint)iVar5 >> 8);
  *(short *)(&DAT_03001bc6 + iVar4) = sVar1;
  iVar5 = *(short *)(&DAT_03001bce + iVar4) * 0xe6;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  sVar2 = (short)((uint)iVar5 >> 8);
  *(short *)(&DAT_03001bce + iVar4) = sVar2;
  *(short *)(&DAT_03001bc6 + iVar4) = sVar1 * (char)(&DAT_08290c18)[*(byte *)(param_1 + 0x19)];
  *(short *)(&DAT_03001bce + iVar4) = sVar2 * (char)(&DAT_08290c18)[*(byte *)(param_1 + 0x19)];
  *(byte *)(param_1 + 0x1b) = param_2;
  return in_lr;
}

