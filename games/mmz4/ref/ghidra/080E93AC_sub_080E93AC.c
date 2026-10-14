// sub_080E93AC at 0x080E93AC (thumb)

undefined4 sub_080E93AC(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_0801CC9C();
  if ((DAT_0202e8c4 & 0x40) == 0) {
    bVar1 = 0x12;
  }
  else {
    bVar1 = 0x13;
  }
  pbVar3 = (byte *)(param_1 + 0xb8);
  *pbVar3 = bVar1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = sub_08005500(DAT_0202eda0);
    if (iVar2 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x900;
    *(undefined *)(iVar2 + 0x25) = 0x1e;
    *(undefined *)(iVar2 + 9) = 1;
    *(undefined4 *)(iVar2 + 0x14) = 0x80e93ad;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(undefined *)(iVar2 + 0x11) = 1;
    *(int *)(iVar2 + 0x28) = param_1;
    *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    uVar4 = (uint)*pbVar3;
    sub_08001D30(&DAT_08c44000 + uVar4 * 5,
                 ((uint)(ushort)(&DAT_0202e040)[uVar4] -
                 (uint)((ushort)(&DAT_08c44006)[uVar4 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4400c + uVar4 * 0x14,
                 ((uint)(ushort)(&DAT_0202de40)[uVar4] - (uint)(byte)(&DAT_08c44013)[uVar4 * 0x14])
                 * 0x20 + 0x200);
  }
  else {
    sub_0801CF00(param_1,(uint)*pbVar3 << 8);
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080E950C(param_1);
  return in_lr;
}

