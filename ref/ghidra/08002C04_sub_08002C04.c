// sub_08002C04 at 0x08002C04 (thumb)

undefined4 sub_08002C04(int param_1,byte param_2)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20;
  uVar1 = (&DAT_080c8e24)[param_2 + 0x40];
  *(undefined2 *)(&DAT_03001bb6 + iVar3) = uVar1;
  *(undefined2 *)(&DAT_03001bce + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) =
       uVar1;
  sVar2 = (&DAT_080c8e24)[param_2];
  *(short *)(&DAT_03001bbe + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) = sVar2;
  *(short *)(&DAT_03001bc6 + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x1b) * 0x20) = -sVar2;
  *(short *)(&DAT_03001bb6 + iVar3) =
       *(short *)(&DAT_03001bb6 + iVar3) * (short)(char)(&DAT_08290c18)[*(byte *)(param_1 + 0x18)];
  *(short *)(&DAT_03001bbe + iVar3) =
       *(short *)(&DAT_03001bbe + iVar3) * (short)(char)(&DAT_08290c18)[*(byte *)(param_1 + 0x18)];
  *(short *)(&DAT_03001bc6 + iVar3) =
       *(short *)(&DAT_03001bc6 + iVar3) * (short)(char)(&DAT_08290c18)[*(byte *)(param_1 + 0x19)];
  *(short *)(&DAT_03001bce + iVar3) =
       *(short *)(&DAT_03001bce + iVar3) * (short)(char)(&DAT_08290c18)[*(byte *)(param_1 + 0x19)];
  *(byte *)(param_1 + 0x1b) = param_2;
  return in_lr;
}

