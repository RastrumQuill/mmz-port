// sub_0800311C at 0x0800311C (thumb)

undefined4 sub_0800311C(int param_1,byte param_2)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20;
  uVar1 = (&DAT_080c8e24)[param_2 + 0x40];
  *(undefined2 *)(&DAT_03001bb6 + iVar4) = uVar1;
  *(undefined2 *)(&DAT_03001bce + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       uVar1;
  sVar2 = (&DAT_080c8e24)[param_2];
  *(short *)(&DAT_03001bbe + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) = sVar2;
  *(short *)(&DAT_03001bc6 + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) = -sVar2;
  sVar2 = sub_080C8AD0((int)*(short *)(&DAT_03001bb6 + iVar4) << 8,*(undefined2 *)(param_1 + 0x1c));
  *(short *)(&DAT_03001bb6 + iVar4) = sVar2;
  sVar3 = sub_080C8AD0((int)*(short *)(&DAT_03001bbe + iVar4) << 8,*(undefined2 *)(param_1 + 0x1c));
  *(short *)(&DAT_03001bbe + iVar4) = sVar3;
  *(short *)(&DAT_03001bb6 + iVar4) = (char)(&DAT_08290c18)[*(byte *)(param_1 + 0x18)] * sVar2;
  *(short *)(&DAT_03001bbe + iVar4) = (char)(&DAT_08290c18)[*(byte *)(param_1 + 0x18)] * sVar3;
  sVar2 = sub_080C8AD0((int)*(short *)(&DAT_03001bc6 + iVar4) << 8,*(undefined2 *)(param_1 + 0x1e));
  *(short *)(&DAT_03001bc6 + iVar4) = sVar2;
  sVar3 = sub_080C8AD0((int)*(short *)(&DAT_03001bce + iVar4) << 8,*(undefined2 *)(param_1 + 0x1e));
  *(short *)(&DAT_03001bce + iVar4) = sVar3;
  *(short *)(&DAT_03001bc6 + iVar4) = (char)(&DAT_08290c18)[*(byte *)(param_1 + 0x19)] * sVar2;
  *(short *)(&DAT_03001bce + iVar4) = (char)(&DAT_08290c18)[*(byte *)(param_1 + 0x19)] * sVar3;
  *(byte *)(param_1 + 0x1b) = param_2;
  return in_lr;
}

